// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYMESSAGEPRODUCER_H
#define OSPREYMESSAGEPRODUCER_H

@protocol OspreyClientStreamingContext;

#import <Foundation/Foundation.h>


@interface OspreyMessageProducer : NSObject {
    id *_serializer;
    id<OspreyClientStreamingContext> *_streamingContext;
}




// -(id)initWithMessageSerializer:(id)arg0 streamingContext:(unk)arg1  ;
-(void)finishProducing;
-(void)produceMessage:(id)arg0 ;
-(void)produceMessage:(id)arg0 compressed:(BOOL)arg1 ;


@end


#endif