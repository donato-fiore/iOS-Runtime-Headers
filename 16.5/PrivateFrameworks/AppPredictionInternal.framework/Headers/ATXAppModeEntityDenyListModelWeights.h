// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPMODEENTITYDENYLISTMODELWEIGHTS_H
#define ATXAPPMODEENTITYDENYLISTMODELWEIGHTS_H

@class NSDictionary, ATXModeEntityTrialClientWrapper;

#import <Foundation/Foundation.h>


@interface ATXAppModeEntityDenyListModelWeights : NSObject {
    NSDictionary *_appModeEntityDenyListModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}




-(CGFloat)appCategoryScore;
-(CGFloat)appCategoryScore_v2;
-(CGFloat)bias;
-(CGFloat)classConditionalProbability;
-(CGFloat)entityOccurredGloballyOverLastNDays;
-(CGFloat)globalOccurrences;
-(CGFloat)globalPopularity;
-(CGFloat)modePopularity;
-(CGFloat)posteriorProbability;
-(CGFloat)ratioModeAndGlobalPopularity;
-(id)abGroup;
-(id)init;
-(int)numOfDays;
-(int)scalingFactor;


@end


#endif