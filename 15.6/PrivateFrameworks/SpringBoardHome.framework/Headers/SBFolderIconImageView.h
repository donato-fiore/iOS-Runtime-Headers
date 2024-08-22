// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFOLDERICONIMAGEVIEW_H
#define SBFOLDERICONIMAGEVIEW_H

@class UIView, NSMutableArray, NSHashTable, NSString;
@protocol SBFolderIconObserver, SBFolderIconImageCacheObserver;


#import "SBIconImageView.h"
#import "_SBIconGridWrapperView.h"
#import "SBFloatyFolderView.h"

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBFolderIconImageCacheObserver>

 {
    UIView *_solidColorBackgroundView;
    UIView *_pageGridContainer;
    _SBIconGridWrapperView *_leftWrapperView;
    _SBIconGridWrapperView *_rightWrapperView;
    NSMutableArray *_pageElements;
    SBFloatyFolderView *_crossfadeFolderView;
    UIView *_crossfadeScalingView;
    NSHashTable *_imageUpdateDisableAssertions;
    NSUInteger _transitionToken;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) NSUInteger concreteBackgroundStyle;
@property (nonatomic) NSUInteger currentBackgroundStyle; // ivar: _currentBackgroundStyle
@property (readonly, nonatomic) NSUInteger currentPageIndex; // ivar: _currentPageIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCustomBackgroundView; // ivar: _hasCustomBackgroundView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat iconGridImageAlpha;
@property (nonatomic, getter=isPageGridHidden) BOOL pageGridHidden;
@property (readonly) Class superclass;


-(Class)_iconGridImageClass;
-(NSUInteger)centerVisibleMiniIconIndex;
-(NSUInteger)firstVisibleMiniIconIndex;
-(NSUInteger)lastVisibleMiniIconIndex;
-(NSUInteger)visibleMiniIconCount;
-(NSUInteger)visibleMiniIconListIndex;
-(id)_currentPageElement;
-(id)_folderIcon;
-(id)_folderIconImageCache;
-(id)_generateSquareContentsImage;
-(id)contentsImage;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)disableImageUpdatesForReason:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)representedListLayout;
-(id)snapshot;
-(struct CGRect )frameForMiniIconAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForMiniIconAtIndexPath:(id)arg0 ;
-(struct CGRect )visibleImageRelativeFrameForMiniIconAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )_interiorGridSize;
-(void)_performScrollingDirection:(NSInteger)arg0 targetPageIndex:(NSUInteger)arg1 targetPageScrollRow:(NSUInteger)arg2 newLeftElement:(id)arg3 newRightElement:(id)arg4 animated:(BOOL)arg5 ;
-(void)_setPageElements:(id)arg0 ;
-(void)_setupGridViewsInDefaultConfiguration;
-(void)_showLeftMinigrid;
-(void)_showRightMinigrid;
-(void)_updateAccessibilityBackgroundContrast;
-(void)_updateCurrentBackgroundStyle;
-(void)_updateRasterization;
-(void)cleanupAfterFloatyFolderCrossfade;
-(void)dealloc;
-(void)folderIconImageCache:(id)arg0 didUpdateImagesForFolderIcon:(id)arg1 ;
-(void)fulfillGridImageForPageElement:(id)arg0 ;
-(void)iconViewFolderIconImageCacheDidChange;
-(void)iconViewLegibilitySettingsDidChange;
-(void)invalidateImageUpdatesAssertion:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)arg0 allowFolderInteraction:(BOOL)arg1 ;
-(void)scrollToFirstGapAnimated:(BOOL)arg0 ;
-(void)scrollToGapOrTopIfFullOfPage:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)arg0 ;
-(void)scrollToTopOfPage:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setBackgroundAndIconGridImageAlpha:(CGFloat)arg0 ;
-(void)setBackgroundScale:(CGFloat)arg0 ;
-(void)setFloatyFolderCrossfadeFraction:(CGFloat)arg0 ;
-(void)setIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIconView:(id)arg0 ;
-(void)updateImageAnimated:(BOOL)arg0 ;


@end


#endif