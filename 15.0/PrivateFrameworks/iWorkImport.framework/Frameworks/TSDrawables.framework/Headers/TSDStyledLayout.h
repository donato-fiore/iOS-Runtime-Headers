// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSTYLEDLAYOUT_H
#define TSDSTYLEDLAYOUT_H



#import "TSDDrawableLayout.h"

@interface TSDStyledLayout : TSDDrawableLayout {
    BOOL mIsUpdatingOpacity;
    CGFloat mDynamicOpacity;
}


@property (readonly, nonatomic) CGRect fullReflectionFrame;
@property (readonly, nonatomic) CGFloat opacity;
@property (nonatomic) BOOL suppressesShadowsAndReflections; // ivar: _suppressesShadowsAndReflections


-(BOOL)isInvisible;
-(CGFloat)scaleToApplyToPathSourceNaturalSizeApplyingLayoutTransform:(struct CGAffineTransform )arg0 withStartingPathSource:(id)arg1 ;
-(id)styledInfo;
-(struct CGRect )aliasedAlignmentFrameForScale:(CGFloat)arg0 ;
-(struct CGRect )alignmentFrameInRoot;
-(struct CGRect )baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )frameForCullingWithBaseFrame:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )fullReflectionBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )i_baseFrame;
-(struct CGRect )reflectionBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )reflectionFrame;
-(struct CGRect )reflectionFrameForSubRect:(struct CGRect )arg0 ;
-(struct CGRect )shadowedNaturalBoundsWithoutOffset;


@end


#endif