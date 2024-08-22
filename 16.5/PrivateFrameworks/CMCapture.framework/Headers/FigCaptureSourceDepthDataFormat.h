// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESOURCEDEPTHDATAFORMAT_H
#define FIGCAPTURESOURCEDEPTHDATAFORMAT_H



#import "FigCaptureSourceFormat.h"

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;


-(BOOL)RGBIRStereoFusionSupported;
-(BOOL)gainMapSupported;
-(BOOL)isStillImageOnlyDepthData;
-(id)copyWithNewPixelFormat:(unsigned int)arg0 ;
-(id)highResStillImageDimensions;
-(struct ? )depthEngineOutputDimensions;
-(unsigned int)mediaType;


@end


#endif