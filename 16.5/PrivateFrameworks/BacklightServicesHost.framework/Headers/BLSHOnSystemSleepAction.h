// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHONSYSTEMSLEEPACTION_H
#define BLSHONSYSTEMSLEEPACTION_H

@class NSString;
@protocol SWSystemSleepObserver, BSInvalidatable, BSCancellable, BLSHOSInterfaceProviding, BLSHOnSystemSleepActionDelegate;

#import <Foundation/Foundation.h>


@interface BLSHOnSystemSleepAction : NSObject <SWSystemSleepObserver, BSInvalidatable, BSCancellable>

 {
    os_unfair_lock_s _lock;
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    id<BLSHOnSystemSleepActionDelegate> *_delegate;
    id *_lock_proceedWithSleepBlock;
    CGFloat _lock_sleepRequestedTime;
    NSInteger _lock_state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


+(id)actionWithIdentifier:(id)arg0 delegate:(id)arg1 ;
+(id)actionWithIdentifier:(id)arg0 delegate:(id)arg1 osInterfaceProvider:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 osInterfaceProvider:(id)arg2 ;
-(void)actionCompleted;
-(void)cancel;
-(void)install;
-(void)invalidate;
-(void)systemSleepMonitor:(id)arg0 prepareForSleepWithCompletion:(id)arg1 ;
-(void)systemSleepMonitor:(id)arg0 sleepRequestedWithResult:(id)arg1 ;
-(void)systemSleepMonitorSleepRequestAborted:(id)arg0 ;
-(void)systemSleepMonitorWillWakeFromSleep:(id)arg0 ;
-(void)systemWillWakeForReason:(id)arg0 ;
-(void)uninstall;


@end


#endif