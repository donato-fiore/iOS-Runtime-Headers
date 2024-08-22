// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHEROANDCLIPCONSTANTS_H
#define ATXHEROANDCLIPCONSTANTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}




+(id)sharedInstance;
-(CGFloat)appClipsFeedbackHistogramHalfLifeInDays;
-(CGFloat)appClipsHighConfidenceScoreThreshold;
-(CGFloat)appClipsMediumConfidenceScoreThreshold;
-(CGFloat)appClipsOverallEngagementThreshold;
-(CGFloat)appClipsOverallMinRejects;
-(CGFloat)appClipsPerAppClipEngagementThreshold;
-(CGFloat)appClipsPerAppClipEngagementThresholdNoDecay;
-(CGFloat)appClipsPerAppClipMinRejects;
-(CGFloat)appClipsPerAppClipMinRejectsNoDecay;
-(CGFloat)heroAppEngagementThreshold;
-(CGFloat)heroAppMinRefreshInterval;
-(CGFloat)heroAppMinimumRejects;
-(CGFloat)heroAppPredictionExpirationInterval;
-(CGFloat)heroAppTileMaxErrorDistance;
-(CGFloat)heroAppWorstCaseLocationAccuracy;
-(NSInteger)appClipsDecodeErrorCode;
-(NSInteger)appClipsLaunchErrorCode;
-(NSUInteger)appClipSessionLogNegativeSamplesPerDay;
-(NSUInteger)appClipSessionLogPositiveSamplesPerDay;
-(NSUInteger)appClipShadowLogSamplesPerDay;
-(NSUInteger)appShadowLogSamplesPerDay;
-(NSUInteger)heroAppSessionLogNegativeSamplesPerDay;
-(NSUInteger)heroAppSessionLogPositiveSamplesPerDay;
-(id)appClipsErrorDomain;
-(id)appClipsModelVersion;
-(id)appClipsNotificationCategoryIdentifier;
-(id)appClipsNotificationId;
-(id)appClipsNotificationLockscreenIdentifier;
-(id)defaultHeroPOICategory;
-(id)heroAppPredictionsKey;
-(id)init;
-(int)heroAppIndexNotSet;


@end


#endif