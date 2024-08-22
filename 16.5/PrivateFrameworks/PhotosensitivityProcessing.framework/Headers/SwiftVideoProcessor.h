// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWIFTVIDEOPROCESSOR_H
#define SWIFTVIDEOPROCESSOR_H


#import <Foundation/Foundation.h>


@interface SwiftVideoProcessor : NSObject {
    ? needsInitialization;
    ? device;
    ? commandQueue;
    ? library;
    ? previousSurfaceTime;
    ? cptPSO_RiskComputePass0;
    ? cptPSO_RiskComputePass1;
    ? cptPSO_RiskComputePass2;
    ? cptPSO_RiskComputePass3;
    ? bufferFrameLumaSum;
    ? bufferData;
    ? bufferCurState;
    ? bufferGammaKernel;
    ? bufferEnergy;
    ? bufferEnergy2;
    ? bufferContrastKernel;
    ? bufferContrast;
    ? bufferResponses;
    ? bufferResponsesNorm;
    ? bufferResults;
    ? bufferDataDebug;
    ? protectionStatus;
    ? sourceTexture;
    ? processedTexture;
    ? bufferConstants;
    ? fps;
    ? nits;
    ? area;
    ? avl;
    ? gain;
    ? energyPoolGammaShape;
    ? energyPoolExponent;
    ? energyPoolGammaScale;
    ? probabilityPoolGammaShape;
    ? probabilityPoolExponent;
    ? cA;
    ? tauAdapt;
    ? tauMitigation;
    ? idxFrameRate;
    ? idxEquivalentSize;
    ? idxEquivalentKernelIndex;
    ? frameDeltas;
    ? framePoolIndex;
    ? validationCallback;
}


@property (nonatomic) BOOL copySourceOnlyDebugging; // ivar: copySourceOnlyDebugging
@property (nonatomic) BOOL debugMode; // ivar: debugMode
@property (nonatomic) BOOL inTestingMode; // ivar: inTestingMode
@property (nonatomic, copy) id *validationCallback;


-(id)init;
-(void)processSurfaceWithSourceSurface:(id)arg0 timestamp:(CGFloat)arg1 destinationSurface:(id)arg2 options:(id)arg3 ;


@end


#endif