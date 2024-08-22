// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFRAMEREP_H
#define TSDFRAMEREP_H

@class NSArray, CALayer;

#import <Foundation/Foundation.h>

#import "TSDBitmapImageProvider.h"
#import "TSDFrame.h"

@interface TSDFrameRep : NSObject {
    NSArray *_images;
    NSArray *_masks;
    TSDBitmapImageProvider *_adornment;
    CALayer *_maskLayer;
    BOOL _shouldEnableBlendMode;
    BOOL _missingImageProviders;
}


@property (readonly, nonatomic) TSDFrame *frame; // ivar: _frame


-(BOOL)p_shouldRender;
-(BOOL)p_shouldRenderForRectWithCoverage:(struct CGRect )arg0 ;
-(BOOL)p_shouldRenderForRectWithoutCoverage:(struct CGRect )arg0 ;
-(BOOL)p_willRenderForRect:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithTSDFrame:(id)arg0 ;
-(struct CGImage *)newFrameForMask:(BOOL)arg0 size:(struct CGSize )arg1 forCALayer:(BOOL)arg2 viewScale:(CGFloat)arg3 ;
-(struct CGImage *)p_newRenderedFrameForMask:(BOOL)arg0 size:(struct CGSize )arg1 forCALayer:(BOOL)arg2 viewScale:(CGFloat)arg3 ;
-(void)applyMaskForRectWithCoverage:(struct CGRect )arg0 toContext:(struct CGContext *)arg1 ;
-(void)blendMaskBeforeRenderingImageInContext:(struct CGContext *)arg0 ;
-(void)dealloc;
-(void)frameRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withTotalScale:(CGFloat)arg2 ;
-(void)p_drawFrameIntoRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withImages:(id)arg2 atViewScale:(CGFloat)arg3 isMask:(BOOL)arg4 ;
-(void)p_drawTiles:(id)arg0 inContext:(struct CGContext *)arg1 rect:(struct CGRect )arg2 start:(CGFloat)arg3 end:(CGFloat)arg4 vertical:(BOOL)arg5 ;


@end


#endif