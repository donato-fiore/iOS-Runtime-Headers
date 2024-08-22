// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONMODEENTITYMODELWEIGHTS_H
#define ATXNOTIFICATIONMODEENTITYMODELWEIGHTS_H

@class NSDictionary, ATXModeEntityTrialClientWrapper;

#import <Foundation/Foundation.h>


@interface ATXNotificationModeEntityModelWeights : NSObject {
    NSDictionary *_notificationModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}




-(CGFloat)appCategoryScoreComponent;
-(CGFloat)appClassConditionalProbabilityComponent;
-(CGFloat)appGlobalOccurrencesComponent;
-(CGFloat)appGlobalPopularityComponent;
-(CGFloat)appModePopularityComponent;
-(CGFloat)appPosteriorProbabilityComponent;
-(CGFloat)bias;
-(CGFloat)clearClassConditionalProbabilityComponent;
-(CGFloat)clearGlobalPopularityComponent;
-(CGFloat)clearModePopularityComponent;
-(CGFloat)clearPosteriorProbabilityComponent;
-(CGFloat)contactClassConditionalProbabilityComponent;
-(CGFloat)contactGlobalOccurrencesComponent;
-(CGFloat)contactGlobalPopularityComponent;
-(CGFloat)contactIsFavoriteComponent;
-(CGFloat)contactIsVIPComponent;
-(CGFloat)contactPosteriorProbabilityComponent;
-(CGFloat)dismissClassConditionalProbabilityComponent;
-(CGFloat)dismissGlobalPopularityComponent;
-(CGFloat)dismissModePopularityComponent;
-(CGFloat)dismissPosteriorProbabilityComponent;
-(CGFloat)engagementClassConditionalProbabilityComponent;
-(CGFloat)engagementGlobalPopularityComponent;
-(CGFloat)engagementModePopularityComponent;
-(CGFloat)engagementPosteriorProbabilityComponent;
-(CGFloat)hiddenClassConditionalProbabilityComponent;
-(CGFloat)hiddenGlobalPopularityComponent;
-(CGFloat)hiddenModePopularityComponent;
-(CGFloat)hiddenPosteriorProbabilityComponent;
-(id)abGroup;
-(id)init;
-(int)numOfDays;


@end


#endif