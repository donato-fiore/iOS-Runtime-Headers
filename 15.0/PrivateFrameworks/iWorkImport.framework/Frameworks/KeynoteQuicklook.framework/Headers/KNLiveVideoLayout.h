// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNLIVEVIDEOLAYOUT_H
#define KNLIVEVIDEOLAYOUT_H

@class TSDStyledLayout;


#import "KNLiveVideoInfo.h"

@interface KNLiveVideoLayout : TSDStyledLayout {
    CGRect _cachedAlignmentFrame;
    BOOL _isCachedAlignmentFrameValid;
}


@property (readonly, nonatomic) NSInteger effectiveMaskKind;
@property (readonly, nonatomic) BOOL isVideoMaskPathRectangular;
@property (readonly, nonatomic) KNLiveVideoInfo *liveVideoInfo;
@property (readonly, nonatomic) CGFloat maskCornerRadius;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) BOOL shouldRenderFrameStroke; // ivar: _shouldRenderFrameStroke
@property (readonly, nonatomic) CGRect videoMaskBounds; // ivar: _videoMaskBounds


-(BOOL)isStrokeBeingManipulated;
-(BOOL)supportsRotation;
-(CGFloat)scaleForInlineClampingUnrotatedSize:(struct CGSize )arg0 withTransform:(struct CGAffineTransform )arg1 ;
-(id)computeLayoutGeometry;
-(id)initWithInfo:(id)arg0 ;
-(id)p_makeRoundedRectangleMaskPathSource;
-(id)stroke;
-(id)videoMaskPathForBounds:(struct CGRect )arg0 ;
-(struct CGPoint )p_normalizedOffset;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameInRoot;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )p_computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(struct CGRect )videoBoundsForNaturalSize:(struct CGSize )arg0 ;
-(void)p_invalidateAlignmentFrame;
-(void)processChangedProperty:(int)arg0 ;
-(void)setGeometry:(id)arg0 ;


@end


#endif