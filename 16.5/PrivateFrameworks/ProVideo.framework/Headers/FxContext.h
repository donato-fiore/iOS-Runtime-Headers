// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXCONTEXT_H
#define FXCONTEXT_H


#import <Foundation/Foundation.h>


@interface FxContext : NSObject {
    *FxContextPriv _priv;
}




+(id)contextForCGImageWithOptions:(id)arg0 ;
+(id)contextForCIImageWithOptions:(id)arg0 ;
+(id)contextForGLTextureWithOptions:(id)arg0 ;
+(id)contextWithCGContext:(struct CGContext *)arg0 options:(id)arg1 ;
+(id)contextWithFxBitmapImage:(id)arg0 options:(id)arg1 ;
-(BOOL)glTextureIsFlipped;
-(NSUInteger)glTexture;
-(id)bitmap;
-(id)ciImage;
-(id)derivedCIContext;
-(id)initForCGImageWithOptions:(id)arg0 ;
-(id)initForCIImageWithOptions:(id)arg0 ;
-(id)initForGLTextureWithOptions:(id)arg0 ;
-(id)initWithCGContext:(struct CGContext *)arg0 options:(id)arg1 ;
-(id)initWithFxBitmapImage:(id)arg0 options:(id)arg1 ;
-(id)options;
-(int)contextType;
-(struct CGColorSpace *)glTextureColorSpace;
-(struct CGContext *)cgContext;
-(struct CGImage *)cgImage;
-(struct CGSize )glTextureSize;
-(void)dealloc;
-(void)drawFxSample:(id)arg0 withRegionOfInterest:(id)arg1 ;
-(void)setCGImage:(struct CGImage *)arg0 ;
-(void)setCIImage:(id)arg0 ;
-(void)setGLTexture:(NSUInteger)arg0 size:(struct CGSize )arg1 flipped:(BOOL)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(void)setOptions:(id)arg0 ;


@end


#endif