// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACTIONSETEVENT_H
#define HMDACTIONSETEVENT_H

@class HMMLogEvent, NSArray, NSString, NSUUID, NSDate;
@protocol HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMDCoreDuetLogEvent, HMDAWDLogEvent;


#import "HMDHome.h"

@interface HMDActionSetEvent : HMMLogEvent <HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMDCoreDuetLogEvent, HMDAWDLogEvent>



@property (readonly, copy, nonatomic) NSArray *accessoryUUIDs; // ivar: _accessoryUUIDs
@property (readonly, copy, nonatomic) NSArray *accessoryUniqueIdentifiers; // ivar: _accessoryUniqueIdentifiers
@property (readonly, copy, nonatomic) NSString *actionSetName; // ivar: _actionSetName
@property (readonly, copy, nonatomic) NSString *actionSetType; // ivar: _actionSetType
@property (readonly, copy, nonatomic) NSUUID *actionSetUUID; // ivar: _actionSetUUID
@property (readonly, copy, nonatomic) NSUUID *actionSetUniqueIdentifier; // ivar: _actionSetUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger duetEventType;
@property (readonly, copy) NSDate *endDate;
@property (readonly, copy) NSArray *eventDataToLog;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, copy) NSString *homeName; // ivar: _homeName
@property (readonly, nonatomic) unsigned int numAccessoriesInHome; // ivar: _numAccessoriesInHome
@property (readonly, nonatomic) unsigned int numAccessoriesModified; // ivar: _numAccessoriesModified
@property (readonly, nonatomic) unsigned int numNonEmptyScenesInHome; // ivar: _numNonEmptyScenesInHome
@property (readonly, copy, nonatomic) NSString *serializedIdentifier; // ivar: _serializedIdentifier
@property (readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *transactionId; // ivar: _transactionId
@property (readonly, nonatomic) NSUInteger triggerSource; // ivar: _triggerSource


-(BOOL)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(id)arg0 ;
-(BOOL)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(id)arg0 ;
-(NSUInteger)microLocationScanTriggerTypeForLogEventObserver:(id)arg0 ;
-(id)biomeEventsRepresentationForLogObserver:(id)arg0 ;
-(id)initWithActionSet:(id)arg0 source:(NSUInteger)arg1 numAccessories:(unsigned int)arg2 bundleId:(id)arg3 transactionId:(id)arg4 ;
-(id)metadata;
-(id)metricForAWD;
-(id)microLocationMetadataForLogEventObserver:(id)arg0 ;
-(id)value;
-(unsigned int)AWDMessageType;


@end


#endif