// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROCONTENTFILTERING_H
#define MIROCONTENTFILTERING_H


#import <Foundation/Foundation.h>


@interface MiroContentFiltering : NSObject



+(CGFloat)addBackMoreAfterDurationInSecondsFast;
+(CGFloat)addBackMoreAfterDurationInSecondsMedium;
+(CGFloat)addBackMoreAfterDurationInSecondsSlow;
+(CGFloat)bRollAdjustForRequiredBRollPercentage;
+(CGFloat)bRollAdjustPercentageDefault;
+(CGFloat)bRollAdjustPercentageFast;
+(CGFloat)bRollAdjustPercentageMedium;
+(CGFloat)bRollAdjustPercentageSlow;
+(CGFloat)postSelectionDupeTestDurationInSeconds;
+(CGFloat)shootingRatioMaxDurationRatioAbove;
+(CGFloat)shootingRatioMaxDurationRatioBelow;
+(CGFloat)shootingRatioMaxOverSuggestedMultiplier;
+(CGFloat)shootingRatioMinBestDuration;
+(CGFloat)shootingRatioSmallSetRatio;
+(CGFloat)sloMoClusterTimeDurationInSeconds;
+(CGFloat)videoTooShortInSeconds;
+(id)liveValueForKey:(id)arg0 ;
+(int)assumedPhotoDuration;
+(int)clusterCountToTrim;
+(int)clusterTooLargeTrim;
+(int)endingGroupingCount;
+(int)maxiumumDurationToSendAll;
+(int)minCountToAllowEndGrouping;
+(int)minimumDurationToFilter;
+(int)minimumScoreAllowed;
+(int)minimumScoreAllowedAsBRoll;


@end


#endif