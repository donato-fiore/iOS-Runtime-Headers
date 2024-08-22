// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHH2MIGRATIONLOGEVENT_H
#define HMDHH2MIGRATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHH2MigrationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration; // ivar: _autoMigration
@property (readonly, nonatomic) NSString *coreDataValidationAttributeName; // ivar: _coreDataValidationAttributeName
@property (readonly, nonatomic) NSString *coreDataValidationEntityClassName; // ivar: _coreDataValidationEntityClassName
@property (readonly, nonatomic, getter=isDryRun) BOOL dryRun; // ivar: _dryRun
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *failureReason; // ivar: _failureReason
@property (readonly, nonatomic) NSString *localizedErrorDescription; // ivar: _localizedErrorDescription
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSInteger migrationAttempt; // ivar: _migrationAttempt
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful; // ivar: _migrationSuccessful
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) CGFloat totalTimeTakenForMigration; // ivar: _totalTimeTakenForMigration


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithAutoMigration:(BOOL)arg0 isDryRun:(BOOL)arg1 migrationSuccessful:(BOOL)arg2 totalMigrationTime:(NSInteger)arg3 totalMigrationAttempt:(NSInteger)arg4 migrationError:(id)arg5 failureReason:(id)arg6 coreDataValidationEntityClassName:(id)arg7 coreDataValidationAttributeName:(id)arg8 localizedErrorDescription:(id)arg9 ;


@end


#endif