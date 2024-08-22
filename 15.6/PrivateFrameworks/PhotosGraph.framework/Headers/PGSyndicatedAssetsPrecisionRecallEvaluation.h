// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSYNDICATEDASSETSPRECISIONRECALLEVALUATION_H
#define PGSYNDICATEDASSETSPRECISIONRECALLEVALUATION_H

@class NSMutableDictionary;


#import "PGPrecisionRecallEvaluation.h"

@interface PGSyndicatedAssetsPrecisionRecallEvaluation : PGPrecisionRecallEvaluation

@property (retain, nonatomic) NSMutableDictionary *evaluationByReason; // ivar: _evaluationByReason


-(id)initWithIdentifier:(id)arg0 category:(id)arg1 ;
-(void)evaluateWithGroundTruthResults:(id)arg0 inferenceResults:(id)arg1 reasonResultByAssetSyndicationIdentifier:(id)arg2 ;


@end


#endif