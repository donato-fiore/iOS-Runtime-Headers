// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REFEATURE_H
#define REFEATURE_H

@class NSString;
@protocol REFeatureProperties, NSCopying;

#import <Foundation/Foundation.h>


@interface REFeature : NSObject <REFeatureProperties, NSCopying>



@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *name;


+(id)activeEnergyCompletionFeature;
+(id)activeWorkoutFeature;
+(id)activitySummaryFeature;
+(id)appUsageFeature;
+(id)bluetoothDeviceFeature;
+(id)bulletinFeature;
+(id)companionAppUsageFeature;
+(id)conditionalFeature;
+(id)coreBehaviorAppIdentifierHashFeature;
+(id)coreBehaviorDayCoarsePredictionFeature;
+(id)coreBehaviorDayPredictionFeature;
+(id)coreBehaviorEventIdentifierHashFeature;
+(id)coreBehaviorLocationCoarsePredictionFeature;
+(id)coreBehaviorLocationPredictionFeature;
+(id)coreBehaviorShortcutTypeFeature;
+(id)coreBehaviorTimeCoarsePredictionFeature;
+(id)coreBehaviorTimePredictionFeature;
+(id)crossedFeatureWithFeatures:(id)arg0 ;
+(id)currentTimeFeature;
+(id)currentlyPlayingFromAppFeature;
+(id)currentlyPlayingMediaDonationFeature;
+(id)dailyAverageWorkoutCountFeature;
+(id)dailyRoutineFeature;
+(id)dataSourceFeature;
+(id)dateFeature;
+(id)dateOccursTodayFeature;
+(id)dayOfWeekFeature;
+(id)deviceMotionFeature;
+(id)exerciseTimeCompletionFeature;
+(id)featureWithName:(id)arg0 featureType:(NSUInteger)arg1 ;
+(id)featuresFromSource:(id)arg0 ;
+(id)featuresFromSource:(id)arg0 withNames:(id)arg1 ;
+(id)featuresFromSourceAtPath:(id)arg0 ;
+(id)featuresFromSourceAtPath:(id)arg0 withNames:(id)arg1 ;
+(id)forcedFeature;
+(id)geofenceFeature;
+(id)groupFeature;
+(id)interactionFeature;
+(id)isConnectedToBluetoothSpeakerFeature;
+(id)isConnectedToCarFeature;
+(id)isDeveloperDonationFeature;
+(id)isInDailyRoutineFeature;
+(id)isSiriActionFeature;
+(id)isStationaryFeature;
+(id)isWeekendFeature;
+(id)itemIdentifierFeature;
+(id)knownLocationOfInterestFeature;
+(id)locationFeature;
+(id)locationOfInterestFeature;
+(id)motionFeature;
+(id)negativeSentimentAnalysisFeature;
+(id)noContentFeature;
+(id)nowPlayingStateFeature;
+(id)performedWorkoutCountFeature;
+(id)portraitFeature;
+(id)priorityFeature;
+(id)recentSiriActionFeature;
+(id)relevanceThresholdFeature;
+(id)sectionFeature;
+(id)sentimentAnalysisCertaintyFeature;
+(id)sentimentAnalysisFeature;
+(id)sessionFeature;
+(id)siriActionDailyAveragePerformedCountFeature;
+(id)siriActionHasRelevanceProvidersFeature;
+(id)siriActionPerformedCountFeature;
+(id)siriActionRoleFeature;
+(id)siriDomainFeature;
+(id)standHourCompletionFeature;
+(id)systemFeatureNames;
+(id)transformedFeatureWithTransformer:(id)arg0 features:(id)arg1 ;
+(id)travelingFeature;
+(id)workoutStateFeature;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_rootFeatures;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureByUsingTransformer:(id)arg0 ;
-(void)_replaceDependentFeature:(id)arg0 withFeature:(id)arg1 ;


@end


#endif