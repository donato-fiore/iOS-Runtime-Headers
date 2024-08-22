// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTPROFILE_H
#define HMDSIRIENDPOINTPROFILE_H

@class NSArray, NSNumber, NSString, NSNotificationCenter, NSUUID, HMFStagedValue;
@protocol HMFStagedValueDelegate, HMFLogging;


#import "HMDAccessoryProfile.h"

@interface HMDSiriEndpointProfile : HMDAccessoryProfile <HMFStagedValueDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSArray *_allEndpointCharacteristicsToMonitor;
@property (readonly, copy) NSArray *_allSettingsCharacteristicsToMonitor;
@property (readonly) NSUInteger _capability;
@property (copy) NSNumber *activeIdentifier; // ivar: _activeIdentifier
@property (retain) NSArray *assistants; // ivar: _assistants
@property (readonly) NSString *clientEndpointIdentifier; // ivar: _clientEndpointIdentifier
@property (readonly) NSString *clientSettingsIdentifier; // ivar: _clientSettingsIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL manuallyDisabled; // ivar: _manuallyDisabled
@property NSInteger multifunctionButton; // ivar: _multifunctionButton
@property (readonly) NSNumber *needsOnboarding;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property NSUInteger notifications; // ivar: _notifications
@property (retain) NSArray *profileServices; // ivar: _profileServices
@property (copy) NSUUID *sessionHubIdentifier; // ivar: _sessionHubIdentifier
@property NSInteger sessionState; // ivar: _sessionState
@property NSInteger siriEnable; // ivar: _siriEnable
@property (copy) NSString *siriEndpointVersion; // ivar: _siriEndpointVersion
@property (copy) NSString *siriEngineVersion; // ivar: _siriEngineVersion
@property NSInteger siriLightOnUse; // ivar: _siriLightOnUse
@property NSInteger siriListening; // ivar: _siriListening
@property (readonly) NSInteger siriSoundOnUse;
@property NSInteger siriTouchToUse; // ivar: _siriTouchToUse
@property (readonly) HMFStagedValue *stagedNeedsOnboarding; // ivar: _stagedNeedsOnboarding
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)namespace;
+(id)uniqueIdentifierFromAccessory:(id)arg0 ;
+(void)initialize;
-(BOOL)_notificationEnabledForType:(NSUInteger)arg0 ;
-(id)_siriEndpointActiveIdentifierCharacteristic;
-(id)_siriEndpointActiveIdentifierReadRequest;
-(id)_siriEndpointManuallyDisabledCharacteristic;
-(id)_siriEndpointManuallyDisabledReadRequest;
-(id)_siriEndpointService;
-(id)_siriEndpointSessionStatusCharacteristic;
-(id)_siriEndpointSessionStatusReadRequest;
-(id)_siriService;
-(id)_siriSettingMultifunctionButtonCharacteristic;
-(id)_siriSettingMultifunctionButtonReadRequest;
-(id)_siriSettingSiriEnableCharacteristic;
-(id)_siriSettingSiriEnableReadRequest;
-(id)_siriSettingSiriEngineVersionCharacteristic;
-(id)_siriSettingSiriEngineVersionReadRequest;
-(id)_siriSettingSiriLightOnUseCharacteristic;
-(id)_siriSettingSiriLightOnUseReadRequest;
-(id)_siriSettingSiriListeningCharacteristic;
-(id)_siriSettingSiriListeningReadRequest;
-(id)_siriSettingSiriTouchCharacteristic;
-(id)_siriSettingSiriTouchReadRequest;
-(id)attributeDescriptions;
-(id)initWithSiriEndpointServices:(id)arg0 ;
-(id)initWithSiriEndpointServices:(id)arg0 notificationCenter:(id)arg1 ;
-(id)services;
-(void)_handleCharacteristicChanges:(id)arg0 ;
-(void)_handleRefreshProfileState:(id)arg0 ;
-(void)_handleRefreshProfileState:(id)arg0 completionHandler:(id)arg1 ;
-(void)_notificationEnable:(BOOL)arg0 forType:(NSUInteger)arg1 ;
-(void)_notifyProfileSettingsUpdated:(id)arg0 ;
-(void)_updateSessionState:(id)arg0 settings:(id)arg1 message:(id)arg2 ;
-(void)addService:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryConfigured:(id)arg0 ;
-(void)handleDeviceCapabilitiesUpdated:(id)arg0 ;
-(void)handleEnableNotifications:(id)arg0 ;
-(void)handleHomeCharacteristicValuesChanged:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)handleUpdateNeedsOnboarding:(id)arg0 ;
-(void)notifyClientsDidUpdateStagedNeedsOnboarding;
-(void)refreshStateWithCompletionHandler:(id)arg0 ;
-(void)registerForMessages;
-(void)registerForNotifications;
-(void)setEnable:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setLightOnUse:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setListening:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setSoundOnUse:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setTouchToUse:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)stageNeedsOnboarding:(NSInteger)arg0 ;
-(void)stageNeedsOnboarding:(NSInteger)arg0 withTimeout:(CGFloat)arg1 ;
-(void)stagedValue:(id)arg0 didExpireValue:(id)arg1 ;
-(void)unregisterForNotifications;
-(void)updateNeedsOnboarding:(NSInteger)arg0 withTimeout:(CGFloat)arg1 ;


@end


#endif