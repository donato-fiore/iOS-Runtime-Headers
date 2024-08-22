// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLTRAININGSTOREDSESSIONBATCH_H
#define PMLTRAININGSTOREDSESSIONBATCH_H


#import <Foundation/Foundation.h>

#import "PMLSparseMatrix.h"
#import "PMLModelRegressor.h"

@interface PMLTrainingStoredSessionBatch : NSObject

@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) PMLSparseMatrix *covariates; // ivar: _covariates
@property (readonly, nonatomic) PMLModelRegressor *outcomes; // ivar: _outcomes


-(id)initWithCovariates:(id)arg0 outcomes:(id)arg1 ;
-(id)minibatchStats;
-(id)minibatchStatsForPositiveLabel:(NSUInteger)arg0 ;
-(id)minibatchStatsForPositiveLabels:(id)arg0 ;


@end


#endif