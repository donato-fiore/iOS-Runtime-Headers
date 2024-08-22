// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASHBOARD_H
#define DASHBOARD_H

@class UISystemShellApplication, FBSApplicationLibrary, CRSAppHistoryService, CRCarPlayAppPolicyEvaluator, NSString, NSMutableDictionary, CRSIconLayoutService, CRSSessionService;
@protocol CRSAppHistoryDataProviding, CRSIconLayoutServiceDelegate, FBSystemServiceDelegate, OS_dispatch_source, BSInvalidatable;


#import "DBAppHistory.h"
#import "DBDisplayManager.h"

@interface DashBoard : UISystemShellApplication <CRSAppHistoryDataProviding, CRSIconLayoutServiceDelegate, FBSystemServiceDelegate>

 {
    FBSApplicationLibrary *_sharedApplicationLibrary;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
}


@property (retain, nonatomic) DBAppHistory *appHistory; // ivar: _appHistory
@property (retain, nonatomic) CRSAppHistoryService *appHistoryService; // ivar: _appHistoryService
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator; // ivar: _appPolicyEvaluator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DBDisplayManager *displayManager; // ivar: _displayManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *iconLayoutDataProviders; // ivar: _iconLayoutDataProviders
@property (retain, nonatomic) CRSIconLayoutService *iconLayoutService; // ivar: _iconLayoutService
@property (retain, nonatomic) NSObject<BSInvalidatable> *processLaunchWatchdogMonitoringAssertion; // ivar: _processLaunchWatchdogMonitoringAssertion
@property (retain, nonatomic) CRSSessionService *sessionService; // ivar: _sessionService
@property (readonly) Class superclass;


+(BOOL)registerAsSystemApp;
+(id)_newApplicationInitializationContext;
+(id)_newApplicationLibrary;
-(BOOL)_hostsSystemStatusBar;
-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)disablesFrontBoardImplicitWindowScenes;
-(BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(NSUInteger)arg0 ;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(id)_currentAppHistory;
-(id)_currentDashboard;
-(id)_keyWindowForScreen:(id)arg0 ;
-(id)_windowForSystemAppButtonEventsForScreen:(id)arg0 ;
-(id)iconLayoutService:(id)arg0 dataProviderForVehicleID:(id)arg1 ;
-(id)init;
-(id)sharedApplicationLibrary;
-(id)systemServiceApplicationInfoProvider:(id)arg0 ;
-(void)_runSiriTest:(id)arg0 testOptions:(id)arg1 ;
-(void)dealloc;
-(void)getSessionEchoContextStatesWithCompletion:(id)arg0 ;
-(void)getSessionFeatureKeysWithCompletion:(id)arg0 ;
-(void)getSessionUIContextStatesWithCompletion:(id)arg0 ;
-(void)getUIContextStatesWithCompletion:(id)arg0 ;
-(void)setAnalyticsValues:(id)arg0 completion:(id)arg1 ;
-(void)setSessionFeatureKeys:(id)arg0 completion:(id)arg1 ;
-(void)systemService:(id)arg0 canActivateApplication:(id)arg1 withResult:(id)arg2 ;
-(void)systemService:(id)arg0 handleOpenApplicationRequest:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif