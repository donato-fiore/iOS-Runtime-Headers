// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPROGRAMEVALUATIONRESULT_H
#define MLPROGRAMEVALUATIONRESULT_H

@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface MLProgramEvaluationResult : NSObject

@property (retain) NSObject<MLBatchProvider> *evaluationMetrics; // ivar: _evaluationMetrics
@property CGFloat loss; // ivar: _loss


-(id)init;


@end


#endif