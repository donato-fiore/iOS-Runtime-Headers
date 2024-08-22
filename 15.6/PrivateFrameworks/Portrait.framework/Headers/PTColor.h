// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCOLOR_H
#define PTCOLOR_H

@protocol MTLDeviceSPI, MTLLibrary;

#import <Foundation/Foundation.h>


@interface PTColor : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_defaultLibrary;
    id<MTLComputePipelineState>" _convertRGB;
    id<MTLComputePipelineState>"] _convertYUV;
    id<MTLComputePipelineState>"] _convertYUVPyramid;
    id<MTLComputePipelineState>" _convertRGBToYUV;
    id<MTLComputePipelineState>" _convertYUVPyramidFromRGB;
    id<MTLComputePipelineState>" _convertYUVToRGB;
    id<MTLComputePipelineState>" _convertRGBPyramid;
    id<MTLComputePipelineState>" _convertRGBPyramidFromYUV;
}




+(int)getColorMatrix:(id)arg0 ;
+(int)getColorTransferFunction:(id)arg0 linearToEncoded:(BOOL)arg1 ;
+(struct half3x4 )colorMatrixAndBiasTransposedFor:(int)arg0 toRGB:(BOOL)arg1 fullRange:(BOOL)arg2 colorYCbCrDepth:(int)arg3 ;
+(struct half3x4 )float4x4ToTransposed3x4:(struct ? )arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 ;
-(int)convertRGB:(id)arg0 inRGBA:(id)arg1 outRGBA:(id)arg2 colorTransferFunction:(int)arg3 ;
-(int)convertRGB:(id)arg0 inRGBA:(id)arg1 outRGBA:(id)arg2 colorTransferFunction:(int)arg3 rotateCCW:(BOOL)arg4 ;
-(int)convertRGBLinearFromDestination:(id)arg0 renderRequest:(id)arg1 outRGBA:(id)arg2 ;
-(int)convertRGBLinearFromSource:(id)arg0 renderRequest:(id)arg1 outRGBA:(id)arg2 ;
-(int)convertRGBLinearToDestination:(id)arg0 renderRequest:(id)arg1 inRGBA:(id)arg2 ;
-(int)convertRGBPyramid:(id)arg0 inRGBA:(id)arg1 rgbaPyramidArray:(id)arg2 colorTransferFunction:(int)arg3 ;
-(int)convertRGBPyramid:(id)arg0 inRGBA:(id)arg1 rgbaPyramidArray:(id)arg2 colorTransferFunction:(int)arg3 skipLevel0:(BOOL)arg4 ;
-(int)convertRGBPyramidFromSource:(id)arg0 renderRequest:(id)arg1 rgbaPyramidArray:(id)arg2 ;
-(int)convertRGBPyramidFromSource:(id)arg0 renderRequest:(id)arg1 rgbaPyramidArray:(id)arg2 skipLevel0:(BOOL)arg3 ;
-(int)convertRGBPyramidFromYUV:(id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 rgbaPyramidArray:(id)arg3 colorTransferFunction:(int)arg4 colorYCbCrMatrix:(int)arg5 colorYCbCrFullRangeIn:(BOOL)arg6 colorYCbCrDepthIn:(int)arg7 ;
-(int)convertRGBPyramidFromYUV:(id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 rgbaPyramidArray:(id)arg3 colorTransferFunction:(int)arg4 colorYCbCrMatrix:(int)arg5 colorYCbCrFullRangeIn:(BOOL)arg6 colorYCbCrDepthIn:(int)arg7 skipLevel0:(BOOL)arg8 ;
-(int)convertRGBtoYUV:(id)arg0 inRGBA:(id)arg1 outLuma:(id)arg2 outChroma:(id)arg3 colorTransferFunction:(int)arg4 colorYCbCrMatrix:(int)arg5 colorYCbCrFullRange:(BOOL)arg6 colorYCbCrDepthOut:(int)arg7 ;
-(int)convertYUV:(id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 outLuma:(id)arg3 outChroma:(id)arg4 colorTransferFunction:(int)arg5 colorYCbCrMatrix:(int)arg6 colorYCbCrFullRange:(BOOL)arg7 colorYCbCrDepthIn:(int)arg8 colorYCbCrDepthOut:(int)arg9 ;
-(int)convertYUVLinearFromSource:(id)arg0 renderRequest:(id)arg1 outLuma:(id)arg2 outChroma:(id)arg3 ;
-(int)convertYUVLinearToDestination:(id)arg0 renderRequest:(id)arg1 inLuma:(id)arg2 inChroma:(id)arg3 ;
-(int)convertYUVPyramid:(id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 lumaPyramidArray:(id)arg3 chromaPyramidArray:(id)arg4 outDownscaleX2RGBA:(id)arg5 colorTransferFunction:(int)arg6 colorYCbCrMatrix:(int)arg7 colorYCbCrFullRange:(BOOL)arg8 colorYCbCrDepthIn:(int)arg9 colorYCbCrDepthOut:(int)arg10 ;
-(int)convertYUVPyramidFromRGB:(id)arg0 inRGBA:(id)arg1 lumaPyramidArray:(id)arg2 chromaPyramidArray:(id)arg3 outDownscaleX2RGBA:(id)arg4 colorTransferFunction:(int)arg5 colorYCbCrMatrix:(int)arg6 colorYCbCrFullRange:(BOOL)arg7 colorYCbCrDepthOut:(int)arg8 ;
-(int)convertYUVPyramidFromSource:(id)arg0 renderRequest:(id)arg1 lumaPyramidArray:(id)arg2 chromaPyramidArray:(id)arg3 outDownscaleX2RGBA:(id)arg4 ;
-(int)convertYUVtoRGB:(id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 outRGBA:(id)arg3 colorTransferFunction:(int)arg4 colorYCbCrMatrix:(int)arg5 colorYCbCrFullRange:(BOOL)arg6 colorYCbCrDepthIn:(int)arg7 ;


@end


#endif