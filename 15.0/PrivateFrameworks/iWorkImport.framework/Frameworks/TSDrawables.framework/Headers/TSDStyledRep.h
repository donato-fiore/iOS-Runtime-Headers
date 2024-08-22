// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSTYLEDREP_H
#define TSDSTYLEDREP_H

@class NSString;
@protocol CALayerDelegate;


#import "TSDRep.h"
#import "TSDReflection.h"
#import "TSDShadow.h"
#import "TSDStyledInfo.h"
#import "TSDStyledLayout.h"

@interface TSDStyledRep : TSDRep <CALayerDelegate>

 {
    ? mFlags;
}


@property (readonly, copy, nonatomic) id *blockToExcludeCaptionsAndDescendantsOfCaptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInvisible;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) TSDReflection *reflection;
@property (readonly, nonatomic) CGRect reflectionFrameInRootForClipping;
@property (readonly, nonatomic) TSDShadow *shadow;
@property (readonly, nonatomic) BOOL shouldShowReflection;
@property (readonly, nonatomic) BOOL shouldShowShadow;
@property (readonly, nonatomic) TSDStyledInfo *styledInfo;
@property (readonly, nonatomic) TSDStyledLayout *styledLayout;
@property (readonly) Class superclass;


-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)textureForDescription:(id)arg0 ;
-(struct CGImage *)newShadowImageWithSize:(struct CGSize )arg0 shadow:(id)arg1 drawSelector:(SEL)arg2 unflipped:(BOOL)arg3 ;
-(struct CGImage *)newShadowImageWithSize:(struct CGSize )arg0 unflipped:(BOOL)arg1 withChildren:(BOOL)arg2 ;
-(struct CGImage *)newTextureMaskImageForViewScale:(CGFloat)arg0 includeFrameMask:(BOOL)arg1 maskRect:(struct CGRect *)arg2 ;
-(struct CGImage *)p_newReflectionImageWithSize:(struct CGSize )arg0 applyOpacity:(BOOL)arg1 viewScale:(CGFloat)arg2 withBlock:(id)arg3 ;
-(struct CGRect )clipRect;
-(struct CGRect )clipRectWithoutEffects;
-(struct CGRect )p_baseReflectionFrameInRootForClipping;
-(struct CGRect )p_clipRectInRootForTransform:(struct CGAffineTransform )arg0 includeShadow:(BOOL)arg1 includeReflection:(BOOL)arg2 ;
-(struct CGRect )p_rectWithEffectsAppliedToRect:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 includeShadow:(BOOL)arg2 includeReflection:(BOOL)arg3 ;
-(struct CGRect )rectWithEffectsAppliedToRect:(struct CGRect )arg0 ;
-(struct CGRect )strokeBoundsWithOptions:(NSUInteger)arg0 fallbackBounds:(struct CGRect )arg1 ;
-(void)calculateTextureClipBounds:(struct CGRect *)arg0 andOffset:(struct CGPoint *)arg1 withTransform:(struct CGAffineTransform *)arg2 andRectOnCanvas:(struct CGRect *)arg3 textureDescription:(id)arg4 isUsingImageTexture:(BOOL)arg5 ;
-(void)dealloc;
-(void)drawGradientWithAlphaOverReflection:(struct CGContext *)arg0 applyingOpacity:(BOOL)arg1 reflectionSize:(struct CGSize )arg2 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffectsOrChildren:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext *)arg0 ;
-(void)drawReflectionInContext:(struct CGContext *)arg0 drawChildren:(BOOL)arg1 ;
-(void)drawReflectionInContext:(struct CGContext *)arg0 withTransparencyLayer:(BOOL)arg1 applyingOpacity:(BOOL)arg2 shouldClipGradient:(BOOL)arg3 withBlock:(id)arg4 ;
-(void)drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg0 withTransparencyLayer:(BOOL)arg1 applyingOpacity:(BOOL)arg2 drawChildren:(BOOL)arg3 ;
-(void)drawShadowInContext:(struct CGContext *)arg0 withChildren:(BOOL)arg1 withDrawableOpacity:(BOOL)arg2 ;
-(void)p_drawReflectionInContext:(struct CGContext *)arg0 ;
-(void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg0 withTransparencyLayer:(BOOL)arg1 applyingOpacity:(BOOL)arg2 shouldClipGradient:(BOOL)arg3 withBlock:(id)arg4 ;
-(void)setTextureAttributes:(id)arg0 textureBounds:(struct CGRect )arg1 ;


@end


#endif