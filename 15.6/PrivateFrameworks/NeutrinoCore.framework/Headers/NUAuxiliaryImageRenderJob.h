// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUAUXILIARYIMAGERENDERJOB_H
#define NUAUXILIARYIMAGERENDERJOB_H

@class CIRenderTask;
@protocol NUAuxiliaryImage;


#import "NURenderJob.h"
#import "NUCVPixelBuffer.h"

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_cvBuffer;
}


@property (retain) NSObject<NUAuxiliaryImage> *auxiliaryImage; // ivar: _auxiliaryImage
@property NSInteger auxiliaryImageType; // ivar: _auxiliaryImageType


-(BOOL)complete:(*id)arg0 ;
-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id)newRenderPipelineStateForEvaluationMode:(NSInteger)arg0 ;
-(id)result;
-(id)scalePolicy;
-(void)cleanUp;


@end


#endif