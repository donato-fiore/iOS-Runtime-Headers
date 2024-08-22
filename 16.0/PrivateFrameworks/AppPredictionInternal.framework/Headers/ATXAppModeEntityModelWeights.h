// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPMODEENTITYMODELWEIGHTS_H
#define ATXAPPMODEENTITYMODELWEIGHTS_H

@class NSDictionary, ATXModeEntityTrialClientWrapper;

#import <Foundation/Foundation.h>


@interface ATXAppModeEntityModelWeights : NSObject {
    NSDictionary *_appModeEntityModelWeights;
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