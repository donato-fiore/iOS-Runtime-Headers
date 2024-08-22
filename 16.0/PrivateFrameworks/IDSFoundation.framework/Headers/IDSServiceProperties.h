// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSERVICEPROPERTIES_H
#define IDSSERVICEPROPERTIES_H

@class NSString, NSSet, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSServiceProperties : NSObject <NSCopying>

 {
    NSString *_launchNotification;
    NSSet *_allowedTrafficClassesIndices;
    NSSet *_duetIdentifiersIndices;
    unsigned char _minCompatibilityVersion;
    unsigned char _accountSyncMinCompatibilityVersion;
    BOOL _allowLocalDelivery;
    BOOL _canUseLargePayload;
    BOOL _shouldAllowLiveMessageDelivery;
    BOOL _launchIsDarwin;
    BOOL _defaultSendModeNormal;
    BOOL _disallowFirewallAutoEnroll;
    BOOL _disableFirewall;
}


@property (readonly, nonatomic) NSUInteger accountSyncMinCompatibilityVersion;
@property (readonly, nonatomic) unsigned int adHocServiceType; // ivar: _adHocServiceType
@property (readonly, nonatomic) BOOL allowCrossAccountMessages; // ivar: _allowCrossAccountMessages
@property (readonly, nonatomic) BOOL allowLocalDelivery;
@property (readonly, nonatomic) BOOL allowMagnetDelivery; // ivar: _allowMagnetDelivery
@property (readonly, nonatomic) BOOL allowPartialSendsToSucceed; // ivar: _allowPartialSendsToSucceed
@property (readonly, nonatomic) BOOL allowPendingMessagesForInactiveDevice; // ivar: _allowPendingMessagesForInactiveDevice
@property (readonly, nonatomic) BOOL allowSendingMessagesToInactiveDevice; // ivar: _allowSendingMessagesToInactiveDevice
@property (readonly, nonatomic) BOOL allowUrgentMessages; // ivar: _allowUrgentMessages
@property (readonly, nonatomic) BOOL allowWakingMessages; // ivar: _allowWakingMessages
@property (readonly, nonatomic) BOOL allowWiProxDelivery; // ivar: _allowWiProxDelivery
@property (readonly, nonatomic) NSSet *allowedTrafficClasses;
@property (readonly, nonatomic) BOOL allowsDuplicates; // ivar: _allowsDuplicates
@property (readonly, nonatomic) unsigned short applicationKeyIndex; // ivar: _applicationKeyIndex
@property (readonly, nonatomic) BOOL blockRemoteTimeouts; // ivar: _blockRemoteTimeouts
@property (readonly, nonatomic) BOOL canUseLargePayload;
@property (readonly, nonatomic) unsigned int controlCategory; // ivar: _controlCategory
@property (nonatomic) unsigned int dataProtectionClass; // ivar: _dataProtectionClass
@property (retain, nonatomic) NSString *dataUsageBundleID; // ivar: _dataUsageBundleID
@property (readonly, nonatomic) BOOL disableOnLowRAMDevice; // ivar: _disableOnLowRAMDevice
@property (readonly, nonatomic) BOOL disabledOnTinkerWatch; // ivar: _disabledOnTinkerWatch
@property (readonly, nonatomic) BOOL disallowFirewallAutoEnroll;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL dontFilterSelfMessagesForUnknownDevice; // ivar: _dontFilterSelfMessagesForUnknownDevice
@property (readonly, nonatomic) NSArray *duetIdentifiers;
@property (readonly, nonatomic) BOOL enabledOnlyOnStandaloneDevices; // ivar: _enabledOnlyOnStandaloneDevices
@property (readonly, nonatomic) BOOL enabledOnlyWhenPaired; // ivar: _enabledOnlyWhenPaired
@property (readonly, nonatomic) unsigned int firewallNotificationStyle; // ivar: _firewallNotificationStyle
@property (readonly, nonatomic) BOOL forceHTTPQueriesOnly; // ivar: _forceHTTPQueriesOnly
@property (readonly, nonatomic) BOOL hadStandalonePreferences; // ivar: _hadStandalonePreferences
@property (readonly, nonatomic) BOOL holdsMessagesUntilFirstUnlock; // ivar: _holdsMessagesUntilFirstUnlock
@property (readonly, nonatomic) BOOL iCloudBasedService; // ivar: _iCloudBasedService
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isFamilyService; // ivar: _isFamilyService
@property (readonly, nonatomic) BOOL isFirewallEnabled;
@property (readonly, nonatomic) BOOL isInvitationService; // ivar: _isInvitationService
@property (readonly, nonatomic) NSString *launchDarwinNotification;
@property (readonly, nonatomic) NSString *launchMachServiceNotification;
@property (retain, nonatomic) NSString *legacyIdentifier; // ivar: _legacyIdentifier
@property (readonly, nonatomic) NSString *legacyPreferencesDomain;
@property (nonatomic) NSInteger linkedDeviceRelationships; // ivar: _linkedDeviceRelationships
@property (retain, nonatomic) NSArray *linkedServiceNames; // ivar: _linkedServiceNames
@property (readonly, nonatomic) NSUInteger minCompatibilityVersion;
@property (readonly, nonatomic) BOOL passThroughMessagesFromStorage; // ivar: _passThroughMessagesFromStorage
@property (readonly, nonatomic) NSString *preferencesDomain;
@property (retain, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (readonly, nonatomic) BOOL prototypingOnly; // ivar: _prototypingOnly
@property (readonly, nonatomic) BOOL pushToWakeDisabled; // ivar: _pushToWakeDisabled
@property (retain, nonatomic) NSString *pushTopic; // ivar: _pushTopic
@property (retain, nonatomic) NSString *queryService; // ivar: _queryService
@property (readonly, nonatomic) BOOL sendOnePerToken; // ivar: _sendOnePerToken
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) BOOL shouldAllowCloudDelivery; // ivar: _shouldAllowCloudDelivery
@property (readonly, nonatomic) BOOL shouldAllowLiveMessageDelivery;
@property (readonly, nonatomic) BOOL shouldAllowProxyDelivery; // ivar: _shouldAllowProxyDelivery
@property (readonly, nonatomic) BOOL shouldAutoRegisterAllHandles; // ivar: _shouldAutoRegisterAllHandles
@property (readonly, nonatomic) BOOL shouldNotSyncPhoneNumberAccounts; // ivar: _shouldNotSyncPhoneNumberAccounts
@property (readonly, nonatomic) BOOL shouldProtectTrafficUsingClassA; // ivar: _shouldProtectTrafficUsingClassA
@property (readonly, nonatomic) BOOL shouldRegisterUsingDSHandle; // ivar: _shouldRegisterUsingDSHandle
@property (readonly, nonatomic) BOOL shouldShowUsageNotifications; // ivar: _shouldShowUsageNotifications
@property (readonly, nonatomic) BOOL shouldSilentlyFailMessagesOnSwitch; // ivar: _shouldSilentlyFailMessagesOnSwitch
@property (readonly, nonatomic) BOOL shouldSyncAccounts; // ivar: _shouldSyncAccounts
@property (retain, nonatomic) NSString *superService; // ivar: _superService
@property (readonly, nonatomic) BOOL tinkerMessagingOnly; // ivar: _tinkerMessagingOnly
@property (readonly, nonatomic) BOOL tunnelService; // ivar: _tunnelService
@property (readonly, nonatomic) BOOL useFaceTimeCallerID; // ivar: _useFaceTimeCallerID
@property (readonly, nonatomic) BOOL useTransportZone; // ivar: _useTransportZone
@property (readonly, nonatomic) BOOL useiMessageCallerID; // ivar: _useiMessageCallerID
@property (readonly, nonatomic) BOOL wantsLocalReflectedSend; // ivar: _wantsLocalReflectedSend
@property (readonly, nonatomic) BOOL wantsNetworkAvailableHint; // ivar: _wantsNetworkAvailableHint
@property (readonly, nonatomic) BOOL wantsPendingMessageUpdates; // ivar: _wantsPendingMessageUpdates
@property (readonly, nonatomic) BOOL wantsPhoneNumberAccount; // ivar: _wantsPhoneNumberAccount
@property (readonly, nonatomic) BOOL wantsRemoteErrors; // ivar: _wantsRemoteErrors
@property (readonly, nonatomic) BOOL wantsTinkerDevices;
@property (readonly, nonatomic) BOOL watchOnlyService; // ivar: _watchOnlyService


-(id)_resolveProtocolName:(id)arg0 ;
-(id)_resolveShouldUseMachNotification:(id)arg0 ;
-(id)_stringToUseGivenName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithServiceDictionary:(id)arg0 ;
-(id)initWithServiceIdentifier:(id)arg0 ;
-(void)reloadAdHocServices;


@end


#endif