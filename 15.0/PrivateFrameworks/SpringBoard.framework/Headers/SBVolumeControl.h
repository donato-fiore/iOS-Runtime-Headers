// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVOLUMECONTROL_H
#define SBVOLUMECONTROL_H

@class NSMutableArray, NSMutableSet, NSString, NSArray;
@protocol SBElasticHUDViewControllerDelegate, SBElasticVolumeDataSource, PTSettingsKeyObserver, SBAVSystemControllerCacheObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBHUDController.h"
#import "SBElasticHUDSettings.h"
#import "SBRingerControl.h"
#import "SBTelephonyManager.h"
#import "SBConferenceManager.h"
#import "SBAVSystemControllerCache.h"

@interface SBVolumeControl : NSObject <SBElasticHUDViewControllerDelegate, SBElasticVolumeDataSource, PTSettingsKeyObserver, SBAVSystemControllerCacheObserver>

 {
    SBHUDController *_hudController;
    SBElasticHUDSettings *_volumeHUDSettings;
    SBRingerControl *_ringerControl;
    SBTelephonyManager *_telephonyManager;
    SBConferenceManager *_conferenceManager;
    BOOL _debounce;
    NSUInteger _mode;
    NSMutableArray *_activeAudioRoutes;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastEventCategory;
    BOOL _hudHandledLastVolumeChange;
    BOOL _euDevice;
    BOOL _userAcknowledgedEUVolumeLimit;
    BOOL _lastVolumeChangedWasBlocked;
    BOOL _volumeDownButtonIsDown;
    BOOL _volumeUpButtonIsDown;
    BOOL _controlCenterIsPresented;
    int _anyCallActive;
    os_unfair_lock_s _effectiveVolumeLock;
    float _effectiveVolume;
    os_unfair_lock_s _volumeLimitLock;
    float _volumeLimit;
    os_unfair_lock_s _volumeLimitEnforcedLock;
    BOOL _volumeLimitEnforced;
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
    SBAVSystemControllerCache *_avCache;
}


@property (readonly, nonatomic) NSArray *activeAudioRouteTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastDisplayedCategory; // ivar: _lastDisplayedCategory
@property (readonly) Class superclass;


