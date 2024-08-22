// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11MEDIACOREUI16MATERIALRENDERER_H
#define _TTC11MEDIACOREUI16MATERIALRENDERER_H

@protocol MTKViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtC11MediaCoreUI16MaterialRenderer : NSObject <MTKViewDelegate>

 {
    ? textureProvider;
    ? context;
    ? contentMode;
    ? resizeTexture;
    ? textureFallbackCopyAllocator;
    ? $__lazy_storage_$_isBlurDisabled;
}




-(id)init;
-(void)drawInMTKView:(id)arg0 ;
-(void)mtkView:(id)arg0 drawableSizeWillChange:(struct CGSize )arg1 ;


@end


#endif