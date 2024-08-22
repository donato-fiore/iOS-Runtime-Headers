// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELMODEPREDICTIONPOSTPROCESSOR_H
#define ATXANCHORMODELMODEPREDICTIONPOSTPROCESSOR_H

@class BMUserFocusComputedModeStream, NSArray;

#import <Foundation/Foundation.h>

#import "ATXAnchorModelPrediction.h"

@interface ATXAnchorModelModePredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    BMUserFocusComputedModeStream *_modeStream;
}


@property (retain, nonatomic) NSArray *serializedTriggers; // ivar: _serializedTriggers


-(BOOL)shouldPredictAnchorModelModePrediction;
-(id)_triggerForAnchorType;
-(id)initWithAnchorModelPrediction:(id)arg0 ;


@end


#endif