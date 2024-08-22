// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNLIVEVIDEOREP_H
#define KNLIVEVIDEOREP_H

@class TSDStyledRep, TSDFrameRep;


#import "_TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper.h"
#import "KNLiveVideoInfo.h"
#import "KNLiveVideoLayout.h"

@interface KNLiveVideoRep : TSDStyledRep {
    TSDFrameRep *_frameRep;
    _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper *_symbolDrawingHelper;
}


@property (readonly, nonatomic) KNLiveVideoInfo *liveVideoInfo;
@property (readonly, nonatomic) KNLiveVideoLayout *liveVideoLayout;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
+(id)p_sourceSymbolDrawingHelperForSource:(id)arg0 reusingSourceSymbolDrawingHelperIfPossible:(id)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)p_hasBackgroundFill;
-(BOOL)p_shouldRenderFrameStroke;
-(BOOL)p_shouldRenderStroke:(id)arg0 ;
-(BOOL)p_shouldUseImageTexture;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)newVideoBackgroundFillTextureWithClipBounds:(struct CGRect )arg0 offset:(struct CGPoint )arg1 transform:(struct CGAffineTransform )arg2 contentRect:(struct CGRect )arg3 ;
-(id)p_effectiveColorSet;
-(id)p_posterImageProvider;
-(id)textureForDescription:(id)arg0 ;
-(struct CGImage *)newTextureMaskImageForViewScale:(CGFloat)arg0 includeFrameMask:(BOOL)arg1 maskRect:(struct CGRect *)arg2 ;
-(struct CGRect )p_antialiasingDefeatedRectForRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(struct CGRect )p_antialiasingDefeatedVideoMaskBoundsInContext:(struct CGContext *)arg0 ;
-(void)calculateTextureClipBounds:(struct CGRect *)arg0 andOffset:(struct CGPoint *)arg1 withTransform:(struct CGAffineTransform *)arg2 andRectOnCanvas:(struct CGRect *)arg3 textureDescription:(id)arg4 isUsingImageTexture:(BOOL)arg5 ;
-(void)dealloc;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)p_drawBackgroundFillRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 opacity:(CGFloat)arg3 withMask:(BOOL)arg4 forShadowOrHitTest:(BOOL)arg5 ;
-(void)p_drawOffStateRepresentationInContext:(struct CGContext *)arg0 forShadowOrHitTest:(BOOL)arg1 ;
-(void)p_drawPosterImageWithProvider:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)p_drawShadowOrHitTestImageInContext:(struct CGContext *)arg0 ;
-(void)p_drawSymbolInContext:(struct CGContext *)arg0 ;
-(void)p_updateFrameRep;
-(void)willBeRemoved;


@end


#endif