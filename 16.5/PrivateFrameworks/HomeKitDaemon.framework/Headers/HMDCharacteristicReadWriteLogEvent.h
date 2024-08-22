// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHARACTERISTICREADWRITELOGEVENT_H
#define HMDCHARACTERISTICREADWRITELOGEVENT_H

@class HMMHomeLogEvent, NSString, NSUUID, NSArray, NSDictionary, NSError, NSMutableDictionary;
@protocol HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMMCoreAnalyticsLogging;



@interface HMDCharacteristicReadWriteLogEvent : HMMHomeLogEvent <HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryCategory; // ivar: _accessoryCategory
@property (readonly, nonatomic) NSInteger accessoryCertificationStatus; // ivar: _accessoryCertificationStatus
@property (readonly, nonatomic) NSString *accessoryFirmwareVersion; // ivar: _accessoryFirmwareVersion
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *accessoryManufacturer; // ivar: _accessoryManufacturer
@property (readonly, copy) NSString *accessoryMediaRouteID; // ivar: _accessoryMediaRouteID
@property (readonly, nonatomic) NSString *accessoryModel; // ivar: _accessoryModel
@property (readonly, copy) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, copy) NSString *accessoryRoomName; // ivar: _accessoryRoomName
@property (readonly, copy) NSUUID *accessoryRoomUniqueIdentifier; // ivar: _accessoryRoomUniqueIdentifier
@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy) NSUUID *accessoryUniqueIdentifier; // ivar: _accessoryUniqueIdentifier
@property (readonly, copy) NSArray *accessoryZoneNames; // ivar: _accessoryZoneNames
@property (readonly, copy) NSArray *accessoryZoneUniqueIdentifiers; // ivar: _accessoryZoneUniqueIdentifiers
@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSArray *characteristicsInRequest; // ivar: _characteristicsInRequest
@property (readonly, copy) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (readonly, nonatomic) NSInteger communicationProtocol; // ivar: _communicationProtocol
@property (nonatomic) NSUInteger consecutiveFailureCount; // ivar: _consecutiveFailureCount
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasSession; // ivar: _hasSession
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *homeName; // ivar: _homeName
@property (readonly, getter=isHomeThreadCapable) BOOL homeThreadCapable; // ivar: _homeThreadCapable
@property (readonly, copy) NSUUID *homeUniqueIdentifier; // ivar: _homeUniqueIdentifier
@property (readonly) BOOL isAtHome; // ivar: _isAtHome
@property (nonatomic) BOOL isCached; // ivar: _isCached
@property (readonly, nonatomic) BOOL isCurrentDeviceAvailableResident; // ivar: _isCurrentDeviceAvailableResident
@property (readonly, nonatomic) BOOL isCurrentDeviceConfirmedPrimaryResident; // ivar: _isCurrentDeviceConfirmedPrimaryResident
@property (readonly, nonatomic) BOOL isCurrentDevicePrimaryResident; // ivar: _isCurrentDevicePrimaryResident
@property BOOL isDeviceAtHome; // ivar: _isDeviceAtHome
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property BOOL isModernTransport; // ivar: _isModernTransport
@property (readonly, nonatomic) BOOL isPrimaryResidentReachable; // ivar: _isPrimaryResidentReachable
@property (readonly, nonatomic) BOOL isRemoteAccessAllowed; // ivar: _isRemoteAccessAllowed
@property (readonly, nonatomic) BOOL isRemotelyReachable; // ivar: _isRemotelyReachable
@property (readonly, nonatomic) BOOL isResidentAvailable; // ivar: _isResidentAvailable
@property BOOL isResidentFirstEnabled; // ivar: _isResidentFirstEnabled
@property (nonatomic) BOOL isSentOverThread; // ivar: _isSentOverThread
@property BOOL isSlowRapport; // ivar: _isSlowRapport
@property (nonatomic) BOOL isTimedWrite; // ivar: _isTimedWrite
@property (readonly, nonatomic) BOOL isWriteOperation; // ivar: _isWriteOperation
@property (readonly) NSUInteger lastKnownLinkQuality; // ivar: _lastKnownLinkQuality
@property (nonatomic) NSInteger linkType; // ivar: _linkType
@property CGFloat localDurationInMilliseconds; // ivar: _localDurationInMilliseconds
@property (readonly) unsigned int numAccessoriesInHome; // ivar: _numAccessoriesInHome
@property (readonly) unsigned int numNonEmptyScenesInHome; // ivar: _numNonEmptyScenesInHome
@property (readonly, nonatomic) NSString *primaryServiceType; // ivar: _primaryServiceType
@property (readonly, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly) NSUInteger recentSessionRetries; // ivar: _recentSessionRetries
@property CGFloat residentFirstDurationInMilliseconds; // ivar: _residentFirstDurationInMilliseconds
@property (copy, nonatomic) NSError *residentFirstError; // ivar: _residentFirstError
@property (readonly, copy) NSDictionary *serviceUUIDToServiceGroupName; // ivar: _serviceUUIDToServiceGroupName
@property (readonly, copy) NSDictionary *serviceUUIDToServiceGroupUniqueIdentifier; // ivar: _serviceUUIDToServiceGroupUniqueIdentifier
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, getter=isThreadAccessory) BOOL threadAccessory; // ivar: _threadAccessory
@property (nonatomic) CGFloat timeIntervalSinceFirstFailure; // ivar: _timeIntervalSinceFirstFailure
@property (readonly) NSInteger topSessionFailureErrorCode; // ivar: _topSessionFailureErrorCode
@property (readonly, nonatomic) NSString *topSessionFailureErrorDomain; // ivar: _topSessionFailureErrorDomain
@property CGFloat totalDurationInMilliseconds; // ivar: _totalDurationInMilliseconds
@property (readonly, copy) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, copy, nonatomic) NSString *transportProtocolVersion; // ivar: _transportProtocolVersion
@property int transportType; // ivar: _transportType
@property (readonly, nonatomic) NSUInteger triggerSource; // ivar: _triggerSource
@property (readonly, copy) NSString *userUUID; // ivar: _userUUID
@property (retain, nonatomic) NSMutableDictionary *vendorDetailsForCoreAnalytics; // ivar: _vendorDetailsForCoreAnalytics
@property (readonly, copy) NSArray *writtenValues; // ivar: _writtenValues


+(id)eventWithCharacteristicsToRead:(id)arg0 hmdAccessory:(id)arg1 hapAccessory:(id)arg2 source:(NSUInteger)arg3 isLocal:(BOOL)arg4 transactionId:(id)arg5 isCached:(BOOL)arg6 bundleId:(id)arg7 ;
+(id)eventWithCharacteristicsToWrite:(id)arg0 hmdAccessory:(id)arg1 hapAccessory:(id)arg2 source:(NSUInteger)arg3 isTimedWrite:(BOOL)arg4 isLocal:(BOOL)arg5 transactionId:(id)arg6 bundleId:(id)arg7 writtenValues:(id)arg8 ;
-(BOOL)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(id)arg0 ;
-(BOOL)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(id)arg0 ;
-(NSUInteger)microLocationScanTriggerTypeForLogEventObserver:(id)arg0 ;
-(id)biomeEventsRepresentationForLogObserver:(id)arg0 ;
-(id)initWithCharacteristics:(id)arg0 hmdAccessory:(id)arg1 hapAccessory:(id)arg2 source:(NSUInteger)arg3 isWriteOperation:(BOOL)arg4 isTimedWrite:(BOOL)arg5 isLocal:(BOOL)arg6 transactionId:(id)arg7 isCached:(BOOL)arg8 bundleId:(id)arg9 writtenValues:(id)arg10 ;
-(id)microLocationMetadataForLogEventObserver:(id)arg0 ;
-(void)setLocal:(BOOL)arg0 ;
-(void)setResidentFirstDurationWithEndDate:(id)arg0 ;
-(void)submitAtDate:(id)arg0 ;


@end


#endif