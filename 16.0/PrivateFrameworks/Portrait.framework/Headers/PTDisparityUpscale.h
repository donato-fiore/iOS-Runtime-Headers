// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTDISPARITYUPSCALE_H
#define PTDISPARITYUPSCALE_H

@class MPSImageSpatioTemporalGuidedFilter, NSArray, NSMutableArray;
@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTUtil.h"
#import "PTMTLDropHints.h"

@interface PTDisparityUpscale : NSObject {
    id<MTLDevice> *_device;
    float _upscaleFactor;
    id<MTLTexture> *_disparityUpscaled;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
    NSUInteger _width;
    NSUInteger _height;
    PTUtil *_portraitUtil;
    id<MTLTexture> *_guideConversionTexture;
    NSArray *_coefficientsTextureArray;
    NSMutableArray *_dropHintsTextures;
    PTMTLDropHints *_textureDropHints;
    BOOL _isShaderHarvesting;
}




-(NSUInteger)height;
-(NSUInteger)width;
-(id)guidedUpsampling:(id)arg0 inDisparity:(id)arg1 inRGBA:(id)arg2 colorDepth:(NSInteger)arg3 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 disparitySize:(struct CGSize )arg4 config:(id)arg5 ;
-(id)upscaledTexture;


@end


#endif