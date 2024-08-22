// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYPAIRINGEVENT_H
#define HMDACCESSORYPAIRINGEVENT_H

@class HMMHomeLogEvent, NSString, NSUUID, NSDictionary, NSDate, NSError;
@protocol HMDAWDLogEvent, HMMCoreAnalyticsLogging;


#import "HMDAccessory.h"
#import "HMDAccessoryMetricVendorDetails.h"

@interface HMDAccessoryPairingEvent : HMMHomeLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>



@property (retain, nonatomic) NSString *accessoryAddRequestIdentifier; // ivar: _accessoryAddRequestIdentifier
@property (retain, nonatomic) NSString *accessoryCategory; // ivar: _accessoryCategory
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) NSString *accessoryManufacturer; // ivar: _accessoryManufacturer
@property (retain, nonatomic) NSString *accessoryModel; // ivar: _accessoryModel
@property (retain, nonatomic) NSString *accessoryServerIdentifier; // ivar: _accessoryServerIdentifier
@property (readonly, nonatomic) BOOL accessorySupportsWoL; // ivar: _accessorySupportsWoL
@property (retain, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, nonatomic, getter=isAddOperation) BOOL addOperation; // ivar: _addOperation
@property (getter=isAddViaWAC) BOOL addViaWAC; // ivar: _addViaWAC
@property (copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property NSUInteger authMethod; // ivar: _authMethod
@property (getter=isBTCommissioned) BOOL btCommissioned; // ivar: _btCommissioned
@property (readonly, nonatomic) NSString *categoryType; // ivar: _categoryType
@property NSInteger certificationStatus; // ivar: _certificationStatus
@property NSInteger communicationProtocol; // ivar: _communicationProtocol
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (getter=isFirstHAPAccessoryInAnyHome) BOOL firstHAPAccessoryInAnyHome; // ivar: _firstHAPAccessoryInAnyHome
@property (getter=isFirstHAPAccessoryInHome) BOOL firstHAPAccessoryInHome; // ivar: _firstHAPAccessoryInHome
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hmdAccessoryPairingEventResidentConfirmation; // ivar: _hmdAccessoryPairingEventResidentConfirmation
@property (retain, nonatomic) NSString *lastAccessoryPairingState; // ivar: _lastAccessoryPairingState
@property NSInteger linkType; // ivar: _linkType
@property CGFloat longestPairingProgressStateDurationInMilliseconds; // ivar: _longestPairingProgressStateDurationInMilliseconds
@property (retain, nonatomic) NSString *longestPairingState; // ivar: _longestPairingState
@property (copy, nonatomic) NSDictionary *matterMetrics; // ivar: _matterMetrics
@property (getter=isNetworkRouterAdd) BOOL networkRouterAdd; // ivar: _networkRouterAdd
@property (getter=isNetworkRouterReplace) BOOL networkRouterReplace; // ivar: _networkRouterReplace
@property (retain) HMDAccessory *pairedAccessory; // ivar: _pairedAccessory
@property (retain, nonatomic) NSString *primaryServiceType; // ivar: _primaryServiceType
@property (readonly, nonatomic) NSString *productNumber; // ivar: _productNumber
@property (readonly, nonatomic) BOOL requiresMatterCustomCommissioningFlow; // ivar: _requiresMatterCustomCommissioningFlow
@property (readonly, nonatomic) CGFloat residentConfirmationDurationInSeconds; // ivar: _residentConfirmationDurationInSeconds
@property (readonly, nonatomic) NSDate *residentConfirmationTimeStarted; // ivar: _residentConfirmationTimeStarted
@property NSInteger retryCount; // ivar: _retryCount
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (getter=isThreadAccessory) BOOL threadAccessory; // ivar: _threadAccessory
@property unsigned int threadCapabilities; // ivar: _threadCapabilities
@property (nonatomic) CGFloat threadCommissioningDuration; // ivar: _threadCommissioningDuration
@property (copy, nonatomic) NSError *threadCommissioningError; // ivar: _threadCommissioningError
@property unsigned int threadStatus; // ivar: _threadStatus
@property (getter=didUseOwnershipProof) BOOL usedOwnershipProof; // ivar: _usedOwnershipProof
@property (getter=didUseWiFiPPSK) BOOL usedWiFiPPSK; // ivar: _usedWiFiPPSK
@property (retain, nonatomic) NSDictionary *vendorDetailsForCoreAnalytics; // ivar: _vendorDetailsForCoreAnalytics
@property (retain, nonatomic) HMDAccessoryMetricVendorDetails *vendorDetailsForReporting; // ivar: _vendorDetailsForReporting
@property (getter=isWacLegacy) BOOL wacLegacy; // ivar: _wacLegacy


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
+(id)pairingAccessory:(id)arg0 home:(id)arg1 ;
+(id)pairingAccessoryWithDescription:(id)arg0 home:(id)arg1 ;
+(id)removingAccessory:(id)arg0 hapAccessory:(id)arg1 ;
-(id)initWithAccessoryDescription:(id)arg0 home:(id)arg1 ;
-(id)initWithUnpairedAccessory:(id)arg0 pairedAccessory:(id)arg1 hapAccessory:(id)arg2 home:(id)arg3 isAddOperation:(BOOL)arg4 ;
-(id)metricForAWD;
-(id)residentConfirmationToString:(NSInteger)arg0 ;
-(unsigned int)AWDMessageType;
-(void)_updateThreadPropertiesWithPairedAccessory:(id)arg0 ;
-(void)pairedToServer:(id)arg0 certificationStatus:(NSInteger)arg1 addedViaWAC:(BOOL)arg2 legacyWAC:(BOOL)arg3 ;
-(void)setAddedViaWAC:(BOOL)arg0 ;
-(void)setAuthenticationMethod:(NSUInteger)arg0 ;
-(void)submitAtDate:(id)arg0 ;
-(void)updateEventPropertiesWithHAPAccessory:(id)arg0 ;
-(void)updateEventPropertiesWithPairedAccessory:(id)arg0 ;
-(void)updateResidentConfirmationDurationWithConfirmation:(NSInteger)arg0 ;


@end


#endif