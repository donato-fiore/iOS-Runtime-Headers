// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUSERSESSIONCONTROLLER_H
#define SBUSERSESSIONCONTROLLER_H

@class UMUserManager, UMUser, NSMutableArray, NSMutableSet, UMUserSwitchBlockingTask, NSDate, NSDictionary, LKLogoutSupport, NSString;
@protocol SBLogoutProgressDataSource, SBLogoutProgressDelegate, UMCriticalUserSwitchStakeholder;

#import <Foundation/Foundation.h>

#import "SBLogoutProgressTransientOverlayViewController.h"
#import "SBMainDisplayPolicyAggregator.h"

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBLogoutProgressDelegate, UMCriticalUserSwitchStakeholder>

 {
    UMUserManager *_userManager;
    UMUser *_lazy_user;
    SBLogoutProgressTransientOverlayViewController *_progressTransientOverlayViewController;
    NSMutableArray *_displayApplications;
    NSMutableSet *_terminatingApplications;
    UMUserSwitchBlockingTask *_terminateApplicationsTask;
    NSDate *_terminateApplicationsStartDate;
    NSDictionary *_debugBlockingTasks;
    LKLogoutSupport *_logoutSupport;
}


@property (readonly, nonatomic) BOOL canLogout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMultiUserSupported;
@property (nonatomic, getter=isLoggingOut) BOOL loggingOut; // ivar: _loggingOut
@property (readonly, nonatomic, getter=isLoginSession) BOOL loginSession; // ivar: _loginSession
@property (retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator; // ivar: _lazy_policyAggregator
@property (readonly, nonatomic) NSInteger sessionType;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) UMUser *user;


-(id)_initWithUserManager:(id)arg0 ;
-(id)_massageApplicationListForDisplay:(id)arg0 ;
-(id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg0 ;
-(id)policyAggregator;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )_portraitOrientedProgressLocationForOrientation:(NSInteger)arg0 ;
-(void)_displayProgressTransientOverlayIfNeeded;
-(void)_evaluateRunningApplications;
-(void)_noteApplicationDidExit:(id)arg0 ;
-(void)_noteApplicationDidExitFromNotification:(id)arg0 ;
-(void)_readyToSwitchToUser:(id)arg0 ;
-(void)dealloc;
-(void)disableCurrentUser;
-(void)logout;
-(void)logoutProgressTransientOverlayViewControllerDidDisappear:(id)arg0 ;
-(void)logoutWithLogoutSupport:(id)arg0 completion:(id)arg1 ;
-(void)readyToSwitchToLoginSession:(id)arg0 ;
-(void)readyToSwitchToUser:(id)arg0 ;
-(void)userSwitchBlockingTasksDidUpdate:(id)arg0 ;
-(void)willSwitchToUser:(id)arg0 ;


@end


#endif