// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTACTMODEENTITYMODELWEIGHTS_H
#define ATXCONTACTMODEENTITYMODELWEIGHTS_H

@class NSDictionary, ATXModeEntityTrialClientWrapper;

#import <Foundation/Foundation.h>


@interface ATXContactModeEntityModelWeights : NSObject {
    NSDictionary *_contactModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}




-(CGFloat)bias;
-(CGFloat)classConditionalProbability;
-(CGFloat)entityOccurredGloballyOverLastNDays;
-(CGFloat)globalPopularity;
-(CGFloat)isFavorite;
-(CGFloat)isVIP;
-(CGFloat)modePopularity;
-(CGFloat)posteriorProbability;
-(id)abGroup;
-(id)init;
-(int)numOfDays;


@end


#endif