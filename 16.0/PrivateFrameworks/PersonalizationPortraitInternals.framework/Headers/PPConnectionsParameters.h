// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONNECTIONSPARAMETERS_H
#define PPCONNECTIONSPARAMETERS_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(BOOL)shouldUseAllowedApps;
-(BOOL)shouldUseAllowedWebsite;
-(CGFloat)calendarEventLocationExpirySeconds;
-(CGFloat)calendarEventLocationLookaheadTimeSeconds;
-(CGFloat)foundInAppsSourceExpirySeconds;
-(CGFloat)foundInAppsSourceLookBackSeconds;
-(CGFloat)linguisticTriggerExpirySeconds;
-(CGFloat)locationAppLastUseTimeoutSeconds;
-(CGFloat)namedEntitySourceExpirySeconds;
-(CGFloat)namedEntitySourceLookBackSeconds;
-(CGFloat)pasteboardItemExpirySeconds;
-(CGFloat)userActivityCandidateScore;
-(CGFloat)userActivityExpirySeconds;
-(NSInteger)appSwitcherPredictionExpiry;
-(NSInteger)expirySeconds;
-(NSInteger)locationAppPredictionInstallHalflife;
-(NSInteger)locationAppPredictionInstallMaxScore;
-(NSInteger)locationAppPredictionLaunchTimeOfDayFactor;
-(NSInteger)locationAppPredictionOverallLaunchFactor;
-(NSUInteger)quickTypePredictionLimit;
-(NSUInteger)userActivityBatchSize;
-(id)donationAllowedApps;
-(id)donationAllowedWebsites;
-(id)donationBlockedApps;
-(id)donationBlockedWebsites;
-(id)init;
-(id)locationPredictionBlockedApps;


@end


#endif