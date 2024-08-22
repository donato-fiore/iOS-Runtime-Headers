// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGASSETSWITHREASONPRECISIONRECALLEVALUATION_H
#define PGASSETSWITHREASONPRECISIONRECALLEVALUATION_H

@class NSMutableDictionary;


#import "PGPrecisionRecallEvaluation.h"

@interface PGAssetsWithReasonPrecisionRecallEvaluation : PGPrecisionRecallEvaluation

@property (retain, nonatomic) NSMutableDictionary *evaluationByReason; // ivar: _evaluationByReason


-(id)initWithIdentifier:(id)arg0 category:(id)arg1 ;
-(void)evaluateWithGroundTruthResults:(id)arg0 inferenceResults:(id)arg1 reasonResultByAssetIdentifier:(id)arg2 ;


@end


#endif