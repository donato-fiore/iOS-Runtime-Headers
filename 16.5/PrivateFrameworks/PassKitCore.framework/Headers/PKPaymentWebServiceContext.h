// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTWEBSERVICECONTEXT_H
#define PKPAYMENTWEBSERVICECONTEXT_H

@class NSMutableDictionary, NSDictionary, NSDate, NSArray, NSString, NSURL;


#import "PKWebServiceContext.h"
#import "PKPaymentWebServiceConfiguration.h"
#import "PKPaymentWebServiceRegion.h"

@interface PKPaymentWebServiceContext : PKWebServiceContext {
    os_unfair_lock_s _lock_context;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    NSDictionary *_regions;
    os_unfair_lock_s _cacheLock;
    NSMutableDictionary *_featureSupportedLanguageCache;
}


@property (copy) NSDate *archivedDate; // ivar: _archivedDate
@property (copy) NSArray *certificates; // ivar: _certificates
@property (copy) NSString *companionSerialNumber; // ivar: _companionSerialNumber
@property (retain) PKPaymentWebServiceConfiguration *configuration; // ivar: _configuration
@property (copy) NSDate *configurationDate; // ivar: _configurationDate
@property NSInteger consistencyCheckBackoffLevel; // ivar: _consistencyCheckBackoffLevel
@property BOOL devSigned; // ivar: _devSigned
@property (copy) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) BOOL hasPeerPaymentAccount;
@property BOOL ignoreProvisioningEnablementPercentage; // ivar: _ignoreProvisioningEnablementPercentage
@property (copy) NSString *lastUpdatedTag; // ivar: _lastUpdatedTag
@property BOOL messageServiceDisabled; // ivar: _messageServiceDisabled
@property (copy) NSString *nextPushToken; // ivar: _nextPushToken
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (readonly, weak) PKPaymentWebServiceRegion *primaryRegion;
@property (copy) NSString *primaryRegionIdentifier; // ivar: _primaryRegionIdentifier
@property (copy) NSString *pushToken; // ivar: _pushToken
@property (retain) NSDictionary *regions;
@property (copy) NSDate *registrationDate; // ivar: _registrationDate
@property (copy) NSString *secureElementID; // ivar: _secureElementID
@property BOOL transactionServiceDisabled; // ivar: _transactionServiceDisabled
@property NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg0 ;
+(void)_migrateContext:(id)arg0 ;
+(void)_migrateFrom0To1:(id)arg0 ;
-(BOOL)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)arg0 ;
-(BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg0 paymentNetwork:(NSInteger)arg1 ;
-(BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg0 ;
-(CGFloat)_contextProvisioningEnablementValue;
-(id)TSMPushTopics;
-(id)TSMURLStringByPushTopic;
-(id)_regionWithPeerPaymentServiceURL;
-(id)accountServicePushTopics;
-(id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg0 ;
-(id)applyServiceLocalizationBundleForFeatureIdentifier:(NSUInteger)arg0 mainLanguageBundle:(id)arg1 ;
-(id)applyServicePreferredLanguageForFeatureIdentifier:(NSUInteger)arg0 mainLanguageBundle:(id)arg1 ;
-(id)applyServicePushTopics;
-(id)betaPaymentNetworksForRegion:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)notificationPushTopics;
-(id)regionForIdentifier:(id)arg0 ;
-(id)verificationRequestRecordForUniqueID:(id)arg0 ;
-(void)_localizationUpdated;
-(void)addVerificationRequestRecord:(id)arg0 forUniqueID:(id)arg1 ;
-(void)archiveAtPath:(id)arg0 ;
-(void)atomicallyUpdateEveryRegion:(id)arg0 ;
-(void)atomicallyUpdatePrimaryRegion:(id)arg0 ;
-(void)atomicallyUpdateRegionWithIdentifier:(id)arg0 updateBlock:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeVerificationRequestRecordForUniqueID:(id)arg0 ;


@end


#endif