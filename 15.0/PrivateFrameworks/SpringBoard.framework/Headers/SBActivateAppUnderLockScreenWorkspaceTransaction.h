// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBACTIVATEAPPUNDERLOCKSCREENWORKSPACETRANSACTION_H
#define SBACTIVATEAPPUNDERLOCKSCREENWORKSPACETRANSACTION_H

@protocol SBLockScreenEnvironment;


#import "SBToAppsWorkspaceTransaction.h"
#import "SBDisableActiveInterfaceOrientationChangeAssertion.h"

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    id<SBLockScreenEnvironment> *_lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}




-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(id)initWithTransitionRequest:(id)arg0 lockScreenEnvironment:(id)arg1 ;
-(void)_activateLockScreen;
-(void)_begin;
-(void)_didComplete;
-(void)_lockScreenDidActivate;
-(void)_setupAndActivate;
-(void)dealloc;


@end


#endif