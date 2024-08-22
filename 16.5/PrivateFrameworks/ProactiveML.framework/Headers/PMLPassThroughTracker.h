// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLPASSTHROUGHTRACKER_H
#define PMLPASSTHROUGHTRACKER_H

@class NSString, NSMutableArray, NSLock;
@protocol PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol;

#import <Foundation/Foundation.h>


@interface PMLPassThroughTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol>

 {
    NSString *_planId;
    NSUInteger _quantizationNumberOfBuckets;
    NSMutableArray *_results;
    NSLock *_resultsLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPlanId:(id)arg0 numberOfBuckets:(NSUInteger)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)trackEvaluationMetrics:(id)arg0 minibatchStats:(id)arg1 ;
-(id)trackGradient:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 serverIteration:(NSUInteger)arg4 ;
-(id)trackWeights:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 ;


@end


#endif