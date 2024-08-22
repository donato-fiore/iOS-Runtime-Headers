// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOPOVERVIEWARTWORKLOADER_H
#define _UIPOPOVERVIEWARTWORKLOADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIPopoverViewArtworkLoader : NSObject {
    NSInteger _backgroundStyle;
    NSString *_backgroundSelector;
}




+(id)backgroundSelectorForBackgroundStyle:(NSInteger)arg0 ;
-(BOOL)modern;
-(CGFloat)arrowBase;
-(CGFloat)arrowHeight;
-(CGFloat)arrowTopGradientEnd;
-(CGFloat)bottomEndCapHeight;
-(CGFloat)capCornerRadius;
-(CGFloat)clampArrowBase;
-(CGFloat)noArrowTopGradientEnd;
-(CGFloat)shortArtArrowTopGradientEnd;
-(CGFloat)shortArtNoArrowTopGradientEnd;
-(CGFloat)shortArtRightArrowBase;
-(CGFloat)sideArrowStart;
-(CGFloat)topArrowStart;
-(id)_bottomArrowLeftEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_bottomArrowPinnedViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_bottomArrowRightEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_bottomArrowViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_rightArrowBottomEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_rightArrowPinnedBottomViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_rightArrowPinnedTopViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_rightArrowTopEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_rightArrowViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortBottomArrowLeftEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortBottomArrowPinnedViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortBottomArrowRightEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortBottomArrowViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortRightArrowViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortTopArrowLeftEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortTopArrowPinnedViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortTopArrowRightEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_shortTopArrowViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_templateImageForDirection:(id)arg0 shortArtwork:(BOOL)arg1 traitCollection:(id)arg2 rimShadow:(BOOL)arg3 ;
-(id)_topArrowLeftEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_topArrowPinnedViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_topArrowRightEndCapViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)_topArrowViewForTraitCollection:(id)arg0 withRimShadow:(BOOL)arg1 ;
-(id)bottomArrowLeftEndCapView;
-(id)bottomArrowPinnedView;
-(id)bottomArrowRightEndCapView;
-(id)bottomArrowView;
-(id)initWithBackgroundStyle:(NSInteger)arg0 ;
-(id)rightArrowBottomEndCapView;
-(id)rightArrowPinnedBottomView;
-(id)rightArrowPinnedTopView;
-(id)rightArrowTopEndCapView;
-(id)rightArrowView;
-(id)shortBottomArrowLeftEndCapView;
-(id)shortBottomArrowPinnedView;
-(id)shortBottomArrowRightEndCapView;
-(id)shortBottomArrowView;
-(id)shortRightArrowView;
-(id)shortTopArrowLeftEndCapView;
-(id)shortTopArrowPinnedView;
-(id)shortTopArrowRightEndCapView;
-(id)shortTopArrowView;
-(id)templateImageForDirection:(id)arg0 shortArtwork:(BOOL)arg1 traitCollection:(id)arg2 ;
-(id)topArrowLeftEndCapView;
-(id)topArrowPinnedView;
-(id)topArrowRightEndCapView;
-(id)topArrowView;
-(id)viewWithContentsImage:(id)arg0 rect:(struct CGRect )arg1 center:(struct CGRect )arg2 antialiasingMask:(unsigned int)arg3 directionSelector:(id)arg4 ;
-(struct CGRect )contentRectForRect:(struct CGRect )arg0 inImageOfSize:(struct CGSize )arg1 ;
-(struct CGRect )contentsCenterForRect:(struct CGRect )arg0 inImageOfSize:(struct CGSize )arg1 ;


@end


#endif