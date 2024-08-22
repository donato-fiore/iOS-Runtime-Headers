// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUINAMEDLAYERSTACK_H
#define CUINAMEDLAYERSTACK_H

@class NSArray;


#import "CUINamedLookup.h"
#import "CUIThemeRendition.h"

@interface CUINamedLayerStack : CUINamedLookup {
    CUIThemeRendition *_flattenedImageRendition;
    CUIThemeRendition *_radiosityImageRendition;
}


@property (readonly, nonatomic) *CGImage flattenedImage;
@property (retain, nonatomic) NSArray *layers; // ivar: _layers
@property (readonly, nonatomic) *CGImage radiosityImage;
@property (readonly, nonatomic) CGSize size;


+(struct CGImage *)createRadiosityImageWithImage:(struct CGImage *)arg0 displayScale:(NSInteger)arg1 ;
+(struct vImage_Buffer )_doRadiosityBlurOnPixelBuffer:(*void)arg0 bytesPerRow:(NSUInteger)arg1 bitsPerPixel:(NSUInteger)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 scaleFactor:(NSUInteger)arg5 usesGaussianBlur:(*BOOL)arg6 adjustedSize:(struct CGSize *)arg7 ;
+(void)radiosityImageWithImage:(struct CGImage *)arg0 displayScale:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 resolvingWithBlock:(id)arg3 ;
-(id)layerImageAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif