// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLDIFFPRIVACYNOISESTRATEGY_H
#define PMLDIFFPRIVACYNOISESTRATEGY_H

@class NSString;
@protocol PMLNoiseStrategy;

#import <Foundation/Foundation.h>


@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy>

 {
    NSUInteger _seed;
    BOOL _inplaceNorm;
    int _maxIterations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float minimumMagnitude; // ivar: _minimumMagnitude
@property (nonatomic) NSInteger noiseMechanism; // ivar: _noiseMechanism
@property (nonatomic) ? noiseScaleFactors; // ivar: _noiseScaleFactors
@property (readonly) Class superclass;


+(id)gaussianNoiseWithScaleFactor:(float)arg0 minimumMagnitude:(float)arg1 seed:(int)arg2 ;
-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg0 usingNorm:(BOOL)arg1 scaleFactor:(*float)arg2 ;
-(id)createDefaultSampler;
-(id)createSamplerByName:(id)arg0 ;
-(id)initWithMaxIterationCount:(int)arg0 noiseScaleFactors:(struct ? )arg1 minimumMagnitude:(float)arg2 noiseMechanism:(NSInteger)arg3 inplaceNorm:(BOOL)arg4 ;
-(id)initWithMaxIterationCount:(int)arg0 noiseScaleFactors:(struct ? )arg1 minimumMagnitude:(float)arg2 seed:(int)arg3 noiseMechanism:(NSInteger)arg4 inplaceNorm:(BOOL)arg5 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(struct _PMLPreNoiseScaleFactorAndNoiseSampler )samplerWithScaleFactorFor:(id)arg0 usingNorm:(BOOL)arg1 ;
-(void)addNoiseToSparseMatrix:(id)arg0 ;
-(void)addNoiseToSparseVector:(id)arg0 ;


@end


#endif