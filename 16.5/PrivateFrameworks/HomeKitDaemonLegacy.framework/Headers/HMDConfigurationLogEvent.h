// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCONFIGURATIONLOGEVENT_H
#define HMDCONFIGURATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSArray;
@protocol HMDAWDLogEvent;



@interface HMDConfigurationLogEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) unsigned int databaseSize; // ivar: _databaseSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *deviceCapabilitiesAndEnablementsCommonDimensionsFormattedForCoreAnalytics; // ivar: _deviceCapabilitiesAndEnablementsCommonDimensionsFormattedForCoreAnalytics
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *histogrammedAggregateHomeDataCommonDimensionsFormattedForCoreAnalytics; // ivar: _histogrammedAggregateHomeDataCommonDimensionsFormattedForCoreAnalytics
@property (readonly, nonatomic) NSArray *homeConfigurations; // ivar: _homeConfigurations
@property (readonly, nonatomic) NSDictionary *homesCategorizationCommonDimensionsFormattedForCoreAnalytics; // ivar: _homesCategorizationCommonDimensionsFormattedForCoreAnalytics
@property (readonly, nonatomic) NSUInteger instanceId; // ivar: _instanceId
@property (readonly, nonatomic) BOOL isDeviceHH2Enabled; // ivar: _isDeviceHH2Enabled
@property (readonly, nonatomic) BOOL isFMFDevice; // ivar: _isFMFDevice
@property (readonly, nonatomic) BOOL isMediaOnlyConfiguration;
@property (readonly, nonatomic) BOOL isPrimaryResidentForSomeHome; // ivar: _isPrimaryResidentForSomeHome
@property (readonly, nonatomic) BOOL isResidentCapable; // ivar: _isResidentCapable
@property (readonly, nonatomic) BOOL isResidentElectionV2EnabledAnyHome; // ivar: _isResidentElectionV2EnabledAnyHome
@property (readonly, nonatomic) BOOL isResidentEnabled; // ivar: _isResidentEnabled
@property (readonly, nonatomic) BOOL isResidentFirstEnabledAnyHome; // ivar: _isResidentFirstEnabledAnyHome
@property (readonly, nonatomic) BOOL isTelevisionOnlyConfiguration;
@property (readonly, nonatomic) unsigned int metadataVersion; // ivar: _metadataVersion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalAccessories; // ivar: _totalAccessories
@property (readonly, nonatomic) NSUInteger totalActiveTriggers; // ivar: _totalActiveTriggers
@property (readonly, nonatomic) NSUInteger totalAdminUsers; // ivar: _totalAdminUsers
@property (readonly, nonatomic) NSUInteger totalAppleAudioAccessories; // ivar: _totalAppleAudioAccessories
@property (readonly, nonatomic) NSUInteger totalAppleMediaAccessories; // ivar: _totalAppleMediaAccessories
@property (readonly, nonatomic) NSUInteger totalAppleMediaCategoryBitMask; // ivar: _totalAppleMediaCategoryBitMask
@property (readonly, nonatomic) NSUInteger totalAppleTVAccessories; // ivar: _totalAppleTVAccessories
@property (readonly, nonatomic) NSUInteger totalBridgedAccessories; // ivar: _totalBridgedAccessories
@property (readonly, nonatomic) NSUInteger totalCHIPAccessories; // ivar: _totalCHIPAccessories
@property (readonly, nonatomic) NSUInteger totalCameraAccessories; // ivar: _totalCameraAccessories
@property (readonly, nonatomic) NSUInteger totalCameraAccessoriesRecordingEnabled; // ivar: _totalCameraAccessoriesRecordingEnabled
@property (readonly, nonatomic) NSUInteger totalCertifiedAccessories; // ivar: _totalCertifiedAccessories
@property (readonly, nonatomic) NSUInteger totalEnabledResidents; // ivar: _totalEnabledResidents
@property (readonly, nonatomic) NSUInteger totalHAPAccessories; // ivar: _totalHAPAccessories
@property (readonly, nonatomic) NSUInteger totalHAPBTAccessories; // ivar: _totalHAPBTAccessories
@property (readonly, nonatomic) NSUInteger totalHAPIPAccessories; // ivar: _totalHAPIPAccessories
@property (readonly, nonatomic) NSUInteger totalHAPSpeakerAccessories; // ivar: _totalHAPSpeakerAccessories
@property (readonly, nonatomic) NSUInteger totalHomeCategoryBitMask; // ivar: _totalHomeCategoryBitMask
@property (readonly, nonatomic) NSUInteger totalHomes; // ivar: _totalHomes
@property (readonly, nonatomic) NSUInteger totalNonEmptyHomes; // ivar: _totalNonEmptyHomes
@property (readonly, nonatomic) NSUInteger totalOwnedHomes; // ivar: _totalOwnedHomes
@property (readonly, nonatomic) NSUInteger totalResidentEnabledHomes; // ivar: _totalResidentEnabledHomes
@property (readonly, nonatomic) NSUInteger totalScenes; // ivar: _totalScenes
@property (readonly, nonatomic) NSUInteger totalSmartHomeAccessories; // ivar: _totalSmartHomeAccessories
@property (readonly, nonatomic) NSUInteger totalTelevisionServiceAccessories; // ivar: _totalTelevisionServiceAccessories
@property (readonly, nonatomic) NSUInteger totalThirdPartyMediaAccessories; // ivar: _totalThirdPartyMediaAccessories
@property (readonly, nonatomic) NSUInteger totalThirdPartyMediaCategoryBitMask; // ivar: _totalThirdPartyMediaCategoryBitMask
@property (readonly, nonatomic) NSUInteger totalThreadAccessories; // ivar: _totalThreadAccessories
@property (readonly, nonatomic) NSUInteger totalTriggers; // ivar: _totalTriggers
@property (readonly, nonatomic) NSUInteger totalUsers; // ivar: _totalUsers
@property (readonly, nonatomic) NSUInteger totalWholeHouseAudioAccessories; // ivar: _totalWholeHouseAudioAccessories


-(BOOL)isSubmitted;
-(id)convertToAWDMultiUserSettings:(id)arg0 ;
-(id)convertToAWDMultiUserSettingsList:(id)arg0 ;
-(id)createDeviceCapabilitiesAndEnablementsCommonDimensionsFormattedForCoreAnalytics;
-(id)createHistogrammedAggregateHomeDataCommonDimensionsFormattedForCoreAnalytics;
-(id)createHomesCategorizationCommonDimensionsFormattedForCoreAnalytics;
-(id)generateAWDHomeConfiguration:(id)arg0 ;
-(id)getHomeConfiguration:(id)arg0 ;
-(id)initWithHomeConfigurations:(id)arg0 isFMFDevice:(BOOL)arg1 ;
-(id)initWithHomeManager:(id)arg0 metadataVersion:(unsigned int)arg1 ;
-(id)metricForAWD;
-(int)convertToAWDMultiUserValueType:(int)arg0 ;
-(int)convertToAWDNetworkProtectionStatus:(int)arg0 ;
-(unsigned int)AWDMessageType;


@end


#endif