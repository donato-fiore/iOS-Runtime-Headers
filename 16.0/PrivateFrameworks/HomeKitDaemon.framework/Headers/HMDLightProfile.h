// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLIGHTPROFILE_H
#define HMDLIGHTPROFILE_H

@class NSSet, NSHashTable, NSString, NSDate, HMLightProfileSettings;
@protocol HMDCharacteristicsAvailabilityListenerDelegate, HMDLightProfileDataSource;


#import "HMDAccessoryProfile.h"
#import "HMDCharacteristic.h"
#import "HMDCharacteristicsAvailabilityListener.h"
#import "HMDHAPAccessory.h"
#import "HMDNaturalLightingActiveTransitionContext.h"
#import "HMDNaturalLightingCurve.h"
#import "HMDNaturalLightingCurveWriter.h"
#import "HMDNaturalLightingEnabledRetryContext.h"
#import "HMDService.h"

@interface HMDLightProfile : HMDAccessoryProfile <HMDCharacteristicsAvailabilityListenerDelegate>



@property unsigned char activeTransitionsCount; // ivar: _activeTransitionsCount
@property (readonly, copy) NSSet *availableCharacteristics;
@property (retain) HMDCharacteristic *brightnessCharacteristic; // ivar: _brightnessCharacteristic
@property (retain) NSHashTable *characteristicValueObservers; // ivar: _characteristicValueObservers
@property (readonly) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener; // ivar: _characteristicsAvailabilityListener
@property (readonly) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain) HMDCharacteristic *colorTemperatureCharacteristic; // ivar: _colorTemperatureCharacteristic
@property (readonly) NSObject<HMDLightProfileDataSource> *dataSource; // ivar: _dataSource
@property (weak) HMDHAPAccessory *hapAccessory; // ivar: _hapAccessory
@property (copy) NSDate *lastNaturalLightingCurveUpdateDate; // ivar: _lastNaturalLightingCurveUpdateDate
@property (copy) NSDate *lastNaturalLightingEnabledDate; // ivar: _lastNaturalLightingEnabledDate
@property (copy) NSDate *lastNaturalLightingUsedDate; // ivar: _lastNaturalLightingUsedDate
@property (readonly, copy) NSDate *mostRecentNaturalLightingEnabledDate;
@property (readonly, copy) NSDate *mostRecentNaturalLightingUsedDate;
@property (copy) HMDNaturalLightingActiveTransitionContext *naturalLightingActiveTransitionContext; // ivar: _naturalLightingActiveTransitionContext
@property (getter=isNaturalLightingCapable) BOOL naturalLightingCapable; // ivar: _naturalLightingCapable
@property (copy) HMDNaturalLightingCurve *naturalLightingCurve; // ivar: _naturalLightingCurve
@property (readonly) HMDNaturalLightingCurveWriter *naturalLightingCurveWriter; // ivar: _naturalLightingCurveWriter
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled
@property (copy) HMDNaturalLightingEnabledRetryContext *naturalLightingEnabledRetryContext; // ivar: _naturalLightingEnabledRetryContext
@property (copy) NSSet *notificationEnabledCharacteristics; // ivar: _notificationEnabledCharacteristics
@property (readonly, copy) NSSet *readCharacteristicRequests;
@property (copy) NSSet *readCharacteristics; // ivar: _readCharacteristics
@property (readonly) HMDService *service; // ivar: _service
@property (readonly) HMLightProfileSettings *settings;
@property NSUInteger supportedFeatures; // ivar: _supportedFeatures
@property (readonly, getter=isUsingNaturalLighting) BOOL usingNaturalLighting;


+(id)logCategory;
-(BOOL)enableNaturalLightingCharacteristicNotificationsForObserver:(id)arg0 ;
-(BOOL)shouldRetrySetNaturalLightingEnabledWithError:(id)arg0 ;
-(BOOL)updateActiveTransitionCountWithCharacteristic:(id)arg0 ;
-(BOOL)updateEnabledCharacteristicsNotifications;
-(BOOL)updateNaturalLightingCurve;
-(id)availableCharacteristicWithType:(id)arg0 fromChangedObjects:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 lightService:(id)arg2 accessory:(id)arg3 characteristicsAvailabilityListener:(id)arg4 naturalLightingCurveWriter:(id)arg5 dataSource:(id)arg6 ;
-(id)initWithWorkQueue:(id)arg0 lightService:(id)arg1 accessory:(id)arg2 ;
-(id)updateSettingsWithReadCharacteristicResponsePayload:(id)arg0 error:(*id)arg1 ;
-(void)_handleAccessoryCharacteristicsChanged:(id)arg0 ;
// -(void)callSetNaturalLightingEnabledCompletion:(id)arg0 error:(unk)arg1  ;
-(void)dealloc;
-(void)disableNaturalLightingCharacteristicNotificationsForObserver:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchNaturalLightingEnabledWithCompletion:(id)arg0 ;
-(void)handleAccessoryCharacteristicsChanged:(id)arg0 ;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleFetchNaturalLightColorTemperatureForBrightnessMessage:(id)arg0 ;
-(void)handleHomeDidDisableCharacteristicNotification:(id)arg0 ;
-(void)handleHomeDidEnableCharacteristicNotification:(id)arg0 ;
-(void)handleHomeNaturalLightingContextUpdated:(id)arg0 ;
-(void)handleSetNaturalLightingEnabled:(BOOL)arg0 ;
-(void)handleSetNaturalLightingEnabledMessage:(id)arg0 ;
-(void)listener:(id)arg0 didUpdateAvailableCharacteristics:(id)arg1 ;
-(void)notifyClientsOfUpdatedSettingsWithPreviousSettings:(id)arg0 ;
-(void)readNaturalLightingCharacteristicsWithReason:(id)arg0 ;
-(void)readNaturalLightingCharacteristicsWithReason:(id)arg0 completion:(id)arg1 ;
-(void)registerForMessages;
-(void)retrySetNaturalLightingEnabledWithContext:(id)arg0 error:(id)arg1 ;
-(void)setNaturalLightingCharacteristicsNotificationEnabled:(BOOL)arg0 forObserver:(id)arg1 ;
-(void)synchronizeCurveToAccessory;
-(void)updateLastNaturalLightingUsedState;
-(void)updateNaturalLightingEnabledForCharacteristic:(id)arg0 ;
-(void)updateSettingsWithCharacteristics:(id)arg0 ;
-(void)updateSupportedFeaturesWithCharacteristics:(id)arg0 ;


@end


#endif