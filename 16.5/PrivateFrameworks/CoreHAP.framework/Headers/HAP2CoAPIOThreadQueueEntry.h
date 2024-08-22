// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2COAPIOTHREADQUEUEENTRY_H
#define HAP2COAPIOTHREADQUEUEENTRY_H

@class HMFActivity;
@protocol HAP2CoAPIOConsumer;

#import <Foundation/Foundation.h>


@interface HAP2CoAPIOThreadQueueEntry : NSObject {
    id<HAP2CoAPIOConsumer> *_consumer;
    NSUInteger _operationType;
    id *_sessionBlock;
    CGFloat _timeout;
    HMFActivity *_activity;
}




-(NSInteger)compare:(id)arg0 ;


@end


#endif