// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXWIDGETMODEENTITYMODELWEIGHTS_H
#define ATXWIDGETMODEENTITYMODELWEIGHTS_H

@class NSDictionary, ATXModeEntityTrialClientWrapper;

#import <Foundation/Foundation.h>


@interface ATXWidgetModeEntityModelWeights : NSObject {
    NSDictionary *_widgetModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}




-(CGFloat)classConditionalProbability;
-(CGFloat)globalPopularity;
-(CGFloat)modePopularity;
-(CGFloat)posteriorProbability;
-(CGFloat)weightForWidgetProbability;
-(id)abGroup;
-(id)init;
-(int)numOfDays;


@end


#endif