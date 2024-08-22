// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPTEMPLATEAPPLICATIONSCENE_H
#define CPTEMPLATEAPPLICATIONSCENE_H

@class UIScene, _UIContextBinder, UIScreen, UITraitCollection, UIStatusBarManager, NSString, UIApplicationSceneSettingsDiffInspector;
@protocol _UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, _UISceneSettingsDiffAction, CPWindowProviding, NSObject, CPTemplateApplicationSceneDelegate;


#import "CPWindow.h"
#import "CPInterfaceController.h"

@interface CPTemplateApplicationScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, _UISceneSettingsDiffAction, CPWindowProviding>

 {
    id<NSObject> *_sceneWillConnectObserver;
    id<NSObject> *_didFinishLaunchingObserver;
    BOOL _sceneWillConnect;
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    NSInteger _screenRequestedOverscanCompensation;
}


@property (readonly, nonatomic) NSObject<UICoordinateSpace> *_coordinateSpace;
@property (readonly, nonatomic) NSInteger _interfaceOrientation;
@property (readonly, nonatomic) UIScreen *_screen;
@property (readonly, nonatomic) UIStatusBarManager *_statusBarManager;
@property (readonly, nonatomic) UITraitCollection *_traitCollection;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) UITraitCollection *carTraitCollection;
@property (retain, nonatomic) CPWindow *carWindow; // ivar: _carWindow
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<CPTemplateApplicationSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPInterfaceController *interfaceController; // ivar: _interfaceController
@property (retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsInterfaceStyleDiffInspector; // ivar: _sceneSettingsInterfaceStyleDiffInspector
@property (readonly) Class superclass;


+(BOOL)_hostsWindows;
+(id)activeTemplateScene;
-(BOOL)_permitContextCreationForBindingDescription:(struct ? )arg0 ;
-(BOOL)_sceneWillConnect;
-(BOOL)_shouldCallAppDelegate;
-(BOOL)_shouldCreateCarWindow;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 ;
-(id)_componentForKey:(id)arg0 ;
-(id)_definition;
-(id)_fbsSceneLayerForWindow:(id)arg0 ;
-(id)initWithSession:(id)arg0 connectionOptions:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;
-(struct UIEdgeInsets )_safeAreaInsetsForInterfaceOrientation:(NSInteger)arg0 ;
-(void)_attachWindow:(id)arg0 ;
-(void)_deliverInterfaceControllerToDelegate;
-(void)_detachWindow:(id)arg0 ;
-(void)_invalidate;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_readySceneForConnection;
-(void)_refreshTraitCollection;
-(void)_updateVisibleWindowOrderWithTest:(id)arg0 ;
-(void)_windowUpdatedProperties:(id)arg0 ;
-(void)_windowUpdatedVisibility:(id)arg0 ;
-(void)updateLayoutGuideWithInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif