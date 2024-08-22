// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORFORBATTERYDISKANDKEYBAG_H
#define SUINSTALLATIONCONSTRAINTMONITORFORBATTERYDISKANDKEYBAG_H

@class BSTimer, NSString;
@protocol SUKeybagInterfaceObserver;


#import "SUInstallationConstraintMonitorBase.h"
#import "SUKeybagInterface.h"

@interface SUInstallationConstraintMonitorForBatteryDiskAndKeybag : SUInstallationConstraintMonitorBase <SUKeybagInterfaceObserver>

 {
    SUKeybagInterface *_queue_keybag;
    BSTimer *_queue_timer;
    NSUInteger _queue_deltaSpaceNeeded;
    BOOL _queue_diskSatisfied;
    BOOL _queue_keybagSatisfied;
    BOOL _queue_passcodeSatisfied;
    BOOL _queue_batterySatisfied;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deltaSpaceNeeded;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_evaluateBattery;
-(BOOL)_queue_evaluateDisk;
-(BOOL)_queue_evaluateKeybag;
-(BOOL)_queue_evaluatePasscodeLocked;
-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 pollDuration:(CGFloat)arg2 keybag:(id)arg3 ;
-(void)_queue_pollSatisfied;
-(void)dealloc;
-(void)keybagInterface:(id)arg0 hasPasscodeSetDidChange:(BOOL)arg1 ;
-(void)keybagInterface:(id)arg0 passcodeLockedStateDidChange:(BOOL)arg1 ;
-(void)refreshConstraints;


@end


#endif