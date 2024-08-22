// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWADAPTIVECORRECTIONPREVIEWREGISTRATION_H
#define BWADAPTIVECORRECTIONPREVIEWREGISTRATION_H

@class FigRegToolboxGPU, FigMetalContext, NSDictionary;

#import <Foundation/Foundation.h>

#import "BWAdaptiveCorrectionPreviewRegistrationTuningParameters.h"
#import "BWPixelBufferPool.h"
#import "BWMemoryPoolFlushAssertion.h"

@interface BWAdaptiveCorrectionPreviewRegistration : NSObject {
    BWAdaptiveCorrectionPreviewRegistrationTuningParameters *_tuningParameters;
    FigRegToolboxGPU *_keypointDetector;
    FigMetalContext *_metalContext;
    *? _keypointList;
    *OpaqueVTPixelRotationSession _cropAndScaleSession;
    NSDictionary *_staticParametersByPortType;
    CalModel _correctedCalibration;
    *CGFloat _validKeypointsInSensorResolution;
    unsigned int _validKeypointsCount;
    *CGFloat _transposedKeypoints;
    *CGFloat _keypointDepths;
    *CGFloat _keypointWeights;
    ? _registrationTransform;
    BWPixelBufferPool *_registrationPool;
    BWMemoryPoolFlushAssertion *_registrationPoolReadyAssertion;
    BOOL _resourcesCleaned;
    *unk _fullCorrectionFunction;
    *unk _computeVerticalBaselineTransformFunction;
    *unk _rotateCalModelFunction;
    *unk _transformPointsWithMatrixFunction;
    *void _disparityLib;
}




+(struct ? )flattenNarrowerToWiderTransforms:(struct ? )arg0 narrowerDimensions:(struct ? )arg1 narrowerFinalCropRect:(struct CGRect )arg2 atNarrowerToWiderCameraScale:(CGFloat)arg3 useYAnchorAtHeightCenter:(BOOL)arg4 ;
+(void)initialize;
-(id)initWithCameraInfoByPortType:(id)arg0 ;
-(int)allocateResourcesWithVideoFormat:(id)arg0 metalContext:(id)arg1 ;
-(int)computeAlignmentFromWiderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 narrowerSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 narrowerToWiderTransformsOut:(struct ? *)arg2 ;
-(int)registerWiderSampleBufferUsingADC:(struct opaqueCMSampleBuffer *)arg0 narrowerSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 narrowerRect:(struct CGRect )arg2 macroTransitionType:(int)arg3 narrowerToWiderTransformsOut:(struct ? *)arg4 ;
-(void)cleanupResources;
-(void)dealloc;


@end


#endif