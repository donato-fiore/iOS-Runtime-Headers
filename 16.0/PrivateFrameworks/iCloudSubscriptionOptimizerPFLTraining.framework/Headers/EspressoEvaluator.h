// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESPRESSOEVALUATOR_H
#define ESPRESSOEVALUATOR_H

@class NSString, NSURL;
@protocol Evaluator;

#import <Foundation/Foundation.h>


@interface EspressoEvaluator : NSObject <Evaluator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly) Class superclass;


+(void)initialize;
-(float)averageLossEvaluation:(id)arg0 dataWrapper:(id)arg1 batchSize:(int)arg2 ;
-(id)evaluateWithModelURL:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(id)evaluationMetrics:(id)arg0 dataWrapper:(id)arg1 outputName:(id)arg2 ;


@end


#endif