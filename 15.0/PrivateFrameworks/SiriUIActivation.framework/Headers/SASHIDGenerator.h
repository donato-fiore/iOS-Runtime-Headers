// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASHIDGENERATOR_H
#define SASHIDGENERATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SASHIDGenerator : NSObject {
    *__IOHIDEventSystemClient _ioSystemClient;
    NSObject<OS_dispatch_queue> *_generatorQueue;
}




-(id)init;
-(void)_sendHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_sendHIDHoldHomeButton;
-(void)_sendHIDHoldLockButton;
-(void)dealloc;
-(void)sendHoldHomeButtonHIDEvents;
-(void)sendHoldLockButtonHIDEvents;


@end


#endif