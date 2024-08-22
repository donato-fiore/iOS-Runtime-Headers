// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETWORKANALYTICSMODEL_H
#define NETWORKANALYTICSMODEL_H

@class NSString, AnalyticsWorkspace, NSArray, NSCalendar, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ImpoExpoService.h"
#import "SystemSettingsRelay.h"

@interface NetworkAnalyticsModel : NSObject {
    NSString *journalName;
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *queue;
    ImpoExpoService *ieService;
    int wifiPredictionLogic;
    int cellPredictionLogic;
    int weightStrategy;
    NSString *_pathForReadingIpsFile;
    NSString *_simulatedJournalPath;
    NSUInteger periodPerDay;
    NSUInteger minimumEventsToConsiderPattern;
    NSInteger firstEventTimeStampWifi;
    NSInteger firstEventTimeStampCell;
    NSInteger lastEventTimeStampWifi;
    NSInteger lastEventTimeStampCell;
    NSInteger latestPredictionTrainingTimeCell;
    NSInteger latestPredictionTrainingTimeWifi;
    NSUInteger numberOfDaysWithWifiEvents;
    NSUInteger numberOfDaysWithCellEvents;
    NSArray *defaultArrayOfDaysGroupWifi;
    NSArray *defaultArrayOfDaysGroupCell;
    NSArray *currentArrayOfDaysGroupWifi;
    NSArray *currentArrayOfDaysGroupCell;
    NSInteger timezoneOffsetFromUtcNoDaylight;
    NSInteger homeTimezoneOffsetFromUtcNoDaylight;
    BOOL homeTimezoneOffsetKnownCoreRoutine;
    CGFloat wifiPredictionError;
    CGFloat cellPredictionError;
    NSArray *defaultLQMPredictionsWifi;
    NSArray *defaultLQMPredictionsCell;
    NSArray *currentLQMPredictionsWifi;
    NSArray *currentLQMPredictionsCell;
    NSString *currentlyConnectedWifiSsid;
    NSArray *disconnectionPatternsWifi;
    NSUInteger recallCounterWifi;
    NSUInteger recallCounterCell;
    NSUInteger pullupCounterWifi;
    NSUInteger pullupCounterCell;
    id *_cellEpochObserver;
    id *_wifiEpochObserver;
    id *_timezoneChangedObserver;
    NSCalendar *_calendar;
    NSUInteger limMinSamples;
    CGFloat limRatio;
    SystemSettingsRelay *systemSettingsRelay;
}


@property (retain) NSDate *debugTrainingTime; // ivar: _debugTrainingTime
@property (nonatomic) BOOL isHelper; // ivar: _isHelper
@property (retain) NSDate *lastModelRunTime; // ivar: _lastModelRunTime


+(CGFloat)fetchPredictionErrorForInterfaceType:(NSInteger)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 ;
+(CGFloat)fetchTrainingProgressForInterfaceType:(NSInteger)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 ;
+(NSUInteger)modelResolution;
+(id)fetchPredictionsForInterfaceType:(NSInteger)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 error:(*id)arg5 ;
+(id)getDaysWithSimilarPatternForInterfaceType:(NSInteger)arg0 ;
+(id)modelGeneratedAt;
+(void)purgeAllJournalRecords;
+(void)resetModel;
-(BOOL)_insertInternalNetworkStateRecordTo:(id)arg0 networkId:(id)arg1 networkLQM:(NSInteger)arg2 age:(NSInteger)arg3 dayOfWeek:(NSInteger)arg4 slotId:(NSInteger)arg5 numberOfSlots:(NSInteger)arg6 stateDuration:(NSInteger)arg7 ;
-(BOOL)_isLegacyJournal:(id)arg0 ;
-(BOOL)_isValidTimezoneToReturnPredictions;
-(BOOL)_isValidTimezoneToTrain;
-(BOOL)_savePredictionToJournalForInterface:(NSInteger)arg0 ;
-(BOOL)_shouldCreateIpsFile;
-(CGFloat)_clusterUsingKMeansOn:(id)arg0 into:(int)arg1 iterations:(int)arg2 saveCentroidsTo:(id)arg3 ;
-(CGFloat)_evaluateErrorOfLQMPredictions:(id)arg0 againstObservedLQMTable:(id)arg1 ;
-(CGFloat)_fetchPredictionErrorForInterfaceType:(NSInteger)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 ;
-(CGFloat)_fetchTrainingProgressForInterfaceType:(NSInteger)arg0 ;
-(CGFloat)_fetchTrainingProgressForInterfaceType:(NSInteger)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 ;
-(NSInteger)_getCellInstantQualityBasedOnLQM:(char)arg0 ;
-(NSInteger)_getCurrentLocationTimezoneOffsetWithoutDST;
-(NSInteger)_getDominantLQMInSlotWithTimeSpentInBest:(NSInteger)arg0 inFair:(NSInteger)arg1 inMinimallyViable:(NSInteger)arg2 inNone:(NSInteger)arg3 ;
-(NSInteger)_getNWInstantQualityForNetwork:(NSInteger)arg0 basedOnLQM:(char)arg1 ;
-(NSInteger)_getWifiInstantQualityBasedOnLQM:(char)arg0 ;
-(NSInteger)_predictNetworkQualityBasedOnAverageNWInstantQuality:(CGFloat)arg0 ;
-(NSUInteger)_getTotalWeightForCompletedHistory;
-(NSUInteger)_getWeightForAge:(NSInteger)arg0 ;
-(NSUInteger)_modelResolution;
-(NSUInteger)_sanitizeInternalLQMStateEventFrom:(id)arg0 toTable:(id)arg1 ;
-(id)_clusterEventsInWeekUsingKMeansOn:(id)arg0 ;
-(id)_clusterEventsUsingKMeansForSetOfDays:(id)arg0 networkStateTable:(id)arg1 saveCentroidsTo:(id)arg2 ;
-(id)_createHeaderDataForSavedPredictionsName:(id)arg0 hasComplementaryPrediction:(BOOL)arg1 interfaceType:(NSInteger)arg2 ;
-(id)_extractImpairmentEventsFromNetworkStateTable:(id)arg0 setOfDays:(id)arg1 ;
-(id)_fetchPredictionsForInterfaceType:(NSInteger)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 error:(*id)arg5 ;
-(id)_getComplementaryPredictionNameForInterface:(NSInteger)arg0 ;
-(id)_getDaysWithSimilarPatternForInterfaceType:(NSInteger)arg0 ;
-(id)_getPredictionJournalNameWithPrefix:(id)arg0 forInterface:(NSInteger)arg1 slotSizeMinutes:(NSUInteger)arg2 ;
-(id)_getSavedPredictionHeaderNameForInterface:(NSInteger)arg0 ;
-(id)_learnDisconnectionPatternForSetOfDays:(id)arg0 impairmentEvents:(id)arg1 ;
-(id)_loadSavedPredictionBasedOnHeaderData:(id)arg0 interface:(NSInteger)arg1 ;
-(id)_purgeAndReturnValidJournalWithPrefix:(id)arg0 olderThan:(NSUInteger)arg1 ;
-(id)_readJournalEntries;
-(id)_readJournalEntriesUsingImpoExpoService;
-(id)_readJournalEntriesUsingIpsfile;
-(id)_readJournalEntriesUsingSimulatedfile;
-(id)initWithJournalName:(id)arg0 workspace:(id)arg1 queue:(id)arg2 ;
-(int)_elbowOfList:(id)arg0 ;
-(struct ? )_calculateStatisticsFromNetworkStateTable:(id)arg0 usingPredicate:(id)arg1 ;
-(struct ? )_parseTimeIntoWeekdayAndSlotId:(NSInteger)arg0 withReferenceDate:(id)arg1 ;
-(unsigned int)numberOfGroupOfSimilarDaysForInterface:(NSInteger)arg0 ;
-(void)_actUponSystemSettingsAirplaneChanged:(BOOL)arg0 wifiChanged:(BOOL)arg1 cellDataChanged:(BOOL)arg2 ;
-(void)_clusterImpairmentEventsUsingKMeansOn:(id)arg0 saveCentroidsTo:(id)arg1 ;
-(void)_fetchHomeTimezoneOffsetFromJournal;
-(void)_finishedReadingLowInternetModeRecords:(id)arg0 ;
-(void)_generatePredictionForDays:(id)arg0 fromClusteredEvents:(id)arg1 clusterCentroids:(id)arg2 interfaceType:(NSInteger)arg3 basedOnWeekClusters:(NSInteger)arg4 savePredictionsTo:(id)arg5 ;
-(void)_handleNetworkNotificationFrom:(NSInteger)arg0 notification:(id)arg1 ;
-(void)_handleTimezoneChanged;
-(void)_loadLatestPredictionFromJournalWithInterfaceType:(NSInteger)arg0 ;
-(void)_printInternalStateSet:(id)arg0 ;
-(void)_processJournalData:(id)arg0 startFrom:(NSInteger)arg1 endAt:(NSInteger)arg2 rawWifiStateSet:(id)arg3 rawCellStateSet:(id)arg4 ;
-(void)_processLowInternetModeRecord:(id)arg0 addTo:(id)arg1 ;
-(void)_processNetworkState:(struct ? *)arg0 toStateSet:(id)arg1 stateStartTimeInfo:(struct ? )arg2 stateEndTimeInfo:(struct ? )arg3 effectiveNetworkId:(id)arg4 ;
-(void)_purgeAllJournalRecords;
-(void)_purgeSavedPredictionsOlderThan:(NSUInteger)arg0 ;
-(void)_removePrimarykeyAndLocationInJournalRecordInfo:(id)arg0 ;
-(void)_resetModel;
-(void)_setCalendar:(id)arg0 ;
-(void)_shuffleArray:(id)arg0 ;
-(void)_trainModelAt:(id)arg0 ;
-(void)_trainModelForInterfaceType:(NSInteger)arg0 sanitizedLQMTable:(id)arg1 ;
-(void)_updateHomeTimezoneOffsetIfNeeded;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postAWDPredictionMetricsForInterface:(NSInteger)arg0 previousTime:(NSInteger)arg1 ;
-(void)processProxyTrain;
-(void)trainModel;


@end


#endif