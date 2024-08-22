// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCPLUGINSERVER_H
#define HDMCPLUGINSERVER_H

@class HDStandardTaskServer, HDProfile, HDHealthStoreClient, NSString;
@protocol HDDiagnosticObject, HDMenstrualCyclesPluginServerInterface, OS_dispatch_queue;


#import "HDMCProfileExtension.h"

@interface HDMCPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDMenstrualCyclesPluginServerInterface>

 {
    HDProfile *_profile;
    HDMCProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(BOOL)_queue_deleteSamplesOfType:(id)arg0 onDayIndex:(NSInteger)arg1 calendarCache:(id)arg2 error:(*id)arg3 ;
-(BOOL)_queue_insertSamplesWithClientSource:(id)arg0 creationDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)_queue_insertSamplesWithClientSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)_queue_reconcileSamplesToDeriveDaySummary:(id)arg0 analysis:(id)arg1 canOverrideCreationDate:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_queue_saveIntermenstrualBleedingByDayIndex:(id)arg0 calendarCache:(id)arg1 error:(*id)arg2 ;
-(BOOL)_queue_saveLastMenstrualPeriodWithDayIndexRange:(struct ? )arg0 calendarCache:(id)arg1 error:(*id)arg2 ;
-(BOOL)_queue_saveMenstrualFlow:(NSInteger)arg0 forEachDayInRange:(struct ? )arg1 calendarCache:(id)arg2 error:(*id)arg3 ;
-(BOOL)_queue_saveMenstrualFlowByDayIndex:(id)arg0 calendarCache:(id)arg1 error:(*id)arg2 ;
-(BOOL)_queue_saveMenstrualFlowUpdatingAdjacentDays:(NSInteger)arg0 dayIndex:(NSInteger)arg1 calendarCache:(id)arg2 error:(*id)arg3 ;
-(BOOL)_queue_savePeriodStartedOnDayIndex:(NSInteger)arg0 endedOnDayIndex:(NSInteger)arg1 calendarCache:(id)arg2 error:(*id)arg3 ;
-(BOOL)_queue_updateStartOfCycleMetadataForModifiedDayIndex:(NSInteger)arg0 calendarCache:(id)arg1 canOverrideCreationDate:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_queue_updateUnderlyingSamplesToReplaceDaySummary:(id)arg0 withDaySummary:(id)arg1 calendarCache:(id)arg2 canOverrideCreationDate:(BOOL)arg3 error:(*id)arg4 ;
-(id)_queue_mostRecentMenstrualFlowSampleWithError:(*id)arg0 requiringBeforeDay:(NSInteger)arg1 calendarCache:(id)arg2 ;
-(id)_samplesToInsertForUpdateFromDaySummary:(id)arg0 toDaySummary:(id)arg1 typesToDelete:(*id)arg2 calendarCache:(id)arg3 ;
-(id)diagnosticDescription;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 profileExtension:(id)arg4 ;
-(id)remoteInterface;
-(void)_queue_updateLastLoggedInExperienceDate;
-(void)_submitPredictionAccuracyAnalyticWithDayIndex:(NSInteger)arg0 oldMenstrualFlow:(NSInteger)arg1 newMenstrualFlow:(NSInteger)arg2 analysis:(id)arg3 isLoggingMultipleDays:(BOOL)arg4 ;
-(void)_triggerNanoSync;
-(void)connectionInvalidated;
-(void)remote_confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(id)arg0 intermenstrualBleedingByDayIndex:(id)arg1 addedCycleFactors:(id)arg2 initialAnalysisWindow:(struct ? )arg3 completion:(id)arg4 ;
-(void)remote_fetchScheduledNotificationsWithCompletion:(id)arg0 ;
-(void)remote_saveDaySummaries:(id)arg0 canOverrideCreationDate:(BOOL)arg1 completion:(id)arg2 ;
-(void)remote_saveLastMenstrualPeriodWithDayIndexRange:(struct ? )arg0 completion:(id)arg1 ;
-(void)remote_saveMenstrualFlow:(NSInteger)arg0 dayIndex:(NSInteger)arg1 updateAdjacentDays:(BOOL)arg2 completion:(id)arg3 ;
-(void)remote_saveMenstrualFlowByDayIndex:(id)arg0 completion:(id)arg1 ;
-(void)remote_savePeriodEndedOnDayIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_savePeriodNotYetEndedWithCompletion:(id)arg0 ;
-(void)remote_savePeriodNotYetStartedWithCompletion:(id)arg0 ;
-(void)remote_savePeriodStartedOnDayIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_savePeriodStartedOnDayIndex:(NSInteger)arg0 endedOnDayIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)remote_triggerAnalysisForDebugReason:(id)arg0 completion:(id)arg1 ;


@end


#endif