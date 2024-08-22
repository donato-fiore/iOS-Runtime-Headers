// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPMEMORYCOMPONENTWRITECHANNEL_H
#define TSPMEMORYCOMPONENTWRITECHANNEL_H

@class NSString;
@protocol TSPComponentWriteChannel, OS_dispatch_queue, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel>

 {
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_data> *_streamData;
    BOOL _isClosed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)serializedData;
-(void)_close;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif