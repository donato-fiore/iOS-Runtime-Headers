// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELTRAININGDATASETBUILDER_H
#define ATXANCHORMODELTRAININGDATASETBUILDER_H

@class NSString;
@protocol ATXAnchorModelTrainingDatasetBuilderProtocol, ATXAnchorModelDataStoreWrapperProtocol;

#import <Foundation/Foundation.h>

#import "ATXXPCActivity.h"

@interface ATXAnchorModelTrainingDatasetBuilder : NSObject <ATXAnchorModelTrainingDatasetBuilderProtocol>

 {
    id<ATXAnchorModelDataStoreWrapperProtocol> *_dataStoreWrapper;
    ATXXPCActivity *_xpcActivity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fetchAnchorEvents:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)anchorOccurredLongEnoughAgo:(id)arg0 anchor:(id)arg1 ;
-(BOOL)shouldCreateTrainingSamplesForAnchorEvent:(id)arg0 anchor:(id)arg1 ;
-(CGFloat)secondsAfterAnchorToCollectPositiveSamples:(id)arg0 ;
-(NSInteger)addActionEventsToDatabaseAfterAnchorEvent:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)addAppEventsToDatabaseAfterAnchorEvent:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)addCandidateTrainingSamplesToDatabaseForAnchor:(id)arg0 anchorEvents:(id)arg1 ;
-(NSInteger)addFeaturizedActionToDatabase:(id)arg0 featurizedAction:(id)arg1 actionOccurred:(BOOL)arg2 actionEngaged:(BOOL)arg3 anchorEvent:(id)arg4 anchor:(id)arg5 ;
-(NSInteger)addFeaturizedAppToDatabase:(id)arg0 featurizedApp:(id)arg1 appWasLaunched:(BOOL)arg2 appEngaged:(BOOL)arg3 anchorEvent:(id)arg4 anchor:(id)arg5 ;
-(NSInteger)addFeaturizedModeToDatabase:(id)arg0 featurizedMode:(id)arg1 modeOccurred:(BOOL)arg2 modeEngaged:(BOOL)arg3 anchorEvent:(id)arg4 anchor:(id)arg5 ;
-(NSInteger)addModeEventsToDatabaseAfterAnchorEvent:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)addNewTrainingSamplesToDatabase;
-(NSInteger)addNewTrainingSamplesToDatabaseForAnchor:(id)arg0 ;
-(NSInteger)addNewTrainingSamplesToDatabaseForAnchorEvent:(id)arg0 anchor:(id)arg1 ;
-(NSUInteger)cleanupDatasetForPrivacyPreservation;
-(id)actionCandidateIdsToTargetForAnchor:(id)arg0 excludeCandidateIdsFromActions:(id)arg1 ;
-(id)anchorsToIncludeInTrainingData;
-(id)appCandidateIdsToTargetForAnchor:(id)arg0 excludeCandidateIdsFromAppLaunches:(id)arg1 ;
-(id)appLaunchEventsFromNowPlayingStreamForAnchor:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)candidateIdSetFromAppIntentEvents:(id)arg0 ;
-(id)candidateIdSetFromAppLaunchDuetEvents:(id)arg0 ;
-(id)candidateIdSetFromModeEvents:(id)arg0 ;
-(id)featurizeActionEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)featurizeAppEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 eventFeaturizer:(id)arg2 ;
-(id)featurizeModeEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 eventFeaturizer:(id)arg2 ;
-(id)fetchNegativeActionEventsAfterAnchorDate:(id)arg0 anchor:(id)arg1 positiveActionEvents:(id)arg2 ;
-(id)fetchNegativeAppEventsAfterAnchorDate:(id)arg0 anchor:(id)arg1 positiveAppEvents:(id)arg2 ;
-(id)fetchNegativeModeEventsAfterAnchorDate:(id)arg0 anchor:(id)arg1 positiveModeEvents:(id)arg2 ;
-(id)fetchNewAnchorEventsForAnchor:(id)arg0 ;
-(id)fetchPositiveActionEventsAfterAnchorDate:(id)arg0 durationOfAnchorEvent:(CGFloat)arg1 ;
-(id)fetchPositiveAppEventsAfterAnchorDate:(id)arg0 durationOfAnchorEvent:(CGFloat)arg1 anchor:(id)arg2 ;
-(id)fetchPositiveModeEventsAfterAnchorDate:(id)arg0 durationOfAnchorEvent:(CGFloat)arg1 anchor:(id)arg2 ;
-(id)init;
-(id)initWithActivity:(id)arg0 ;
-(id)initWithXPCActivity:(id)arg0 dataStoreWrapper:(id)arg1 ;
-(id)modeCandidateIdsToTargetForAnchor:(id)arg0 excludeCandidateIdsFromModes:(id)arg1 ;
-(id)queryStartDateForAnchor:(id)arg0 ;
-(id)targetedNegativeActionSamplesForAnchor:(id)arg0 anchorOccurrenceDate:(id)arg1 eventsToExclude:(id)arg2 ;
-(id)targetedNegativeAppSamplesForAnchor:(id)arg0 anchorOccurrenceDate:(id)arg1 eventsToExclude:(id)arg2 ;
-(id)targetedNegativeModeSamplesForAnchor:(id)arg0 anchorOccurrenceDate:(id)arg1 eventsToExclude:(id)arg2 ;
-(void)addAnchorEventToDatabase:(id)arg0 anchor:(id)arg1 ;


@end


#endif