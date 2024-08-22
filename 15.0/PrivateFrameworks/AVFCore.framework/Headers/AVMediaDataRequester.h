// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMEDIADATAREQUESTER_H
#define AVMEDIADATAREQUESTER_H

@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVMediaDataRequester : NSObject {
    id<AVMediaDataRequesterConsumer> *_mediaDataConsumer;
}


@property (readonly, nonatomic) id *requestBlock; // ivar: _requestBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue


-(id)init;
-(id)initWithMediaDataConsumer:(id)arg0 requestQueue:(id)arg1 requestBlock:(id)arg2 ;
-(void)_requestMediaDataIfReady;
-(void)dealloc;
-(void)invalidate;
-(void)startRequestingMediaData;


@end


#endif