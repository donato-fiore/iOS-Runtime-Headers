// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVAPPLICATIONCONTROLLER_H
#define TVAPPLICATIONCONTROLLER_H

@class IKAppContext, IKAppDataStorage, NSXPCListener, NSDictionary, NSDate, UIViewController<TVAppRootViewController>, UINavigationController, NSString, UIViewController, UIView, UIWindow;
@protocol IKAppContextInspectorDelegate, IKAppDeviceConfig, IKAppContextDelegatePrivate, AMSUIDynamicViewControllerDelegate, _TVAppNavigationControllerDelegate, IKAppContextDelegate, TVApplicationControllerDelegate, UITraitEnvironment;

#import <Foundation/Foundation.h>

#import "_TVMLKitApplication.h"
#import "_TVApplicationInspector.h"
#import "TVApplicationControllerContext.h"

@interface TVApplicationController : NSObject <IKAppContextInspectorDelegate, IKAppDeviceConfig, IKAppContextDelegatePrivate, AMSUIDynamicViewControllerDelegate, _TVAppNavigationControllerDelegate, IKAppContextDelegate>

 {
    IKAppContext *_appContext;
    _TVMLKitApplication *_application;
    IKAppDataStorage *_appLocalStorage;
    NSXPCListener *_serviceListener;
    NSDictionary *_openURLResumeOptions;
    NSDictionary *_openURLReloadOptions;
    BOOL _suspended;
    BOOL _reloadInProgress;
    BOOL _reloadOnResume;
    CGFloat _reloadOnResumeMinInterval;
    NSDate *_reloadOnResumeBackgroundedDate;
    BOOL _doLaunchOpenURLHandling;
    NSDictionary *_launchOpenURLOptions;
    BOOL _popViewControllerOnBackground;
    UIViewController<TVAppRootViewController> *_appRootViewController;
    NSInteger _interfaceOrientation;
}


@property (readonly, nonatomic) UINavigationController *_currentNavigationController;
@property (readonly, nonatomic) IKAppContext *appContext;
@property (readonly, nonatomic) _TVApplicationInspector *applicationInspector; // ivar: _applicationInspector
@property (readonly, nonatomic) TVApplicationControllerContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<TVApplicationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dynamicUICompletion; // ivar: _dynamicUICompletion
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITraitEnvironment> *keyTraitEnvironment; // ivar: _keyTraitEnvironment
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *viewServiceKeyView;
@property (readonly, nonatomic) UIWindow *window; // ivar: _window


+(id)_jsLaunchOptionsWithApplicationOptions:(id)arg0 ;
+(void)initialize;
-(BOOL)_hasReloadOnResumeMinIntervalPassed;
-(BOOL)_shouldReloadOnResume;
-(BOOL)appContext:(id)arg0 highlightViewForElement:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5 ;
-(BOOL)appContext:(id)arg0 highlightViewsForElements:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5 ;
-(BOOL)appContext:(id)arg0 validateDOMDocument:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)appNavigationController:(id)arg0 shouldDismissShroudForDocument:(id)arg1 ;
-(BOOL)appNavigationController:(id)arg0 shouldIgnoreDismissalForViewController:(id)arg1 ;
-(BOOL)appNavigationController:(id)arg0 shouldOverrideModalBehaviorForDocument:(id)arg1 andExistingDocument:(id)arg2 ;
-(BOOL)cancelHighlightViewForAppContext:(id)arg0 ;
-(BOOL)isTimeZoneSet;
-(BOOL)jsOpenURL:(id)arg0 options:(id)arg1 ;
-(BOOL)openURL:(id)arg0 options:(id)arg1 ;
-(NSUInteger)preferredVideoFormat;
-(NSUInteger)preferredVideoPreviewFormat;
-(id)activeDocument;
-(id)deviceConfigForContext:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 window:(id)arg1 delegate:(id)arg2 ;
-(id)modalControllerForContext:(id)arg0 ;
-(id)navigationControllerForContext:(id)arg0 ;
-(id)storeFrontCountryCode;
-(id)systemLanguage;
-(id)tabBarForContext:(id)arg0 ;
-(id)timeZone;
-(struct CGSize )screenSize;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_applicationWillTerminateNotification:(id)arg0 ;
-(void)_launchApp;
-(void)_openURLControllerDidDisplay:(id)arg0 ;
-(void)_openURLControllerHandler:(BOOL)arg0 ;
-(void)_openURLOnAppLaunchControllerDidDisplay:(id)arg0 ;
-(void)_reloadControllerDidDisplay:(id)arg0 ;
-(void)_statusBarOrientationDidChange:(id)arg0 ;
-(void)appContext:(id)arg0 didChangeInspectElementMode:(BOOL)arg1 ;
-(void)appContext:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appContext:(id)arg0 didStartWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 didStopWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)appContext:(id)arg0 needsReloadWithUrgency:(NSUInteger)arg1 options:(id)arg2 ;
-(void)appContext:(id)arg0 openDynamicUIURL:(id)arg1 metricsOverlay:(id)arg2 completion:(id)arg3 ;
-(void)appContext:(id)arg0 openMarketingItem:(id)arg1 metricsOverlay:(id)arg2 completion:(id)arg3 ;
-(void)applicationDidResume:(id)arg0 ;
-(void)applicationWillSuspend:(id)arg0 ;
-(void)dealloc;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;
// -(void)evaluateInJavaScriptContext:(id)arg0 completion:(unk)arg1  ;
-(void)reload;
-(void)stop;


@end


#endif