// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSTEMPLATEINSTANCE_H
#define CPSTEMPLATEINSTANCE_H

@class NSUUID, NSArray, NSXPCConnection, NSXPCListener, NSString, NSMutableDictionary, FBScene, NSMapTable, UIViewController, SiriDirectActionSource, UIWindowScene;
@protocol NSXPCListenerDelegate, UINavigationControllerDelegate, CPSTemplateViewControllerDelegate, CPSSafeAreaDelegate, CPBannerDelegate, CPDashboardProviding, CPSNavigatorObserving, CPInstrumentClusterProviding, CPTemplateProviding, BSInvalidatable, CPDashboardClientInterface, CPTemplateServiceClientInterface;

#import <Foundation/Foundation.h>

#import "CPSApplicationStateMonitor.h"
#import "CPSBannerSource.h"
#import "CPSDashboardEstimatesViewController.h"
#import "CPSDashboardGuidanceViewController.h"
#import "CPSInstrumentClusterCardViewController.h"
#import "CPSNowPlayingViewController.h"
#import "CPSOverlayViewController.h"
#import "CPSTabBarViewController.h"
#import "CPSTemplateEnvironment.h"

@interface CPSTemplateInstance : NSObject <NSXPCListenerDelegate, UINavigationControllerDelegate, CPSTemplateViewControllerDelegate, CPSSafeAreaDelegate, CPBannerDelegate, CPDashboardProviding, CPSNavigatorObserving, CPInstrumentClusterProviding, CPTemplateProviding, BSInvalidatable>

 {
    BOOL _pendingLaunchToNowPlaying;
}


@property (copy, nonatomic) NSUUID *actionSheetIdentifier; // ivar: _actionSheetIdentifier
@property (retain, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // ivar: _applicationStateMonitor
@property (retain, nonatomic) CPSBannerSource *bannerSource; // ivar: _bannerSource
@property (copy, nonatomic) NSArray *clusterAttributedInactiveVariants; // ivar: _clusterAttributedInactiveVariants
@property (copy, nonatomic) NSArray *clusterInactiveVariants; // ivar: _clusterInactiveVariants
@property (nonatomic) UIEdgeInsets currentSafeAreaInsets; // ivar: _currentSafeAreaInsets
@property (retain, nonatomic) NSXPCConnection *dashboardControllerConnection; // ivar: _dashboardControllerConnection
@property (retain, nonatomic) NSXPCListener *dashboardControllerListener; // ivar: _dashboardControllerListener
@property (retain, nonatomic) NSObject<CPDashboardClientInterface> *dashboardControllerRemoteObjectProxy; // ivar: _dashboardControllerRemoteObjectProxy
@property (readonly, nonatomic) CPSDashboardEstimatesViewController *dashboardEstimatesViewController; // ivar: _dashboardEstimatesViewController
@property (readonly, nonatomic) CPSDashboardGuidanceViewController *dashboardGuidanceViewController; // ivar: _dashboardGuidanceViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *identifierToViewControllerDictionary; // ivar: _identifierToViewControllerDictionary
@property (readonly, nonatomic) CPSInstrumentClusterCardViewController *instrumentClusterCardViewController; // ivar: _instrumentClusterCardViewController
@property (retain, nonatomic) NSXPCConnection *instrumentClusterControllerConnection; // ivar: _instrumentClusterControllerConnection
@property (retain, nonatomic) NSXPCListener *instrumentClusterControllerListener; // ivar: _instrumentClusterControllerListener
@property (readonly, nonatomic) CPSInstrumentClusterCardViewController *instrumentClusterMapETAViewController; // ivar: _instrumentClusterMapETAViewController
@property (weak, nonatomic) FBScene *instrumentClusterScene; // ivar: _instrumentClusterScene
@property (retain, nonatomic) NSMapTable *instrumentClusterViewControllerMapTable; // ivar: _instrumentClusterViewControllerMapTable
@property (retain, nonatomic) NSXPCConnection *interfaceControllerConnection; // ivar: _interfaceControllerConnection
@property (retain, nonatomic) NSXPCListener *interfaceControllerListener; // ivar: _interfaceControllerListener
@property (retain, nonatomic) NSObject<CPTemplateServiceClientInterface> *interfaceControllerRemoteObjectProxy; // ivar: _interfaceControllerRemoteObjectProxy
@property (weak, nonatomic) FBScene *mapWidgetScene; // ivar: _mapWidgetScene
@property (retain, nonatomic) CPSNowPlayingViewController *nowPlayingViewController; // ivar: _nowPlayingViewController
@property (retain, nonatomic) CPSOverlayViewController *overlayViewController; // ivar: _overlayViewController
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (weak, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (retain, nonatomic) SiriDirectActionSource *siriActivationSource; // ivar: _siriActivationSource
@property (readonly) Class superclass;
@property (retain, nonatomic) CPSTabBarViewController *tabBarViewController; // ivar: _tabBarViewController
@property (retain, nonatomic) CPSTemplateEnvironment *templateEnvironment; // ivar: _templateEnvironment
@property (weak, nonatomic) UIWindowScene *windowSceneForGuidanceWidgetScene; // ivar: _windowSceneForGuidanceWidgetScene
@property (weak, nonatomic) UIWindowScene *windowSceneForInstrumentClusterMapWidgetScene; // ivar: _windowSceneForInstrumentClusterMapWidgetScene
@property (weak, nonatomic) UIWindowScene *windowSceneForMapWidgetScene; // ivar: _windowSceneForMapWidgetScene
@property (weak, nonatomic) UIWindowScene *windowSceneForTemplateApplicationScene; // ivar: _windowSceneForTemplateApplicationScene


-(BOOL)_handleAppViewConnection:(id)arg0 ;
-(BOOL)_handleDashboardConnection:(id)arg0 ;
-(BOOL)_handleInstrumentClusterConnection:(id)arg0 ;
-(BOOL)_templateIsValidForCurrentEntitlement:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)dashboardEndpoint;
-(id)endpoint;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)instrumentClusterEndpoint;
-(id)instrumentClusterViewControllerForDisplayIdentifier:(id)arg0 ;
-(struct UIEdgeInsets )safeAreaInsetsForScene:(id)arg0 ;
-(void)_appViewConnectionInvalidationHandler;
-(void)_applicationDidThrottleAudioUpdates:(id)arg0 ;
-(void)_dashboardConnectionInvalidationHandler;
-(void)_instrumentClusterConnectionInvalidationHandler;
-(void)_pushNowPlayingIfNeeded;
-(void)allowlistClassesForBaseTemplateProvider:(id)arg0 ;
-(void)bannerDidAppearWithIdentifier:(id)arg0 ;
-(void)bannerDidDisappearWithIdentifier:(id)arg0 ;
-(void)bannerTappedWithIdentifier:(id)arg0 ;
-(void)clientRequestNowPlayingTemplateAnimated:(BOOL)arg0 ;
-(void)containsTemplate:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)didCreateNavigator:(id)arg0 ;
-(void)dismissTemplateAnimated:(id)arg0 reply:(id)arg1 ;
-(void)getPresentedTemplateWithReply:(id)arg0 ;
-(void)getTemplatesWithReply:(id)arg0 ;
-(void)getTopTemplateWithReply:(id)arg0 ;
-(void)hostSetAttributedInactiveVariants:(id)arg0 ;
-(void)hostSetInactiveVariants:(id)arg0 ;
-(void)hostSetShortcutButtons:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)popTemplateAnimated:(id)arg0 reply:(id)arg1 ;
-(void)popToRootTemplateAnimated:(id)arg0 reply:(id)arg1 ;
-(void)popToTemplate:(id)arg0 animated:(id)arg1 reply:(id)arg2 ;
-(void)presentActionSheetTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 reply:(id)arg3 ;
-(void)presentAlertTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 reply:(id)arg3 ;
-(void)presentVoiceTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 reply:(id)arg3 ;
-(void)pushEntityTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 presentationStyle:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)pushGridTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 presentationStyle:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)pushInformationTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 presentationStyle:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)pushListTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 presentationStyle:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)pushMapTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 presentationStyle:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)pushNowPlayingTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 presentationStyle:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)pushSearchTemplate:(id)arg0 withProxyDelegate:(id)arg1 animated:(id)arg2 presentationStyle:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)requestBannerProviderWithReply:(id)arg0 ;
-(void)requestNavigationProviderForMapTemplate:(id)arg0 withReply:(id)arg1 ;
-(void)setHostPrefersDarkUserInterfaceStyle:(BOOL)arg0 ;
// -(void)setTabBarTemplate:(id)arg0 withProxyDelegate:(id)arg1 reply:(id)arg2 animated:(unk)arg3  ;
-(void)templateViewController:(id)arg0 shouldActivateSiriWithDirectActionContext:(id)arg1 ;
-(void)templateViewControllerDidDismiss:(id)arg0 ;
-(void)templateViewControllerDidPop:(id)arg0 ;
-(void)updateInterestingInsets:(struct UIEdgeInsets )arg0 ;
-(void)updateTabBarTemplate:(id)arg0 ;
-(void)viewController:(id)arg0 didUpdateSafeAreaInsets:(struct UIEdgeInsets )arg1 ;


@end


#endif