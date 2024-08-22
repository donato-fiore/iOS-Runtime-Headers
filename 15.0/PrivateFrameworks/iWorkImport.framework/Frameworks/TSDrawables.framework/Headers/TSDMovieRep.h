// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMOVIEREP_H
#define TSDMOVIEREP_H



#import "TSDMediaRep.h"
#import "TSDMovieInfo.h"

@interface TSDMovieRep : TSDMediaRep

@property (nonatomic) *CGImage alternatePosterImage; // ivar: _alternatePosterImage
@property (readonly, nonatomic) TSDMovieInfo *movieInfo;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
-(BOOL)p_shouldUseImageTexture;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)movieLayout;
-(id)textureForDescription:(id)arg0 ;
-(struct CGImage *)newTextureMaskImageForViewScale:(CGFloat)arg0 includeFrameMask:(BOOL)arg1 maskRect:(struct CGRect *)arg2 ;
-(void)calculateTextureClipBounds:(struct CGRect *)arg0 andOffset:(struct CGPoint *)arg1 withTransform:(struct CGAffineTransform *)arg2 andRectOnCanvas:(struct CGRect *)arg3 textureDescription:(id)arg4 isUsingImageTexture:(BOOL)arg5 ;
-(void)dealloc;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(CGFloat)arg3 withMask:(BOOL)arg4 forShadowOrHitTest:(BOOL)arg5 ;
-(void)p_drawPosterImageInContext:(struct CGContext *)arg0 forShadowOrHitTest:(BOOL)arg1 ;
-(void)updateFrameRep;
-(void)updateFromLayout;
-(void)willBeRemoved;


@end


#endif