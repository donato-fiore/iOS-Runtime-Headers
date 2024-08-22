// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXGUARDEDACTIONPREDICTIONCONTAINERDATA_H
#define ATXGUARDEDACTIONPREDICTIONCONTAINERDATA_H

@class ATXScoredPrediction, ATXSlotSet;

#import <Foundation/Foundation.h>


@interface ATXGuardedActionPredictionContainerData : NSObject {
    ATXScoredPrediction *_scoredAction;
    ATXSlotSet *_slotSet;
    float _score;
}




-(id)initWithScoredAction:(id)arg0 slotSet:(id)arg1 score:(float)arg2 ;


@end


#endif