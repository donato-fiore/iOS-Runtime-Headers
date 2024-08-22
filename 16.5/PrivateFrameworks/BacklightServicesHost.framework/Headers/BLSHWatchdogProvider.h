// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHWATCHDOGPROVIDER_H
#define BLSHWATCHDOGPROVIDER_H

@class BSAbsoluteMachTimer;

#import <Foundation/Foundation.h>


@interface BLSHWatchdogProvider : NSObject {
    BSAbsoluteMachTimer *_lock_fireRetryTimer;
    os_unfair_lock_s _lock;
}


@property (getter=isWatchdogEnabled) BOOL watchdogEnabled; // ivar: _watchdogEnabled


+(BOOL)checkForWatchdogDidFire:(BOOL)arg0 ;
+(void)markWatchdogDidFire:(id)arg0 abortReason:(id)arg1 ;
+(void)resetWatchdogDidFire;
+(void)showWatchdogDidFireAlert:(id)arg0 ;
-(id)init;
-(id)scheduleWatchdogWithDelegate:(id)arg0 explanation:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)_fireWatchdogWithTimer:(id)arg0 delegate:(id)arg1 timeout:(CGFloat)arg2 elapsedTime:(CGFloat)arg3 abortContext:(id)arg4 explanation:(id)arg5 remainingRetries:(NSUInteger)arg6 ;
-(void)clearWatchdogWithExplanation:(id)arg0 timeout:(CGFloat)arg1 elapsedTime:(CGFloat)arg2 ;
-(void)dealloc;
-(void)didDetectSignificantUserInteraction;
-(void)fireWatchdogWithTimer:(id)arg0 delegate:(id)arg1 timeout:(CGFloat)arg2 elapsedTime:(CGFloat)arg3 ;
-(void)registerHandlersForService:(id)arg0 ;


@end


#endif