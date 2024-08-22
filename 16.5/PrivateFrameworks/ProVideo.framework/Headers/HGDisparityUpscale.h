// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HGDISPARITYUPSCALE_H
#define HGDISPARITYUPSCALE_H

@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>


@interface HGDisparityUpscale : NSObject {
    CGSize _colorSize;
    CGSize _depthSize;
    id<MTLDevice> *_device;
    id<MTLTexture> *_depthTex;
}




-(id)initWithDevice:(id)arg0 disparitySize:(struct CGSize )arg1 colorSize:(struct CGSize )arg2 portraitUtil:(id)arg3 ;
-(id)newTextureArrayFromTexture:(id)arg0 ;
-(id)upscaleDisparity:(id)arg0 inRGBA:(id)arg1 commandBuffer:(id)arg2 ;
-(void)dealloc;


@end


#endif