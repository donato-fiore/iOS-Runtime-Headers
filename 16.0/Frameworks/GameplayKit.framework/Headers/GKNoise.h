// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKNOISE_H
#define GKNOISE_H

@class NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface GKNoise : NSObject {
    NSMutableArray *_modules;
}


@property (copy, nonatomic) NSDictionary *gradientColors; // ivar: _gradientColors


+(id)noiseWithComponentNoises:(id)arg0 selectionNoise:(id)arg1 ;
+(id)noiseWithComponentNoises:(id)arg0 selectionNoise:(id)arg1 componentBoundaries:(id)arg2 boundaryBlendDistances:(id)arg3 ;
+(id)noiseWithNoiseSource:(id)arg0 ;
+(id)noiseWithNoiseSource:(id)arg0 gradientColors:(id)arg1 ;
-(float)valueAtPosition;
-(id)__modules;
-(id)cloneRecursive:(id)arg0 ;
-(id)init;
-(id)initWithNoiseSource:(id)arg0 ;
-(id)initWithNoiseSource:(id)arg0 gradientColors:(id)arg1 ;
-(void)__blendWithNoise:(id)arg0 selectionNoise:(id)arg1 selectionRangeLowerBound:(CGFloat)arg2 selectionRangeUpperBound:(CGFloat)arg3 selectionBoundaryBlendDistance:(CGFloat)arg4 ;
-(void)addWithNoise:(id)arg0 ;
-(void)applyAbsoluteValue;
-(void)applyTurbulenceWithFrequency:(CGFloat)arg0 power:(CGFloat)arg1 roughness:(int)arg2 seed:(int)arg3 ;
-(void)cacheBinaryModule:(id)arg0 rhsNoise:(id)arg1 ;
-(void)cacheQuaternaryModule:(id)arg0 xDisplacementNoise:(id)arg1 yDisplacementNoise:(id)arg2 zDisplacementNoise:(id)arg3 ;
-(void)cacheTernaryModule:(id)arg0 rhsNoise:(id)arg1 selectionNoise:(id)arg2 ;
-(void)cacheUnaryModule:(id)arg0 ;
-(void)clampWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
-(void)dealloc;
-(void)displaceXWithNoise:(id)arg0 yWithNoise:(id)arg1 zWithNoise:(id)arg2 ;
-(void)invert;
-(void)maximumWithNoise:(id)arg0 ;
-(void)minimumWithNoise:(id)arg0 ;
-(void)moveBy;
-(void)multiplyWithNoise:(id)arg0 ;
-(void)raiseToPower:(CGFloat)arg0 ;
-(void)raiseToPowerWithNoise:(id)arg0 ;
-(void)remapValuesToCurveWithControlPoints:(id)arg0 ;
-(void)remapValuesToTerracesWithPeaks:(id)arg0 terracesInverted:(BOOL)arg1 ;
-(void)rotateBy;
-(void)scaleBy;


@end


#endif