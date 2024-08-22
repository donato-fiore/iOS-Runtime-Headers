// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2MIGRATIONDAILYTOTALSLOGEVENT_H
#define HMDHH2MIGRATIONDAILYTOTALSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHH2MigrationDailyTotalsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger migrationEventType; // ivar: _migrationEventType
@property (readonly) BOOL shouldTriggerTTR; // ivar: _shouldTriggerTTR
@property (readonly) Class superclass;


-(id)initEndWithAutoMigration:(BOOL)arg0 dryRun:(BOOL)arg1 error:(id)arg2 shouldTriggerTTR:(BOOL)arg3 ;
-(id)initStartWithAutoMigration:(BOOL)arg0 dryRun:(BOOL)arg1 ;
-(id)initWithMigrationEventType:(NSUInteger)arg0 error:(id)arg1 shouldTriggerTTR:(BOOL)arg2 ;


@end


#endif