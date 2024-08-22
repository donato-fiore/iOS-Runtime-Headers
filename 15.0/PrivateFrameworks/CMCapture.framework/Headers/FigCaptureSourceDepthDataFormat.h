// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESOURCEDEPTHDATAFORMAT_H
#define FIGCAPTURESOURCEDEPTHDATAFORMAT_H

@class NSArray;


#import "FigCaptureSourceFormat.h"

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) BOOL RGBIRStereoFusionSupported;
@property (readonly) ? dimensions;
@property (readonly) float fieldOfView;
@property (readonly) ? highResStillImageDimensions;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor;
@property (readonly, getter=isStillImageOnlyDepthData) BOOL stillImageOnlyDepthData;
@property (readonly) NSArray *supportedSemanticSegmentationMatteURNs;


-(id)copyWithNewPixelFormat:(unsigned int)arg0 ;
-(struct ? )depthEngineOutputDimensions;
-(struct opaqueCMFormatDescription *)formatDescription;
-(unsigned int)mediaType;


@end


#endif