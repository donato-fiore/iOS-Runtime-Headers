// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPTEMPLATEAPPLICATIONDASHBOARDSCENE_H
#define CPTEMPLATEAPPLICATIONDASHBOARDSCENE_H

@class UIScene, _UIContextBinder, UIScreen, UITraitCollection, UIStatusBarManager, UIWindow, NSString;
@protocol _UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, NSObject, CPTemplateApplicationDashboardSceneDelegate;


#import "CPDashboardController.h"

@interface CPTemplateApplicationDashboardScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace>

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
@property (readonly, nonatomic) CPDashboardController *dashboardController; // ivar: _dashboardController
@property (retain, nonatomic) UIWindow *dashboardWindow; // ivar: _dashboardWindow
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<CPTemplateApplicationDashboardSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_hostsWindows;
-(BOOL)_permitContextCreationForBindingDescription:(struct ? )arg0 ;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 ;
-(id)_componentForKey:(id)arg0 ;
-(id)_definition;
-(id)_fbsSceneLayerForWindow:(id)arg0 ;
-(id)initWithSession:(id)arg0 connectionOptions:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )_referenceBounds;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;
-(struct UIEdgeInsets )_safeAreaInsetsForInterfaceOrientation:(NSInteger)arg0 ;
-(void)_attachWindow:(id)arg0 ;
-(void)_deliverDashboardControllerToDelegate;
-(void)_detachWindow:(id)arg0 ;
-(void)_invalidate;
-(void)_readySceneForConnection;
-(void)_refreshTraitCollection;
-(void)_updateSceneTraitsAndPushTraitsToScreen:(BOOL)arg0 ;
-(void)_updateVisibleWindowOrderWithTest:(id)arg0 ;
-(void)_windowUpdatedProperties:(id)arg0 ;
-(void)_windowUpdatedVisibility:(id)arg0 ;


@end


#endif