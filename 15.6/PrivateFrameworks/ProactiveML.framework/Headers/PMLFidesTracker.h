// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLFIDESTRACKER_H
#define PMLFIDESTRACKER_H

@class NSString;
@protocol PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol;

#import <Foundation/Foundation.h>


@interface PMLFidesTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>

 {
    NSString *_planId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPlanId:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)trackEvaluationMetrics:(id)arg0 minibatchStats:(id)arg1 ;
-(id)trackGradient:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 serverIteration:(NSUInteger)arg4 ;
-(id)trackPrecisionAtK:(id)arg0 ;
-(id)trackPrecisionAtK:(id)arg0 minibatchStats:(id)arg1 ;
-(id)trackWeights:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 ;


@end


#endif