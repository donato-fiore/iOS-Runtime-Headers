// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXDUETHELPER_H
#define _ATXDUETHELPER_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface _ATXDuetHelper : NSObject {
    _PASLock *_deletionHandlerLock;
    _PASLock *_rootOfAppDataLock;
}




+(id)sharedInstance;
-(CGFloat)maxAgeOfPreviousDonationToConsider;
-(NSUInteger)_countDuetStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 ;
-(NSUInteger)getDocFreqFor:(id)arg0 contentKey:(id)arg1 ;
-(NSUInteger)numActivityEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(NSUInteger)numIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 limit:(NSUInteger)arg2 ;
// -(NSUInteger)registerDeletionHandler:(id)arg0 queue:(unk)arg1  ;
-(id)_getIntentEventForSource:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 bundleIdFilter:(id)arg4 allowMissingTitles:(BOOL)arg5 limit:(NSUInteger)arg6 ;
-(id)_queryDuetStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 ;
-(id)_queryDuetStreamUnbatched:(id)arg0 creationDateStart:(id)arg1 creationDateEnd:(id)arg2 ascending:(BOOL)arg3 otherPredicates:(id)arg4 limit:(NSUInteger)arg5 offset:(NSUInteger)arg6 ;
-(id)_queryDuetStreamUnbatched:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ascending:(BOOL)arg3 otherPredicates:(id)arg4 limit:(NSUInteger)arg5 offset:(NSUInteger)arg6 ;
-(id)getActivityAndIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 ascending:(BOOL)arg2 ;
-(id)getActivityAndIntentEventsFromLastMonth;
-(id)getActivityEventFromDKEvent:(id)arg0 bundleIdFilter:(id)arg1 ;
-(id)getActivityEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)getActivityEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg0 endDate:(id)arg1 batchSize:(NSUInteger)arg2 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 limit:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)getAppLaunchesFromOneMonth;
-(id)getAppLaunchesFromUsageBetweenStartDate:(id)arg0 endDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)getDNDTransitionsBetweenStartDate:(id)arg0 endDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)getFirstActivityEventBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 ;
-(id)getFirstAppLaunchBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 ;
-(id)getFirstIntentEventBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 forSource:(NSInteger)arg3 ;
-(id)getFirstSortedActivityOrIntentEventBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 comparator:(id)arg3 ;
-(id)getIntentEventForUUID:(id)arg0 forSource:(NSInteger)arg1 ;
-(id)getIntentEventFromDKEvent:(id)arg0 source:(NSInteger)arg1 bundleIdFilter:(id)arg2 allowMissingTitles:(BOOL)arg3 intentsToKeep:(id)arg4 ;
-(id)getIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 forSource:(NSInteger)arg3 allowMissingTitles:(BOOL)arg4 ;
-(id)getIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 forSource:(NSInteger)arg2 ;
-(id)getLastAppLaunchBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 ;
-(id)getMicroLocationsFromLastMonth;
-(id)getMostRecentINPlayMediaIntentEvent;
-(id)getMostRecentMicroLocation;
-(id)getNotificationEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)getRelevantShortcutsToBundleIdDictBetweenStartDate:(id)arg0 endDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)getRootOfAppSignalsFor:(id)arg0 contentKey:(id)arg1 ;
-(id)getScreenOnIntervalsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)getScreenTransitionsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)getSortedActivityAndIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 comparator:(id)arg3 ;
-(id)init;
-(void)_computeRootOfAppDataWithLockWitness:(id)arg0 ;
-(void)_enumerateActivityEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdFilter:(id)arg2 limit:(NSUInteger)arg3 ascending:(BOOL)arg4 callback:(id)arg5 ;
-(void)_enumerateBatchesInDuetStream:(id)arg0 creationDateStart:(id)arg1 creationDateEnd:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 ascending:(BOOL)arg5 block:(id)arg6 ;
-(void)_enumerateBatchesInDuetStream:(id)arg0 creationDateStart:(id)arg1 creationDateEnd:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 batchSize:(NSUInteger)arg5 ascending:(BOOL)arg6 block:(id)arg7 ;
-(void)_enumerateBatchesInDuetStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 ascending:(BOOL)arg5 block:(id)arg6 ;
-(void)_enumerateBatchesInDuetStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 limit:(NSUInteger)arg4 batchSize:(NSUInteger)arg5 ascending:(BOOL)arg6 block:(id)arg7 ;
-(void)_enumerateIntentEventsForSource:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 otherPredicates:(id)arg3 bundleIdFilter:(id)arg4 allowMissingTitles:(BOOL)arg5 limit:(NSUInteger)arg6 ascending:(BOOL)arg7 callback:(id)arg8 ;
-(void)_handleTombstoneCreationWithNotification:(id)arg0 ;
-(void)dealloc;
-(void)deregisterDeletionHandlerWithToken:(NSUInteger)arg0 ;
-(void)enumerateActivityAndIntentEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 intentLimit:(NSUInteger)arg2 nsuaLimit:(NSUInteger)arg3 ascending:(BOOL)arg4 callback:(id)arg5 ;
-(void)enumerateActivityAndIntentEventsFromLastMonthWithLimit:(NSUInteger)arg0 nsuaLimit:(NSUInteger)arg1 ascending:(BOOL)arg2 callback:(id)arg3 ;
-(void)enumerateBatchedEligibleActivityDeletionUUIDsAndDatesBetweenStartDate:(id)arg0 endDate:(id)arg1 batchSize:(NSUInteger)arg2 block:(id)arg3 ;
-(void)enumerateBatchedIntentDeletionUUIDsAndDatesBetweenStartdate:(id)arg0 endDate:(id)arg1 batchSize:(NSUInteger)arg2 block:(id)arg3 ;


@end


#endif