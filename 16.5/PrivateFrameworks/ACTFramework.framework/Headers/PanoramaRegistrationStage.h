// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PANORAMAREGISTRATIONSTAGE_H
#define PANORAMAREGISTRATIONSTAGE_H

@class FigMetalContext, NSDictionary, NSString;
@protocol MetalImageBufferProcessor, PanoRegistrationProvider, MTLTexture, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PanoramaRegistrationShaders.h"
#import "LKTFlowGPU.h"

@interface PanoramaRegistrationStage : NSObject <MetalImageBufferProcessor, PanoRegistrationProvider>

 {
    FigMetalContext *_metal;
    PanoramaRegistrationShaders *_shaders;
    LKTFlowGPU *_lkt;
    int _direction;
    int _flowUpperMostScale;
    *__CVBuffer _lastSlice;
    float _translationsMagnitude;
    int _slicesProcessed;
}


@property (readonly, nonatomic) NSObject<MTLTexture> *RegistrationMask; // ivar: _RegistrationMask
@property ? _homography;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasRetrogradeMotion; // ivar: _hasRetrogradeMotion
@property (readonly) NSUInteger hash;
@property ? homography; // ivar: _homography
@property BOOL homographyFailure; // ivar: _homographyFailure
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: metalCommandQueue
@property (retain) NSObject<MTLTexture> *registrationWeights; // ivar: _registrationWeights
@property *__CVBuffer residualFlow; // ivar: _residualFlow
@property (readonly, nonatomic) CGRect roi; // ivar: _roi
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tuningParameters;


-(BOOL)_checkForNaNs:(struct ? )arg0 ;
-(BOOL)_isRetrogradeMotion:(struct ? )arg0 tolerance:(float)arg1 ;
-(BOOL)_isTranslationOutlier:(struct ? )arg0 ;
-(BOOL)hasHomographyFailureFlag;
-(id)initWithContext:(id)arg0 ;
-(int)_computeRegistration:(struct __CVBuffer *)arg0 metadata:(id)arg1 initTransform:(struct ? )arg2 ;
-(int)_getICPDecimationFactor;
-(int)_getLKTFlowUpperMostScale;
-(int)prepareRegistrationWithDevice:(id)arg0 library:(id)arg1 commandQueue:(id)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 ;
-(int)resetState;
-(int)setDirection:(int)arg0 ;
-(struct ? )_setRegistrationParams:(id)arg0 initTransform:(struct ? )arg1 ;
-(struct ? )registerNewSlice:(struct opaqueCMSampleBuffer *)arg0 withHFromGyro:(struct ? )arg1 registrationCallback:(id)arg2 ;
-(void)_logTransform:(struct ? )arg0 metadata:(id)arg1 message:(char *)arg2 error:(BOOL)arg3 ;
-(void)_resetRetrogradeMotionFlagToFalse;
-(void)_setRetrogradeMotionFlag;
-(void)dealloc;
-(void)replacePreviousSlice:(struct __CVBuffer *)arg0 ;


@end


#endif