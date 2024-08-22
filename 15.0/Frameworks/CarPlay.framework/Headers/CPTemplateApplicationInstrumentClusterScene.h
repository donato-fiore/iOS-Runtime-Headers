// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPTEMPLATEAPPLICATIONINSTRUMENTCLUSTERSCENE_H
#define CPTEMPLATEAPPLICATIONINSTRUMENTCLUSTERSCENE_H

@class UIScene, _UIContextBinder, UIScreen, UITraitCollection, UIStatusBarManager, NSString, UIWindow;
@protocol _UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, CRSUIClusterZoomActionDelegate, CRSUIInstrumentClusterSettingsObserving, NSObject, CPTemplateApplicationInstrumentClusterSceneDelegate;


#import "CPInstrumentClusterController.h"
#import "CPInterfaceController.h"

@interface CPTemplateApplicationInstrumentClusterScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, CRSUIClusterZoomActionDelegate, CRSUIInstrumentClusterSettingsObserving>

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
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<CPTemplateApplicationInstrumentClusterSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPInstrumentClusterController *instrumentClusterController; // ivar: _instrumentClusterController
@property (retain, nonatomic) UIWindow *instrumentClusterWindow; // ivar: _instrumentClusterWindow
@property (readonly, nonatomic) CPInterfaceController *interfaceController; // ivar: _interfaceController
@property (readonly) Class superclass;


+(BOOL)_hostsWindows;
-(BOOL)_permitContextCreationForBindingDescription:(struct ? )arg0 ;
-(NSUInteger)compassSetting;
-(NSUInteger)itemType;
-(NSUInteger)speedLimitSetting;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 ;
-(id)_clusterSettings;
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
-(void)_deliverControllerToDelegate;
-(void)_detachWindow:(id)arg0 ;
-(void)_invalidate;
-(void)_readySceneForConnection;
-(void)_updateVisibleWindowOrderWithTest:(id)arg0 ;
-(void)_windowUpdatedProperties:(id)arg0 ;
-(void)_windowUpdatedVisibility:(id)arg0 ;
-(void)handleZoomInDirection:(NSInteger)arg0 ;
-(void)updateSceneForNewCompassSetting;
-(void)updateSceneForNewItemTypeSetting;
-(void)updateSceneForNewSpeedLimitSetting;


@end


#endif