// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2COAPIOTHREADQUEUEENTRY_H
#define HAP2COAPIOTHREADQUEUEENTRY_H

@class HMFActivity;
@protocol HAP2CoAPIOConsumer;

#import <Foundation/Foundation.h>


@interface HAP2CoAPIOThreadQueueEntry : NSObject {
    BOOL _shouldRegister;
    BOOL _shouldUnregister;
    id<HAP2CoAPIOConsumer> *_consumer;
    id *_sessionBlock;
    HMFActivity *_activity;
}






@end


#endif