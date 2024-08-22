// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILEGACYPAGECONTROLVISUALPROVIDER_H
#define _UILEGACYPAGECONTROLVISUALPROVIDER_H

@class UIPageControlVisualProvider, NSMutableArray;


#import "UIImage.h"
#import "UIVisualEffectView.h"

@interface _UILegacyPageControlVisualProvider : UIPageControlVisualProvider {
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    NSMutableArray *_currentPageImages;
    NSMutableArray *_pageImages;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSMutableArray *_indicators;
}




-(BOOL)_hasCustomImageForPage:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(CGFloat)_indicatorSpacing;
-(CGFloat)_modernCornerRadius;
-(id)_cachedPageIndicatorCurrentImageForPage:(NSInteger)arg0 ;
-(id)_cachedPageIndicatorImageForPage:(NSInteger)arg0 ;
-(id)_indicatorViewEnabled:(BOOL)arg0 index:(NSInteger)arg1 ;
-(id)_modernColorEnabled:(BOOL)arg0 ;
-(id)_pageIndicatorCurrentImageForPage:(NSInteger)arg0 ;
-(id)_pageIndicatorImageForPage:(NSInteger)arg0 ;
-(id)defaultActivePageIndicatorImage;
-(id)effectiveContentView;
-(id)preferredIndicatorImage;
-(struct CGRect )_indicatorFrameAtIndex:(NSInteger)arg0 ;
-(struct CGRect )_modernBounds;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeForNumberOfPages:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cachePageIndicatorImages;
-(void)_drawModernIndicatorInView:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_setDisplayedPage:(NSInteger)arg0 ;
-(void)_transitionIndicator:(id)arg0 toEnabled:(BOOL)arg1 index:(NSInteger)arg2 ;
-(void)didEndTrackingWithTouch:(id)arg0 ;
-(void)didUpdateCurrentPageIndicatorTintColor;
-(void)didUpdateNumberOfPages;
-(void)didUpdatePageIndicatorTintColor;
-(void)invalidateIndicators;
-(void)layoutSubviews;
-(void)prepare;
-(void)pruneArchivedSubviews:(id)arg0 ;
-(void)updateDisplayedPageToCurrentPage;


@end


#endif