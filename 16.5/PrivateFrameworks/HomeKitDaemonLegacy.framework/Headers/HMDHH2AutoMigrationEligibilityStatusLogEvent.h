// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2AUTOMIGRATIONELIGIBILITYSTATUSLOGEVENT_H
#define HMDHH2AUTOMIGRATIONELIGIBILITYSTATUSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHH2AutoMigrationEligibilityStatusLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly) NSInteger currentUserAutoMigrationByOwnerEligibilityStatus; // ivar: _currentUserAutoMigrationByOwnerEligibilityStatus
@property (readonly) NSInteger currentUserAutoMigrationEligibilityStatus; // ivar: _currentUserAutoMigrationEligibilityStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithAutoMigrationEligibilityStatus:(NSInteger)arg0 autoMigrationEligibilityStatusByOwner:(NSInteger)arg1 ;


@end


#endif