// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCOLOR_H
#define PTCOLOR_H

@protocol MTLDeviceSPI;

#import <Foundation/Foundation.h>


@interface PTColor : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLComputePipelineState>" _convertRGB;
    id<MTLComputePipelineState>" _convertRGBToYUV;
    id<MTLComputePipelineState>" _convertYUVToRGB;
}




+(id)getChromaOffsetFromPTTexture;
+(int)getColorMatrix:(id)arg0 ;
+(int)getColorTransferFunction:(id)arg0 linearToEncoded:(BOOL)arg1 ;
+(struct bool2 )getChromaFactor2BooleanFromPTTexture:(id)arg0 ;
+(struct half3x4 )colorMatrixAndBiasFor:(int)arg0 toRGB:(BOOL)arg1 fullRange:(BOOL)arg2 colorYCbCrDepth:(int)arg3 ;
+(struct half3x4 )float4x4ToHalf3x4:(struct ? )arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 ;
-(int)convertRGB:(id)arg0 inRGBA:(id)arg1 outRGBA:(id)arg2 colorTransferFunction:(int)arg3 ;
-(int)convertRGB:(id)arg0 inRGBA:(id)arg1 outRGBA:(id)arg2 colorTransferFunction:(int)arg3 rotateCCW:(BOOL)arg4 ;
-(int)convertRGBLinearFromPTTexture:(id)arg0 inPTTexture:(id)arg1 outRGBA:(id)arg2 ;
-(int)convertRGBLinearToPTTexture:(id)arg0 inRGBA:(id)arg1 outPTTexture:(id)arg2 ;
-(int)convertRGBtoYUV:(id)arg0 inRGBA:(id)arg1 outLuma:(id)arg2 outChroma:(id)arg3 colorTransferFunction:(int)arg4 colorYCbCrMatrix:(int)arg5 colorYCbCrFullRange:(BOOL)arg6 colorYCbCrDepthOut:(int)arg7 ;
-(int)convertYUVtoRGB:(id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 outRGBA:(id)arg3 colorTransferFunction:(int)arg4 colorYCbCrMatrix:(int)arg5 colorYCbCrFullRange:(BOOL)arg6 colorYCbCrDepthIn:(int)arg7 ;


@end


#endif