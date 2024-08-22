// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTPYRAMIDRGB_H
#define PTPYRAMIDRGB_H

@class NSArray;
@protocol MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTMTLDropHints.h"

@interface PTPyramidRGB : NSObject {
    id<MTLComputePipelineState> *_downscaleGaussian3x3;
    id<MTLComputePipelineState>" _updateLevel0Gaussian3x3FromRGBA;
    id<MTLComputePipelineState>" _updateLevel0Gaussian3x3FromYUV;
    id<MTLComputePipelineState>" _updateLevel0and1Gaussian3x3FromRGBA;
    id<MTLComputePipelineState>" _updateLevel0and1Gaussian3x3FromYUV;
    id<MTLComputePipelineState>" _updateLevel0Box2x2FromRGBA;
    id<MTLComputePipelineState>" _updateLevel0Box2x2FromYUV;
    BOOL _skipFullSizeLayer;
    BOOL _doFirstLevelGaussianDownsample;
}


@property (nonatomic) BOOL bicubic; // ivar: _bicubic
@property (retain, nonatomic) PTMTLDropHints *dropHints; // ivar: _dropHints
@property (retain, nonatomic) NSObject<MTLTexture> *rgbaPyramid; // ivar: _rgbaPyramid
@property (retain, nonatomic) NSArray *rgbaPyramidArray; // ivar: _rgbaPyramidArray


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 pixelFormat:(NSUInteger)arg4 skipFullSizeLayer:(BOOL)arg5 doFirstLevelGaussianDownsample:(BOOL)arg6 mipmapLevelCount:(int)arg7 ;
-(int)updateLevel0FromPTTextureRGBA:(id)arg0 inPTTextureRGBA:(id)arg1 doFirstLevelGaussianDownsample:(BOOL)arg2 ;
-(int)updateLevel0FromPTTextureYUV:(id)arg0 inPTTextureYUV:(id)arg1 doFirstLevelGaussianDownsample:(BOOL)arg2 ;
-(int)updateLevel0and1FromPTTextureRGBA:(id)arg0 inPTTextureRGBA:(id)arg1 ;
-(int)updateLevel0and1FromPTTextureYUV:(id)arg0 inPTTextureYUV:(id)arg1 ;
-(int)updatePyramid:(id)arg0 offset:(int)arg1 ;
-(int)updatePyramidFromPTTexture:(id)arg0 inPTTexture:(id)arg1 ;


@end


#endif