// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELANCHOREVENTHANDLER_H
#define ATXANCHORMODELANCHOREVENTHANDLER_H

@class NSDate;
@protocol ATXAnchorModelDataStoreWrapperProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXAnchorModelHyperParameters.h"
#import "ATXAnchor.h"
#import "ATXDuetEvent.h"

@interface ATXAnchorModelAnchorEventHandler : NSObject {
    id<ATXAnchorModelDataStoreWrapperProtocol> *_dataStoreWrapper;
    id<ATXPETEventTracker2Protocol> *_tracker;
    NSDate *_baseDate;
    ATXAnchorModelHyperParameters *_hyperParameters;
}


@property (readonly, nonatomic) ATXAnchor *anchor; // ivar: _anchor
@property (readonly, nonatomic) ATXDuetEvent *anchorEvent; // ivar: _anchorEvent


-(BOOL)predictionIsHighConfidence:(id)arg0 ;
-(BOOL)predictionIsMediumConfidence:(id)arg0 ;
-(CGFloat)predictionScoreFromTrainingResult:(id)arg0 ;
-(id)anchorModelPredictionFromTrainingResult:(id)arg0 classificationResult:(id)arg1 ;
-(id)dateIntervalFromTrainingResult:(id)arg0 ;
-(id)initWithAnchor:(id)arg0 anchorEvent:(id)arg1 ;
-(id)initWithAnchor:(id)arg0 anchorEvent:(id)arg1 dataStoreWrapper:(id)arg2 hyperParameters:(id)arg3 tracker:(id)arg4 ;
-(id)predictionForCandidateFromTrainingResult:(id)arg0 ;
-(id)predictionsForAnchorEvent;
-(void)_logPhaseFilteredMetricFromTrainingResults:(id)arg0 anchorModelPredictions:(id)arg1 ;


@end


#endif