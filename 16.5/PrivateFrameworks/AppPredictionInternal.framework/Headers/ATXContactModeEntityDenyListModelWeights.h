// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTACTMODEENTITYDENYLISTMODELWEIGHTS_H
#define ATXCONTACTMODEENTITYDENYLISTMODELWEIGHTS_H

@class NSDictionary, ATXModeEntityTrialClientWrapper;

#import <Foundation/Foundation.h>


@interface ATXContactModeEntityDenyListModelWeights : NSObject {
    NSDictionary *_contactModeEntityDenyListModelWeights;
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
-(CGFloat)ratioModeAndGlobalPopularity;
-(id)abGroup;
-(id)init;
-(int)numOfDays;


@end


#endif