+(BOOL)_isVolumeChangeAllowedForState:(id)arg0 error:(*id)arg1 ;
+(BOOL)_isVolumeManagedForCategory:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_HUDIsDisplayableForCategory:(id)arg0 ;
-(BOOL)_HUDIsDisplayableForLastEventCategory;
-(BOOL)_HUDIsDisplayableInCurrentSpringBoardContext;
-(BOOL)_isCategoryAlwaysHidden:(id)arg0 ;
-(BOOL)_isHUDDisplayable;
-(BOOL)_isVolumeHUDVisible;
-(BOOL)_isVolumeHUDVisibleOrFading;
-(BOOL)_outputDevicesRepresentWirelessSplitterGroup:(id)arg0 ;
-(BOOL)_shouldRouteChangeResultInPresentingVolumeHUDWhenTransitioningFrom:(id)arg0 toAudioRoutes:(id)arg1 ;
-(BOOL)_turnOnScreenIfNecessaryForEULimit:(BOOL)arg0 ;
-(BOOL)elasticValueViewController:(id)arg0 updateCurrentValue:(float)arg1 ;
-(BOOL)elasticVolumeViewControllerShouldShowVolumeWarningForCurrentVolumeValue:(id)arg0 ;
-(BOOL)isEUDevice;
-(BOOL)isEUVolumeLimitEnabled;
-(BOOL)isEUVolumeLimitEnforced;
-(BOOL)isEUVolumeLimitSet;
-(BOOL)userHasAcknowledgedEUVolumeLimit;
-(BOOL)wouldShowAtLeastAYellowWarningForVolume:(float)arg0 ;
-(NSInteger)_audioRouteTypeForActiveAudioRoute:(id)arg0 withAttributes:(id)arg1 ;
-(NSInteger)_audioRouteTypeForOutputDevice:(id)arg0 ;
-(NSInteger)_audioRouteTypeForTelephonyDeviceType:(NSInteger)arg0 ;
-(float)_calcButtonRepeatDelay;
-(float)_effectiveVolume;
-(float)_getMediaVolumeForIAP;
-(float)_volumeStepUp:(BOOL)arg0 ;
-(float)elasticValueViewControllerCurrentValue:(id)arg0 ;
-(float)euVolumeLimit;
-(float)volumeStepDown;
-(float)volumeStepUp;
-(id)_audioRouteTypesForClusteredOutputDevices:(id)arg0 ;
-(id)_configureVolumeHUDViewControllerWithVolume:(float)arg0 ;
-(id)acquireVolumeHUDHiddenAssertionForReason:(id)arg0 ;
-(id)avSystemControllerDispatchQueue;
-(id)elasticVolumeViewControllerActiveAudioCategory:(id)arg0 ;
-(id)elasticVolumeViewControllerActiveAudioRouteTypes:(id)arg0 ;
-(id)existingVolumeHUDViewController;
-(id)initWithHUDController:(id)arg0 ringerControl:(id)arg1 telephonyManager:(id)arg2 conferenceManager:(id)arg3 ;
-(id)presentedVolumeHUDViewController;
-(void)_controlCenterDidDismiss:(id)arg0 ;
-(void)_controlCenterWillPresent:(id)arg0 ;
-(void)_dispatchAVSystemControllerAsync:(id)arg0 ;
-(void)_dispatchAVSystemControllerSync:(id)arg0 ;
-(void)_effectiveVolumeChanged:(id)arg0 ;
-(void)_presentVolumeHUDIfDisplayable:(BOOL)arg0 orRefreshIfPresentedWithReason:(id)arg1 ;
-(void)_presentVolumeHUDWithVolume:(float)arg0 ;
-(void)_resetMediaServerConnection;
-(void)_sendEUVolumeLimitAcknowledgementIfNecessary;
-(void)_serverConnectionDied:(id)arg0 ;
-(void)_setMediaVolumeForIAP:(float)arg0 ;
-(void)_updateAudioRoutesIfNecessary:(BOOL)arg0 forRoute:(id)arg1 withAttributes:(id)arg2 andOutputDevices:(id)arg3 ;
-(void)_updateEUVolumeSettings;
-(void)_updateEffectiveVolume:(float)arg0 ;
-(void)_updateVolumeLimit:(float)arg0 ;
-(void)_updateVolumeLimitEnforced:(BOOL)arg0 ;
-(void)_userAcknowledgedEUEnforcement:(float)arg0 ;
-(void)addAlwaysHiddenCategory:(id)arg0 ;
-(void)cache:(id)arg0 didUpdateActiveAudioRoutingWithRoute:(id)arg1 routeAttributes:(id)arg2 activeOutputDevices:(id)arg3 ;
-(void)cache:(id)arg0 didUpdateVolumeLimit:(float)arg1 ;
-(void)cache:(id)arg0 didUpdateVolumeLimitEnforced:(BOOL)arg1 ;
-(void)cancelVolumeEvent;
-(void)changeVolumeByDelta:(float)arg0 ;
-(void)clearAlwaysHiddenCategories;
-(void)decreaseVolume;
-(void)elasticHUDViewControllerRequestsDismissal:(id)arg0 ;
-(void)handleVolumeButtonWithType:(NSInteger)arg0 down:(BOOL)arg1 ;
-(void)hideVolumeHUDIfVisible;
-(void)increaseVolume;
-(void)removeAlwaysHiddenCategory:(id)arg0 ;
-(void)setActiveCategoryVolume:(float)arg0 ;
-(void)setVolume:(float)arg0 forCategory:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)toggleMute;


@end


#endif