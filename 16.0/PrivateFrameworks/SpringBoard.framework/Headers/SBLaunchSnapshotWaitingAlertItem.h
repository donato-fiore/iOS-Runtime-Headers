// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLAUNCHSNAPSHOTWAITINGALERTITEM_H
#define SBLAUNCHSNAPSHOTWAITINGALERTITEM_H

@class SBAlertItem;



@interface SBLaunchSnapshotWaitingAlertItem : SBAlertItem



-(BOOL)allowLockScreenDismissal;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)behavesSuperModally;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif