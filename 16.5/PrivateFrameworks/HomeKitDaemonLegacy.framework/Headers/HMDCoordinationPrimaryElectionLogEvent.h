// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOORDINATIONPRIMARYELECTIONLOGEVENT_H
#define HMDCOORDINATIONPRIMARYELECTIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDCoordinationPrimaryElectionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property NSUInteger confirmationCriteria; // ivar: _confirmationCriteria
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didChangePrimary; // ivar: _didChangePrimary
@property NSUInteger electionTriggerReason; // ivar: _electionTriggerReason
@property (readonly) NSUInteger hash;
@property BOOL isPrimary; // ivar: _isPrimary
@property BOOL meshAndPrimaryCandidateCountEqual; // ivar: _meshAndPrimaryCandidateCountEqual
@property BOOL previousPrimaryInMesh; // ivar: _previousPrimaryInMesh
@property (readonly) Class superclass;


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;


@end


#endif