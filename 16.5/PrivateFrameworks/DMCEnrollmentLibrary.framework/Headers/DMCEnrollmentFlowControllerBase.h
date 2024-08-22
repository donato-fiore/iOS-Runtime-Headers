// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTFLOWCONTROLLERBASE_H
#define DMCENROLLMENTFLOWCONTROLLERBASE_H

@class NSMutableArray, DMCHangDetectionQueue;

#import <Foundation/Foundation.h>


@interface DMCEnrollmentFlowControllerBase : NSObject

@property (nonatomic) NSUInteger currentStep; // ivar: _currentStep
@property (nonatomic) NSUInteger nextStepIndex; // ivar: _nextStepIndex
@property (retain, nonatomic) NSMutableArray *stepQueue; // ivar: _stepQueue
@property (retain, nonatomic) DMCHangDetectionQueue *workerQueue; // ivar: _workerQueue


-(id)init;
-(void)_appendSteps:(id)arg0 ;
-(void)_pollNextStep;
-(void)_resetToInitialSteps;
-(void)_workerQueue_performFlowStep:(NSUInteger)arg0 ;


@end


#endif