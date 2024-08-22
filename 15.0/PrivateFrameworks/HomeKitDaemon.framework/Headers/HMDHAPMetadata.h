// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPMETADATA_H
#define HMDHAPMETADATA_H

@class HMFObject, NSDictionary, NSString, HAPMetadata, NSSet, NSNumber;
@protocol HMProtoBufEncode;



@interface HMDHAPMetadata : HMFObject <HMProtoBufEncode>



@property (retain, nonatomic) NSDictionary *assistantCharacteristics; // ivar: _assistantCharacteristics
@property (retain, nonatomic) NSDictionary *assistantChrHAPTypeNameMap; // ivar: _assistantChrHAPTypeNameMap
@property (retain, nonatomic) NSDictionary *assistantServiceHAPTypeNameMap; // ivar: _assistantServiceHAPTypeNameMap
@property (retain, nonatomic) NSDictionary *assistantServiceNameHAPTypeMap; // ivar: _assistantServiceNameHAPTypeMap
@property (retain, nonatomic) NSDictionary *assistantUnits; // ivar: _assistantUnits
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *firmwareUpdateAutoApplyPolicies; // ivar: _firmwareUpdateAutoApplyPolicies
@property (retain, nonatomic) NSDictionary *firmwareUpdateStagingPolicies; // ivar: _firmwareUpdateStagingPolicies
@property (retain, nonatomic) HAPMetadata *hapMetadata; // ivar: _hapMetadata
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *hmAccessoryCategories; // ivar: _hmAccessoryCategories
@property (retain, nonatomic) NSDictionary *hmAllowableSecuringWrites; // ivar: _hmAllowableSecuringWrites
@property (retain, nonatomic) NSSet *hmBlacklistedCharacteristics; // ivar: _hmBlacklistedCharacteristics
@property (retain, nonatomic) NSSet *hmBlacklistedCharacteristicsFromApp; // ivar: _hmBlacklistedCharacteristicsFromApp
@property (retain, nonatomic) NSSet *hmBlacklistedServices; // ivar: _hmBlacklistedServices
@property (retain, nonatomic) NSSet *hmBlacklistedServicesFromApp; // ivar: _hmBlacklistedServicesFromApp
@property (retain, nonatomic) NSSet *hmBulletinBoardEnabledTuples; // ivar: _hmBulletinBoardEnabledTuples
@property (retain, nonatomic) NSSet *hmCoalesceNotificationsTuples; // ivar: _hmCoalesceNotificationsTuples
@property (retain, nonatomic) NSSet *hmNotificationAutoEnabledTuples; // ivar: _hmNotificationAutoEnabledTuples
@property (retain, nonatomic) NSSet *hmRequiresDeviceUnlockTuples; // ivar: _hmRequiresDeviceUnlockTuples
@property (retain, nonatomic) NSDictionary *hmWakeOnOperationsFilter; // ivar: _hmWakeOnOperationsFilter
@property (nonatomic) BOOL incomplete; // ivar: _incomplete
@property (readonly, nonatomic) NSDictionary *rawPlist; // ivar: _rawPlist
@property (retain, nonatomic) NSNumber *schemaVersion; // ivar: _schemaVersion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *version; // ivar: _version


