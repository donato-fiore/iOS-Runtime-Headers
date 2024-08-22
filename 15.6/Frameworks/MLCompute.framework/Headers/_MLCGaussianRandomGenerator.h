// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCGAUSSIANRANDOMGENERATOR_H
#define _MLCGAUSSIANRANDOMGENERATOR_H


#import <Foundation/Foundation.h>


@interface _MLCGaussianRandomGenerator : NSObject

@property (readonly, nonatomic) CGFloat mean; // ivar: _mean
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) NSUInteger seedValue; // ivar: _seedValue
@property (readonly, nonatomic) BOOL seeded; // ivar: _seeded


+(id)zeroMeanGaussianRandomGenerator;
+(id)zeroMeanGaussianRandomGeneratorWithSeed:(NSUInteger)arg0 ;
-(CGFloat)sample;
-(id)initWithMean:(CGFloat)arg0 scale:(CGFloat)arg1 seeded:(BOOL)arg2 seedValue:(NSUInteger)arg3 ;


@end


#endif