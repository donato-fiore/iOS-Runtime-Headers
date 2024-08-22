// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTSUBJECTRELIGHTING_H
#define PTSUBJECTRELIGHTING_H

@class NSDictionary;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "SRLv2Plist.h"

@interface PTSubjectRelighting : NSObject {
    id<MTLComputePipelineState> *_srlV2GlobalHistogramLivePhotos;
    id<MTLComputePipelineState> *_srlV2FaceHistogramLivePhotos;
    id<MTLComputePipelineState> *_srlV2CalcCoefficientsLivePhotos;
    id<MTLBuffer> *_srlV2GlobalStatsBuffer;
    id<MTLBuffer> *_srlV2FaceStatsBuffer;
    id<MTLBuffer> *_srlV2CoeffsBuffer;
    SRLv2Plist *_srlV2Plist;
    NSDictionary *_plistSRL;
    id<MTLTexture> *_black;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 effectUtil:(id)arg4 util:(id)arg5 prewarmOnly:(BOOL)arg6 ;
-(id)srlV2CoeffsBuffer;
-(int)runSRLForLivePhotosWithInputBuffer:(id)arg0 lumaTexture:(id)arg1 chromaTexture:(id)arg2 skinMaskTexture:(id)arg3 personMaskTexture:(id)arg4 instanceMaskConfidences:(id)arg5 skinToneClassification:(id)arg6 validROI:(struct CGRect )arg7 expBias:(float)arg8 faceExpRatio:(float)arg9 exifOrientation:(int)arg10 ;


@end


#endif