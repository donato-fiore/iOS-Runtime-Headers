// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLLOGREGEVALUATIONPLAN_H
#define PMLLOGREGEVALUATIONPLAN_H

@class NSString;
@protocol PMLPlanProtocol, PMLEvaluationTrackerProtocol;

#import <Foundation/Foundation.h>

#import "PMLModelWeights.h"
#import "PMLSessionDescriptor.h"
#import "PMLTrainingStore.h"

@interface PMLLogRegEvaluationPlan : NSObject <PMLPlanProtocol>

 {
    NSUInteger _sessionsInBatch;
    BOOL _intercept;
    CGFloat _skew;
    BOOL _isMultiLabel;
    NSUInteger _positiveLabel;
    CGFloat _threshold;
    NSUInteger _evaluationLevel;
}


@property (readonly, nonatomic) PMLModelWeights *currentModelWeights; // ivar: _currentModelWeights
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxSessionsLimit; // ivar: _maxSessionsLimit
@property (readonly, nonatomic) NSString *planId; // ivar: _planId
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // ivar: _sessionDescriptor
@property (readonly, nonatomic) PMLTrainingStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PMLEvaluationTrackerProtocol> *tracker; // ivar: _tracker


-(id)init;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithStore:(id)arg0 tracker:(id)arg1 planId:(id)arg2 sessionDescriptor:(id)arg3 maxSessionsLimit:(NSUInteger)arg4 sessionsInBatch:(NSUInteger)arg5 currentModelWeights:(id)arg6 intercept:(BOOL)arg7 skew:(CGFloat)arg8 threshold:(CGFloat)arg9 isMultiLabel:(BOOL)arg10 positiveLabel:(NSUInteger)arg11 evaluationLevel:(NSUInteger)arg12 ;
-(id)normalizeRegressor:(id)arg0 ;
-(id)runWithError:(*id)arg0 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(void)loadSessionsWithBlock:(id)arg0 ;


@end


#endif