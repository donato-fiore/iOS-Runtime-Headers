// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCSGDOPTIMIZER_H
#define MLCSGDOPTIMIZER_H

@class NSString;
@protocol MLCOptimizerCompiling, NSCopying;


#import "MLCOptimizer.h"
#import "MLCOptimizerDescriptor.h"

@interface MLCSGDOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float momentumScale; // ivar: _momentumScale
@property (readonly, nonatomic) MLCOptimizerDescriptor *optimizerDescriptor; // ivar: _optimizerDescriptor
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesNesterovMomentum; // ivar: _usesNesterovMomentum


+(id)optimizerWithDescriptor:(id)arg0 ;
+(id)optimizerWithDescriptor:(id)arg0 momentumScale:(float)arg1 usesNesterovMomentum:(BOOL)arg2 ;
-(BOOL)compileForDevice:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMomentumScale:(float)arg0 useNesterovMomentum:(BOOL)arg1 optimizerDescriptor:(id)arg2 ;


@end


#endif