// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTSESSIONENTITY_H
#define HDWORKOUTSESSIONENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutSessionEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)createSessionWithIdentifier:(id)arg0 source:(id)arg1 configuration:(id)arg2 state:(NSInteger)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)lookupSessionWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)privateSubEntities;
+(id)sessionIdentifierForRecoveryInProfile:(id)arg0 expirationInterval:(CGFloat)arg1 error:(*id)arg2 ;
+(id)sessionsExcludingIdentifiers:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)sessionsForSource:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)finishWithTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertWorkoutEvent:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setAssociatedBuilder:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setClientApplicationIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setClientBundleIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setEndDate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setHasFailed:(BOOL)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setRequestedTargetState:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setSource:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setStartDate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setState:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setWorkoutConfiguration:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateLatestActivityDate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateLatestActivityDateWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)associatedBuilderWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)clientApplicationIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)clientBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)endDateInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)hasFailedInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)latestActivityDateInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)requestedTargetStateWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)sessionIdentifierWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)sourceWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)startDateInTransaction:(id)arg0 error:(*id)arg1 ;
-(id)stateWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)workoutConfigurationWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)workoutEventsInTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif