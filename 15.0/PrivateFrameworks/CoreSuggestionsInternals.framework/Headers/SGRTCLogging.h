// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGRTCLOGGING_H
#define SGRTCLOGGING_H

@class _PASLock, NSString;
@protocol NSSecureCoding, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SGRTCLogging : NSObject <NSSecureCoding>

 {
    _PASLock *_lock;
    NSString *_path;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    NSObject<OS_dispatch_queue> *_interactionsWriteQueue;
}




+(BOOL)_createEmptyFileAtPath:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)round:(CGFloat)arg0 toSignificantFigures:(NSInteger)arg1 ;
+(NSUInteger)aggregateSummaryBucketizedLaunchCountForApp:(id)arg0 afterDate:(id)arg1 ;
+(NSUInteger)bucketizeInteger:(NSUInteger)arg0 withBucketSize:(NSUInteger)arg1 limit:(NSUInteger)arg2 ;
+(NSUInteger)bucketizeIntegerForAggregateSummary:(NSUInteger)arg0 ;
+(NSUInteger)launchCountForApp:(id)arg0 afterDate:(id)arg1 limit:(NSUInteger)arg2 ;
+(NSUInteger)launchCountForApp:(id)arg0 afterDate:(id)arg1 lowerBucket:(NSUInteger)arg2 bucketSize:(NSUInteger)arg3 bucketLimit:(NSUInteger)arg4 ;
+(NSUInteger)numberOfDaysBetweenDate:(id)arg0 andDate:(id)arg1 ;
+(id)dateByAppendingDaysToCurrentDate:(CGFloat)arg0 ;
+(id)defaultLogger;
+(id)describeReminderExtractionStatus:(unsigned char)arg0 ;
+(id)descriptionForOriginType:(NSUInteger)arg0 ;
+(id)locationTypeForEntity:(id)arg0 ;
+(id)locationTypeForHandle:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 airportCode:(id)arg3 address:(id)arg4 label:(id)arg5 ;
+(id)locationTypeForRealtimeEvent:(id)arg0 ;
-(BOOL)incrementAndUpgradeInteractionSummaryForEventKey:(id)arg0 interactionKey:(id)arg1 parentEntity:(id)arg2 ;
-(BOOL)removeInteractionsSummaryLogsFromLogs:(id)arg0 ;
-(BOOL)resetExtractionLogs;
-(BOOL)resetInteractionsLogs;
-(BOOL)resetInteractionsSummaryLogs;
-(BOOL)resetLogs;
-(BOOL)storeToDisk;
-(CGFloat)storeAge;
-(NSUInteger)loggedExtractionsEventsCount;
-(id)_baseInteractionAttributesForReminder:(id)arg0 ;
-(id)_calendarUsageLast2Weeks;
-(id)_createRTCReporting;
-(id)_deepCopy:(id)arg0 ;
-(id)_deepMutableContainersCopy:(id)arg0 ;
-(id)_descriptionForActionType:(unsigned short)arg0 ;
-(id)_descriptionForBundleId:(id)arg0 ;
-(id)_descriptionForExtractionStatus:(unsigned short)arg0 ;
-(id)_descriptionForInterface:(unsigned short)arg0 ;
-(id)_eventExtractionDictionaryLogForTemplateName:(id)arg0 extractionStatus:(unsigned short)arg1 outputExceptions:(id)arg2 outputInfos:(id)arg3 jsMessageLogs:(id)arg4 jsOutputLogs:(id)arg5 timingProcessing:(NSUInteger)arg6 ;
-(id)_eventKeyforReminder:(id)arg0 ;
-(id)_interactionAttributesForEntity:(id)arg0 parentEntity:(id)arg1 ;
-(id)_interactionAttributesForRealtimeEvent:(id)arg0 parentEntity:(id)arg1 ;
-(id)_interactionAttributesForTags:(id)arg0 parentEntity:(id)arg1 ;
-(id)_interactionDictionaryForDueLocation:(id)arg0 dueDateComponents:(id)arg1 ;
-(id)_interactionSummaryForReminder:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(id)_mapsUsageLast2Weeks;
-(id)baseInteractionDictionaryForInterface:(unsigned short)arg0 actionType:(unsigned short)arg1 ;
-(id)bucketizedRemindersCreatedAfterDate:(id)arg0 endDate:(id)arg1 ;
-(id)cappedDeliveryEntityCountsCreatedBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)cappedDeliveryEntityCountsCreatedBetweenStartDate:(id)arg0 endDate:(id)arg1 store:(id)arg2 ;
-(id)createInteractionSummaryForEventKey:(id)arg0 expirationDate:(id)arg1 interactionKey:(id)arg2 interactionAttributes:(id)arg3 rtcCategory:(unsigned short)arg4 ;
-(id)descriptionForEntityType:(NSInteger)arg0 ;
-(id)descriptionForSGRTCCategory:(unsigned short)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilename:(id)arg0 ;
-(id)interactionKeyForCategory:(unsigned short)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(id)interactionKeyForInterface:(unsigned short)arg0 actionType:(unsigned short)arg1 ;
-(id)interactionsWriteQueue;
-(id)launchCountMessageAfterDate:(id)arg0 ;
-(id)loggedExtractions;
-(id)loggedExtractionsDescription;
-(id)loggedInteractions;
-(id)loggedInteractionsDescription;
-(id)loggedInteractionsSummary;
-(id)loggedInteractionsSummaryDescription;
-(id)logsToSend;
-(id)trialIds;
-(id)trialIdsForStructuredEvent;
-(id)whitelistedLogFromLog:(id)arg0 ;
-(void)_logReminderInteractionSummaryForReminder:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)_updateLocationTypeFromInteractionsSummaryForEventKey:(id)arg0 locationType:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enrichAggregateSummaryLog:(id)arg0 ;
-(void)enrichInteractionSummaryLog:(id)arg0 ;
-(void)enrichReminderInteractionSummaryLog:(id)arg0 ;
-(void)logAggregateSummaryForInteraction:(id)arg0 ;
-(void)logAndIncrementEventCountForDictionary:(id)arg0 ;
-(void)logEventExtractionForTemplateName:(id)arg0 extractionStatus:(unsigned short)arg1 outputExceptions:(id)arg2 outputInfos:(id)arg3 jsMessageLogs:(id)arg4 jsOutputLogs:(id)arg5 timingProcessing:(NSUInteger)arg6 ;
-(void)logEventInteractionForEntity:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForEntitySync:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForRealtimeEvent:(id)arg0 parentEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)logEventInteractionForRealtimeEventSync:(id)arg0 parentEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)logNewInteractionSummaryWithDictionary:(id)arg0 ;
-(void)logNewInteractionWithDictionary:(id)arg0 ;
-(void)logReminderExtractionFromEntity:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 dueLocation:(id)arg3 dueDateComponents:(id)arg4 extractionStatus:(unsigned char)arg5 timingProcessing:(CGFloat)arg6 ;
-(void)logReminderInteractionFromEntity:(id)arg0 usingStore:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)logReminderInteractionFromReminder:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)sendRTCLogsWithCompletion:(id)arg0 ;
// -(void)sendRTCLogsWithShouldContinueBlock:(id)arg0 completion:(unk)arg1  ;
-(void)updateAndScheduleDiskWrite;


@end


#endif