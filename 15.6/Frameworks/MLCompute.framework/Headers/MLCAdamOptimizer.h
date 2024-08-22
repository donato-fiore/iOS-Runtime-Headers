// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCADAMOPTIMIZER_H
#define MLCADAMOPTIMIZER_H

@class NSString;
@protocol MLCOptimizerCompiling, NSCopying;


#import "MLCOptimizer.h"
#import "MLCOptimizerDescriptor.h"

@interface MLCAdamOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying>



@property (readonly, nonatomic) float beta1; // ivar: _beta1
@property (readonly, nonatomic) float beta2; // ivar: _beta2
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MLCOptimizerDescriptor *optimizerDescriptor; // ivar: _optimizerDescriptor
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timeStep; // ivar: _timeStep
@property (readonly, nonatomic) BOOL usesAMSGrad; // ivar: _usesAMSGrad


+(id)optimizerWithDescriptor:(id)arg0 ;
+(id)optimizerWithDescriptor:(id)arg0 beta1:(float)arg1 beta2:(float)arg2 epsilon:(float)arg3 timeStep:(NSUInteger)arg4 ;
+(id)optimizerWithDescriptor:(id)arg0 beta1:(float)arg1 beta2:(float)arg2 epsilon:(float)arg3 usesAMSGrad:(BOOL)arg4 timeStep:(NSUInteger)arg5 ;
-(BOOL)compileForDevice:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDescriptor:(id)arg0 beta1:(float)arg1 beta2:(float)arg2 epsilon:(float)arg3 usesAMSGrad:(BOOL)arg4 timeStep:(NSUInteger)arg5 ;


@end


#endif