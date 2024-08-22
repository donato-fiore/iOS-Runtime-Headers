// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBINSTRUMENTCLUSTER_H
#define DBINSTRUMENTCLUSTER_H

@class UIWindow, UIView, NSString, FBSDisplayConfiguration, FBSDisplayIdentity, NSMutableDictionary, NSHashTable, UIScreen, CARScreenInfo;
@protocol CARSessionCommandObserving, DBEnvironmentConfigurationObserving, DBNavigationStateObserving, DBEnvironment, BSInvalidatable, CRSIconLayoutVehicleDataProviding;

#import <Foundation/Foundation.h>

#import "DBEnvironmentConfiguration.h"
#import "DBInstrumentClusterRootViewController.h"
#import "DBWorkspace.h"
#import "DBInstrumentClusterWorkspaceOwner.h"

@interface DBInstrumentCluster : NSObject <CARSessionCommandObserving, DBEnvironmentConfigurationObserving, DBNavigationStateObserving, DBEnvironment>



@property (retain, nonatomic) UIWindow *clusterWindow; // ivar: _clusterWindow
@property (retain, nonatomic) UIView *cornerRadiusView; // ivar: _cornerRadiusView
@property (retain, nonatomic) UIWindow *cornerRadiusWindow; // ivar: _cornerRadiusWindow
@property (nonatomic) CGFloat currentCornerRadius; // ivar: _currentCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (retain, nonatomic) NSObject<BSInvalidatable> *eventDispatchAssertion; // ivar: _eventDispatchAssertion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CRSIconLayoutVehicleDataProviding> *iconLayoutDataProvider;
@property (retain, nonatomic) NSMutableDictionary *identifierToAppInfoMap; // ivar: _identifierToAppInfoMap
@property (retain, nonatomic) NSMutableDictionary *identifierToAppScenesMap; // ivar: _identifierToAppScenesMap
@property (retain, nonatomic) NSMutableDictionary *identifierToForegroundAppScenesMap; // ivar: _identifierToForegroundAppScenesMap
@property (retain, nonatomic) UIView *interestingView; // ivar: _interestingView
@property (retain, nonatomic) UIWindow *interestingWindow; // ivar: _interestingWindow
@property (retain, nonatomic) NSHashTable *sceneObservers; // ivar: _sceneObservers
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen
@property (retain, nonatomic) CARScreenInfo *screenInfo; // ivar: _screenInfo
@property (readonly) Class superclass;
@property (retain, nonatomic) DBInstrumentClusterRootViewController *viewController; // ivar: _viewController
@property (retain, nonatomic) DBWorkspace *workspace; // ivar: _workspace
@property (retain, nonatomic) DBInstrumentClusterWorkspaceOwner *workspaceOwner; // ivar: _workspaceOwner


+(id)_directionStringForDirection:(NSInteger)arg0 ;
-(id)_clusterScene;
-(id)_foregroundActiveScene;
-(id)_systemRuleForUsage:(unsigned int)arg0 onDisplays:(id)arg1 ;
-(id)applicationInfoForScene:(id)arg0 ;
-(id)focusWindow;
-(id)initWithWindowScene:(id)arg0 environmentConfiguration:(id)arg1 ;
-(id)sceneForAppInfo:(id)arg0 ;
-(id)sceneIdentifierForAppInfo:(id)arg0 ;
-(id)systemGestureWindow;
-(struct CGRect )sceneFrameForAppInfo:(id)arg0 ;
-(struct CGRect )sceneFrameForAppInfo:(id)arg0 proxyAppInfo:(id)arg1 ;
-(struct UIEdgeInsets )_rootViewControllerInsets;
-(struct UIEdgeInsets )safeAreaInsetsForAppInfo:(id)arg0 ;
-(struct UIEdgeInsets )safeAreaInsetsForAppInfo:(id)arg0 proxyAppInfo:(id)arg1 ;
-(void)_drawCorners;
-(void)addObserver:(id)arg0 ;
-(void)environmentConfiguration:(id)arg0 appearanceStyleDidChange:(NSInteger)arg1 ;
-(void)environmentConfiguration:(id)arg0 mapsAppearanceStyleDidChange:(NSInteger)arg1 ;
-(void)environmentConfiguration:(id)arg0 nightModeDidChange:(BOOL)arg1 ;
-(void)environmentConfiguration:(id)arg0 receivedShowUIWithURL:(id)arg1 ;
-(void)environmentConfiguration:(id)arg0 viewAreaDidChangeFromViewAreaFrame:(struct CGRect )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 toViewAreaFrame:(struct CGRect )arg3 safeAreaInsets:(struct UIEdgeInsets )arg4 duration:(CGFloat)arg5 transitionControlType:(NSUInteger)arg6 ;
-(void)handleEvent:(id)arg0 ;
-(void)installHardwareButtonSystemGestures;
-(void)invalidate;
-(void)navigationStateProvider:(id)arg0 frontmostIdentifierDidChange:(id)arg1 ;
-(void)navigationStateProvider:(id)arg0 navigatingIdentifiersDidChange:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pressedACBackInstrumentCluster;
-(void)pressedSelectInstrumentCluster;
-(void)processMonitor:(id)arg0 didHandleDeathOfBundleIdentifier:(id)arg1 ;
-(void)processMonitor:(id)arg0 shouldHandleDeathOfBundleIdentifier:(id)arg1 isCrash:(BOOL)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 appliedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 completedWithContext:(id)arg2 error:(id)arg3 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 preparedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)session:(id)arg0 receivedUnhandledRemoteEvent:(id)arg1 withPayload:(id)arg2 ;
-(void)stopUIReceivedForEnvironmentConfiguration:(id)arg0 ;
-(void)toggleDownInstrumentCluster;
-(void)toggleLeftInstrumentCluster;
-(void)toggleRightInstrumentCluster;
-(void)toggleUpInstrumentCluster;


@end


#endif