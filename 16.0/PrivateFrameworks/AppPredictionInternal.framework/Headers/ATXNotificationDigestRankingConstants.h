// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONDIGESTRANKINGCONSTANTS_H
#define ATXNOTIFICATIONDIGESTRANKINGCONSTANTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXNotificationDigestRankingConstants : NSObject {
    NSDictionary *_parameters;
}


@property (readonly, nonatomic) CGFloat dailyDecayFactor;
@property (readonly, nonatomic) CGFloat giveMarqueeToNonAppearingAppProbability;
@property (readonly, nonatomic) CGFloat logisticCenterXVal;
@property (readonly, nonatomic) CGFloat logisticGrowthRate;
@property (readonly, nonatomic) CGFloat minMarqueeAppearancesPerApp;
@property (readonly, nonatomic) NSUInteger numMarqueeSpots;
@property (readonly, nonatomic) CGFloat weightForBasicNotificationsSent;
@property (readonly, nonatomic) CGFloat weightForMarqueeAppearance;
@property (readonly, nonatomic) CGFloat weightForMarqueeEngagement;
@property (readonly, nonatomic) CGFloat weightForNonMarqueeAppearance;
@property (readonly, nonatomic) CGFloat weightForNonMarqueeEngagement;
@property (readonly, nonatomic) CGFloat weightForTimeSensitiveNotificationsSent;


+(id)sharedInstance;
-(id)init;


@end


#endif