// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPMODEENTITYMODELWEIGHTS_H
#define ATXAPPMODEENTITYMODELWEIGHTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXAppModeEntityModelWeights : NSObject {
    NSDictionary *_appModeEntityModelWeights;
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
-(id)abGroup;
-(id)init;
-(int)numOfDays;


@end


#endif