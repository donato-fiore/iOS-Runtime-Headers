// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMIVNRPROCESSOR_H
#define CMIVNRPROCESSOR_H

@class NSDictionary, NSString;
@protocol MetalImageBufferProcessor, MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>

#import "CMIVNRPrepareDescriptor.h"
#import "FigMetalContext.h"
#import "VNRPyramid.h"
#import "VNRShaders.h"
#import "VNRTuning.h"

@interface CMIVNRProcessor : NSObject <MetalImageBufferProcessor>

 {
    id<MTLCommandBuffer> *_metalCommandBuffer;
    CMIVNRPrepareDescriptor *_prepareDescriptor;
    FigMetalContext *_metalContext;
    *OpaqueVTPixelTransferSession _pixelTransferSession;
}


@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: _cameraInfoByPortType
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VNRPyramid *deghostPyramid; // ivar: _deghostPyramid
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger frameIndex; // ivar: _frameIndex
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *inputMetadata; // ivar: _inputMetadata
@property (retain, nonatomic) *__CVBuffer inputPixelBuffer; // ivar: _inputPixelBuffer
@property (retain, nonatomic) VNRPyramid *inputPyramid; // ivar: _inputPyramid
@property (readonly) NSObject<MTLCommandBuffer> *metalCommandBuffer;
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (retain, nonatomic) NSObject<MTLDevice> *metalDevice; // ivar: _metalDevice
@property (retain, nonatomic) VNRShaders *metalShaders; // ivar: _metalShaders
@property (retain, nonatomic) *__CVBuffer outputPixelBuffer; // ivar: _outputPixelBuffer
@property (retain, nonatomic) VNRPyramid *outputPyramid; // ivar: _outputPyramid
@property (retain, nonatomic) NSObject<MTLTexture> *previousChromaTex; // ivar: _previousChromaTex
@property (retain, nonatomic) NSObject<MTLTexture> *previousLumaTex; // ivar: _previousLumaTex
@property (retain, nonatomic) VNRPyramid *previousOutputPyramid; // ivar: _previousOutputPyramid
@property (readonly) Class superclass;
@property (readonly) VNRTuning *tuning; // ivar: _tuning
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: _tuningParameters


-(id)bindTextureToPixelBuffer:(struct __CVBuffer *)arg0 plane:(NSUInteger)arg1 metalPixelFormat:(NSUInteger)arg2 usage:(NSUInteger)arg3 ;
-(id)initWithCommandQueue:(id)arg0 ;
-(int)fillInputPyramid:(id)arg0 previousOutputPyramid:(id)arg1 deghostPyramid:(id)arg2 inputLuma:(id)arg3 inputChroma:(id)arg4 previousOutputLuma:(id)arg5 previousOutputChroma:(id)arg6 ;
-(int)finishProcessing;
-(int)fuseWithInputPyramid:(id)arg0 deghostPyramid:(id)arg1 previousOutputPyramid:(id)arg2 outputPyramid:(id)arg3 inputLuma:(id)arg4 inputChroma:(id)arg5 previousOutputLuma:(id)arg6 previousOutputChroma:(id)arg7 outputLuma:(id)arg8 outputChroma:(id)arg9 frameIdx:(NSUInteger)arg10 ;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prepareToProcess:(unsigned int)arg0 prepareDescriptor:(id)arg1 ;
-(int)prewarm;
-(int)process;
-(int)propagateDeghostingScoresDownPyramid:(id)arg0 ;
-(int)purgeResources;
-(int)resetState;
-(int)setup;
-(void)dealloc;
-(void)waitUntilScheduledWithWorkloadName:(char *)arg0 ;


@end


#endif