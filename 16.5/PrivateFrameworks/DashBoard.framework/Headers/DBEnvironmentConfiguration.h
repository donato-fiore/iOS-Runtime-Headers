// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBENVIRONMENTCONFIGURATION_H
#define DBENVIRONMENTCONFIGURATION_H

@class NSString, CRCarPlayAppPolicyEvaluator, DBClusterControlChannel, DBClusterControlSession, FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplayLayoutPublisher, CARObserverHashTable, CRPairedVehicleManager, NSMutableDictionary, PDCPreflightManager, UIScreen, CARSession, UITraitCollection, CRVehicle, NSMapTable, CRSUIWallpaperPreferences;
@protocol CARSessionCommandObserving, DBAppPolicyProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DBAnalytics.h"
#import "DBAppHistory.h"
#import "DBIconBadgeController.h"
#import "DBIconImageCache.h"
#import "DBLayerMetadataService.h"
#import "DBNavigationStateProvider.h"

@interface DBEnvironmentConfiguration : NSObject <CARSessionCommandObserving, DBAppPolicyProviding>

 {
    os_unfair_lock_s _policyLock;
}


@property (readonly, nonatomic) NSString *OEMIconLabel; // ivar: _OEMIconLabel
@property (readonly, nonatomic, getter=isOEMIconVisible) BOOL OEMIconVisible; // ivar: _OEMIconVisible
@property (readonly, nonatomic, getter=isACBackSupported) BOOL acBackSupported; // ivar: _acBackSupported
@property (readonly, nonatomic, getter=isAmbientBrightnessNighttime) BOOL ambientBrightnessNighttime;
@property (readonly, nonatomic) DBAnalytics *analytics; // ivar: _analytics
@property (readonly, nonatomic) DBAppHistory *appHistory; // ivar: _appHistory
@property (readonly, nonatomic) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator; // ivar: _appPolicyEvaluator
@property (readonly, nonatomic) NSInteger carUserInterfaceStyle; // ivar: _carUserInterfaceStyle
@property (retain, nonatomic) DBClusterControlChannel *clusterControlChannel; // ivar: _clusterControlChannel
@property (retain, nonatomic) DBClusterControlSession *clusterControlSession; // ivar: _clusterControlSession
@property (readonly, nonatomic, getter=isConnectedWirelessly) BOOL connectedWirelessly; // ivar: _connectedWirelessly
@property (readonly, nonatomic) CGRect currentSafeViewAreaFrame;
@property (nonatomic) NSUInteger currentStatusBarEdge; // ivar: _currentStatusBarEdge
@property (readonly, nonatomic) CGRect currentUnadjustedSafeViewAreaFrame; // ivar: _currentUnadjustedSafeViewAreaFrame
@property (nonatomic) CGRect currentViewAreaFrame; // ivar: _currentViewAreaFrame
@property (nonatomic) UIEdgeInsets currentViewAreaSafeAreaInsets; // ivar: _currentViewAreaSafeAreaInsets
@property (nonatomic) BOOL currentViewAreaSupportsFocusTransfer; // ivar: _currentViewAreaSupportsFocusTransfer
@property (readonly, nonatomic) BOOL currentViewAreaSupportsUIOutsideSafeArea;
@property (nonatomic) NSUInteger currentViewAreaTransitionControlType; // ivar: _currentViewAreaTransitionControlType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) FBSDisplayLayoutPublisher *displayLayoutPublisher; // ivar: _displayLayoutPublisher
@property (readonly, nonatomic) NSInteger effectiveMapsUserInterfaceStyle;
@property (readonly, nonatomic, getter=isGeoSupported) BOOL geoSupported; // ivar: _geoSupported
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DBIconBadgeController *iconBadgeController; // ivar: _iconBadgeController
@property (readonly, nonatomic) NSUInteger iconColumnCount;
@property (retain, nonatomic) DBIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, nonatomic) NSUInteger iconRowCount;
@property (readonly, nonatomic) NSUInteger interactionAffordances; // ivar: _interactionAffordances
@property (nonatomic, getter=isKnownVehicle) BOOL knownVehicle; // ivar: _knownVehicle
@property (retain, nonatomic) DBLayerMetadataService *layerMetadataService; // ivar: _layerMetadataService
@property (readonly, nonatomic) NSInteger layoutJustification; // ivar: _layoutJustification
@property (nonatomic) NSInteger mapsUserInterfaceStyle; // ivar: _mapsUserInterfaceStyle
@property (readonly, nonatomic) DBNavigationStateProvider *navigationStateProvider; // ivar: _navigationStateProvider
@property (readonly, nonatomic) NSInteger nightModeUserInterfaceStyle;
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (nonatomic, getter=isPairedVehicle) BOOL pairedVehicle; // ivar: _pairedVehicle
@property (retain, nonatomic) CRPairedVehicleManager *pairedVehicleManager; // ivar: _pairedVehicleManager
@property (retain, nonatomic) NSMutableDictionary *policyLock_appPolicyForBundleID; // ivar: _policyLock_appPolicyForBundleID
@property (readonly, nonatomic) PDCPreflightManager *preflightManager; // ivar: _preflightManager
@property (readonly, nonatomic, getter=isRightHandDrive) BOOL rightHandDrive; // ivar: _rightHandDrive
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) BOOL screenSupportsFocus; // ivar: _screenSupportsFocus
@property (readonly, nonatomic) CARSession *session; // ivar: _session
@property (readonly, nonatomic, getter=isStatusBarDriveSide) BOOL statusBarDriveSide;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) CRVehicle *vehicle; // ivar: _vehicle
@property (retain, nonatomic) NSString *vehicleID; // ivar: _vehicleID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *vehicleUpdateQueue; // ivar: _vehicleUpdateQueue
@property (retain, nonatomic) NSMapTable *viewAreaToStatusBarEdgeMap; // ivar: _viewAreaToStatusBarEdgeMap
@property (readonly, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences; // ivar: _wallpaperPreferences


+(id)_stringForStatusBarEdge:(NSUInteger)arg0 ;
-(BOOL)_prefersDarkMapsAppearance;
-(NSInteger)_effectiveVehicleAppearancePreference;
-(NSUInteger)_statusBarEdgeForViewArea:(id)arg0 ;
-(id)_sync_pairedVehicle;
-(id)initWithDisplayConfiguration:(id)arg0 layoutPublisher:(id)arg1 iconBadgeController:(id)arg2 appPolicyEvaluator:(id)arg3 session:(id)arg4 preflightManager:(id)arg5 navigationStateProvider:(id)arg6 ;
-(id)policyForApplicationInfo:(id)arg0 ;
-(struct CGRect )_unadjustedSafeAreaFrameForViewArea:(id)arg0 ;
-(struct CGRect )_viewAreaFrameForViewArea:(id)arg0 ;
-(struct UIEdgeInsets )_safeAreaInsetsForViewArea:(id)arg0 ;
-(void)_computeStatusBarEdgesForViewAreas:(id)arg0 ;
-(void)_pairedVehiclesDidChange:(id)arg0 ;
-(void)_updateVehicleInfo:(id)arg0 notifyPairedVehicleChange:(BOOL)arg1 ;
-(void)_updateVehicleInfoSync:(BOOL)arg0 notifyPairedVehicleChange:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)fetchEnhancedIntegrationStatusWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)session:(id)arg0 didSetViewArea:(id)arg1 forScreenID:(id)arg2 withDuration:(CGFloat)arg3 transitionControlType:(NSUInteger)arg4 ;
-(void)session:(id)arg0 didUpdateAppearanceStyle:(NSInteger)arg1 forScreenUUID:(id)arg2 ;
-(void)session:(id)arg0 didUpdateMapAppearanceStyle:(NSInteger)arg1 forScreenUUID:(id)arg2 ;
-(void)session:(id)arg0 didUpdateNightMode:(BOOL)arg1 ;
-(void)session:(id)arg0 showUIForScreenInfo:(id)arg1 withURL:(id)arg2 ;
-(void)session:(id)arg0 stopUIForScreenInfo:(id)arg1 ;
-(void)sessionDidUpdateCarCapabilities:(id)arg0 ;


@end


#endif