// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLARGETEXTPLATTERHEADERCONTENTVIEWLAYOUTMANAGER_H
#define PLLARGETEXTPLATTERHEADERCONTENTVIEWLAYOUTMANAGER_H

@class NSStringDrawingContext;


#import "PLPlatterHeaderContentViewLayoutManager.h"

@interface PLLargeTextPlatterHeaderContentViewLayoutManager : PLPlatterHeaderContentViewLayoutManager {
    NSStringDrawingContext *_drawingContext;
    CGFloat _referenceWidth;
    CGSize _cachedTitleBoundingRectSize;
    NSUInteger _cachedTitleNumberOfLines;
}




+(CGFloat)contentBaselineToBoundsBottomWithFont:(id)arg0 boundsWidth:(CGFloat)arg1 scale:(CGFloat)arg2 ;
-(CGFloat)_dateLabelBaselineOffset;
-(CGFloat)_largeTextLabelBaselineOffsetFromBottom;
-(CGFloat)_largeTextUtilityLabelBaselineOffset;
-(CGFloat)_titleLabelBaselineOffset;
-(CGFloat)contentBaseline;
-(CGFloat)headerHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)_titleLabelNumberOfLinesThatFitsWidth:(CGFloat)arg0 ;
-(id)_dateLabelFont;
-(struct CGRect )_dateLabelBoundsThatFitsWidth:(CGFloat)arg0 ;
-(struct CGRect )_titleLabelBoundsThatFitsWidth:(CGFloat)arg0 ;
-(struct CGSize )_boundingRectSizeForLabel:(id)arg0 width:(CGFloat)arg1 numberOfLines:(*NSUInteger)arg2 ;
-(struct CGSize )_utilityViewSizeThatFitsWidth:(CGFloat)arg0 ;
-(void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(CGFloat)arg0 ;
-(void)invalidateCachedSizeInfo;
-(void)layoutDateLabelWithScale:(CGFloat)arg0 ;
-(void)layoutIconButtonsWithScale:(CGFloat)arg0 ;
-(void)layoutTitleLabelWithTrailingXLimit:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(void)layoutUtilityButtonWithScale:(CGFloat)arg0 ;


@end


#endif