+(BOOL)doesWriteRequiresOwnerPrivilegeForCharacteristicType:(id)arg0 ;
+(BOOL)isHomedVersionSupported:(id)arg0 ;
+(BOOL)isServiceType:(id)arg0 compatibleWithAccessoryCategoryType:(id)arg1 ;
+(BOOL)setSharedInstance:(id)arg0 ;
+(BOOL)shouldUploadToCloudAfterHomedReady;
+(id)dataFromMetadataDictionaryWithKey:(id)arg0 ;
+(id)getBuiltinInstance;
+(id)getSharedInstance;
+(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
+(id)initWithURL:(id)arg0 error:(*id)arg1 ;
+(id)legacyV3DataForCloud;
+(id)legacyV3DataForIDS;
+(void)prepareMetadata;
+(void)resetShouldUploadToCloudAfterHomedReady;
-(BOOL)allowsSecuringWriteFor:(id)arg0 withValue:(id)arg1 ;
-(BOOL)checkTupleExistsInSet:(id)arg0 forChrType:(id)arg1 svcType:(id)arg2 ;
-(BOOL)generateNotificationOnConfigurationForCharacteristicType:(id)arg0 serviceType:(id)arg1 ;
-(BOOL)isSecondsDownCounterCharacteristicType:(id)arg0 ;
-(BOOL)isStandardCharacteristicType:(id)arg0 ;
-(BOOL)isStandardServiceType:(id)arg0 ;
-(BOOL)isTargetCharacteristic:(id)arg0 ;
-(BOOL)parseAndSetAssistantCharacteristics:(id)arg0 ;
-(BOOL)parseAndSetAssistantMetadataWithAssistantPlist:(id)arg0 ;
-(BOOL)parseAndSetAssistantServices:(id)arg0 ;
-(BOOL)parseAndSetAssistantUnits:(id)arg0 ;
-(BOOL)parseAndSetHMMetadataWithHMPlist:(id)arg0 ;
-(BOOL)policyConfigurationAvailableForAllHAPServices;
-(BOOL)requiresDeviceUnlock:(id)arg0 forService:(id)arg1 ;
-(BOOL)requiresTimedWrite:(id)arg0 forService:(id)arg1 ;
-(BOOL)shouldAllowToWakeSuspendedAccessoryForOperation:(NSInteger)arg0 service:(id)arg1 characteristicType:(id)arg2 value:(id)arg3 ;
-(BOOL)shouldAutoEnableNotificationForCharacteristic:(id)arg0 ofService:(id)arg1 ;
-(BOOL)shouldCoalesceCharacteristicNotifications:(id)arg0 forService:(id)arg1 ;
-(BOOL)shouldEnableHomeNotificationForCharacteristicType:(id)arg0 serviceType:(id)arg1 ;
-(BOOL)shouldFilterChangeNotificationsForCharacteristicType:(id)arg0 serviceType:(id)arg1 ;
-(BOOL)shouldFilterCharacteristicOfType:(id)arg0 ;
-(BOOL)shouldFilterCharacteristicOfTypeFromApp:(id)arg0 ;
-(BOOL)shouldFilterEnableNotificationsForCharacteristicType:(id)arg0 serviceType:(id)arg1 ;
-(BOOL)shouldFilterServiceOfType:(id)arg0 ;
-(BOOL)shouldFilterServiceOfTypeFromApp:(id)arg0 ;
-(BOOL)shouldHomeAppShowTileForServiceType:(id)arg0 ;
-(BOOL)shouldNotCacheCharacteristicOfType:(id)arg0 ;
-(BOOL)shouldRefreshValueForCharacteristicWithType:(id)arg0 serviceType:(id)arg1 ;
-(BOOL)supportsAuthorizationData:(id)arg0 forService:(id)arg1 ;
-(BOOL)supportsLocalization:(id)arg0 ;
-(id)aliasedHAPCharacteristicTypes;
-(id)aliasedHAPServiceTypes;
-(id)audioAccessoryCategory;
-(id)autoApplyPolicyConfigurationForService:(id)arg0 category:(id)arg1 ;
-(id)categoryForIdentifier:(id)arg0 ;
-(id)categoryForOther;
-(id)categoryForType:(id)arg0 ;
-(id)categoryTypeFromName:(id)arg0 ;
-(id)characteristicNameFromType:(id)arg0 ;
-(id)characteristicTypeFromName:(id)arg0 ;
-(id)characteristicValueUnit:(id)arg0 ;
-(id)descriptionForCharacteristicType:(id)arg0 ;
-(id)descriptionForServiceType:(id)arg0 ;
-(id)getAliasedCharacteristicTypes:(id)arg0 ;
-(id)getAliasedServiceType:(id)arg0 ;
-(id)getCharacteristicTypeAlias:(id)arg0 ;
-(id)getServiceTypeAlias:(id)arg0 ;
-(id)getStatusCharacteristicTypes:(id)arg0 forServiceType:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 hapMetadata:(id)arg1 error:(*id)arg2 ;
-(id)mapCharacteristicValueType:(id)arg0 ;
-(id)mapFromAssistantCharacteristicValue:(id)arg0 name:(id)arg1 ;
-(id)mapFromAssistantServiceName:(id)arg0 ;
-(id)mapFromAssistantUnitName:(id)arg0 ;
-(id)mapReadCharacteristicFromAssistantName:(id)arg0 ;
-(id)mapToAssistantCharacteristicName:(id)arg0 ;
-(id)mapToAssistantCharacteristicValue:(id)arg0 name:(id)arg1 getActionType:(BOOL)arg2 ;
-(id)mapToAssistantServiceName:(id)arg0 ;
-(id)mapToAssistantServiceSubtypeName:(id)arg0 ;
-(id)mapToAssistantServiceSubtypeName:(id)arg0 accessoryCategory:(id)arg1 ;
-(id)mapToAssistantUnitName:(id)arg0 ;
-(id)mapWriteCharacteristicFromAssistantName:(id)arg0 ;
-(id)parseAndSetRawPlist:(id)arg0 ;
-(id)parseCharacteristicArray:(id)arg0 ;
-(id)parseHMAccessoryFirmwareUpdatePolicyCharacteristics:(id)arg0 ;
-(id)parseHMAccessoryFirmwareUpdatePolicyCriteria:(id)arg0 ;
-(id)parseHMAccessoryFirmwareUpdatePolicyServices:(id)arg0 ;
-(id)parseMetadataTupleSetFromPlist:(id)arg0 ;
-(id)parseServiceArray:(id)arg0 ;
-(id)protoBufObjectWithEncodingOption:(id)arg0 ;
-(id)serviceNameFromType:(id)arg0 ;
-(id)serviceSubtypeForValue:(id)arg0 forServiceType:(id)arg1 ;
-(id)serviceTypeFromName:(id)arg0 ;
-(id)stagingPolicyConfigurationForService:(id)arg0 category:(id)arg1 ;
-(id)statusHAPCharacteristicTypesForServiceType;
-(id)validateAssociatedServiceType:(id)arg0 forService:(id)arg1 ;
-(id)xpcData:(BOOL)arg0 ;
-(void)parseAndSetAllowableSecuringWrites:(id)arg0 ;
-(void)parseAndSetHMAccessoryFirmwareUpdatePolicies:(id)arg0 ;
-(void)parseAndSetHMCategories:(id)arg0 ;
-(void)parseAndSetWakeOnOperationsFilter:(id)arg0 ;


@end


#endif