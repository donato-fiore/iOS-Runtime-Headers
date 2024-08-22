// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLLOGISTICREGRESSIONMODEL_H
#define PMLLOGISTICREGRESSIONMODEL_H

@class NSString;
@protocol PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol;

#import <Foundation/Foundation.h>

#import "PMLGradientSolver.h"

@interface PMLLogisticRegressionModel : NSObject <PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol>

 {
    PMLGradientSolver *_solver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)solverWithWeights:(id)arg0 ;
+(id)solverWithWeights:(id)arg0 andIntercept:(BOOL)arg1 ;
+(id)solverWithWeights:(id)arg0 andIntercept:(BOOL)arg1 learningRate:(float)arg2 minIterations:(NSUInteger)arg3 stoppingThreshold:(float)arg4 ;
+(id)solverWithWeights:(id)arg0 andIntercept:(BOOL)arg1 learningRate:(float)arg2 minIterations:(NSUInteger)arg3 stoppingThreshold:(float)arg4 l2RegularizationRate:(float)arg5 ;
+(id)solverWithWeights:(id)arg0 andIntercept:(BOOL)arg1 learningRate:(float)arg2 minIterations:(NSUInteger)arg3 stoppingThreshold:(float)arg4 regularizationStrategy:(NSUInteger)arg5 regularizationRate:(float)arg6 l1Ratio:(float)arg7 ;
+(id)withWeights:(id)arg0 ;
+(id)withWeights:(id)arg0 andIntercept:(BOOL)arg1 ;
-(NSUInteger)outputDimension;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithSolver:(id)arg0 ;
-(id)predict:(id)arg0 ;
-(id)serialize;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)weights;


@end


#endif