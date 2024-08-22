// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOATYFOLDERVIEW_H
#define SBFLOATYFOLDERVIEW_H

@class NSMutableArray, NSMapTable, UITapGestureRecognizer, UIPinchGestureRecognizer, UILongPressGestureRecognizer, NSString, UIScribbleInteraction;
@protocol UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBFolderBackgroundViewDelegate, UIScribbleInteractionDelegate;


#import "SBFolderView.h"
#import "SBFloatyFolderBackgroundClipView.h"
#import "SBHFolderSettings.h"

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBFolderBackgroundViewDelegate, UIScribbleInteractionDelegate>

 {
    SBFloatyFolderBackgroundClipView *_scrollClipView;
    NSMutableArray *_pageBackgroundViews;
    NSMapTable *_pageBackgroundViewsForIconListViews;
    NSInteger _scalingViewPageIndex;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    SBHFolderSettings *_folderSettings;
}


@property (nonatomic, getter=isAnimatingRotation) BOOL animatingRotation; // ivar: _animatingRotation
@property (nonatomic) NSUInteger backgroundEffect; // ivar: _backgroundEffect
@property (nonatomic, getter=isConvertingIconListStyle) BOOL convertingIconListStyle; // ivar: _convertingIconListStyle
@property (readonly, nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayingMultipleIconLists) BOOL displayingMultipleIconLists; // ivar: _displayingMultipleIconLists
@property (readonly, nonatomic) BOOL displaysMultipleIconListsInLandscapeOrientation; // ivar: _displaysMultipleIconListsInLandscapeOrientation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIScribbleInteraction *titleScribbleInteraction; // ivar: _titleScribbleInteraction


+(CGFloat)defaultCornerRadius;
+(Class)_scrollViewClass;
+(NSUInteger)countOfAdditionalPagesToKeepVisibleInOneDirection;
+(id)defaultIconLocation;
-(BOOL)_shouldConvertToMultipleIconListsInLandscapeOrientation;
-(BOOL)_shouldUseScrollableIconViewInteraction;
-(BOOL)_showsTitle;
-(BOOL)_tapToCloseGestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)locationCountsAsInsideFolder:(struct CGPoint )arg0 ;
-(BOOL)scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(CGFloat)_rubberBandIntervalForOverscroll;
-(CGFloat)_titleFontSize;
-(CGFloat)minimumVisibleScrollOffset;
-(CGFloat)scrollableWidthForVisibleColumnRange;
-(NSInteger)iconVisibilityHandling;
-(id)_newPageBackgroundView;
-(id)accessibilityTintColorForBackgroundView:(id)arg0 ;
-(id)borrowScalingView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)floatyFolderConfiguration;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)iconListViewAtPoint:(struct CGPoint )arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)legibilitySettingsForIconListViews;
-(struct CGPoint )_scrollView:(id)arg0 adjustedOffsetForOffset:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 startPoint:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 horizontalVelocity:(*CGFloat)arg5 verticalVelocity:(*CGFloat)arg6 ;
-(struct CGPoint )visibleFolderRelativeImageCenterForIcon:(id)arg0 ;
-(struct CGRect )_frameForScalingView;
-(struct CGRect )_iconListFrameForPageRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;
-(struct CGRect )_pageBackgroundFrameForPageRect:(struct CGRect )arg0 ;
-(void)_configureGestures;
-(void)_convertToMultipleIconListsAnimated:(BOOL)arg0 ;
-(void)_convertToSingleIconListAnimated:(BOOL)arg0 ;
-(void)_currentPageIndexDidChange;
-(void)_didAddIconListView:(id)arg0 ;
-(void)_didRemoveIconListView:(id)arg0 ;
-(void)_handleLongPressGesture:(id)arg0 ;
-(void)_handleOutsideTap:(id)arg0 ;
-(void)_handlePinchGesture:(id)arg0 ;
-(void)_layoutSubviews;
-(void)_orientationDidChange:(NSInteger)arg0 ;
-(void)_setScrollViewNeedsToClipCorners:(BOOL)arg0 ;
-(void)_updateIconListContainment:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_updateScalingViewFrame;
-(void)_updateScalingViewLocation;
-(void)_updateScrollingState:(BOOL)arg0 ;
-(void)accessibilityReduceTransparencyDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didTransitionAnimated:(BOOL)arg0 ;
-(void)enumeratePageBackgroundViewsUsingBlock:(id)arg0 ;
-(void)fadeContentForMagnificationFraction:(CGFloat)arg0 ;
-(void)fadeContentForMinificationFraction:(CGFloat)arg0 ;
-(void)returnScalingView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setBackgroundAlpha:(CGFloat)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)transitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)updateAccessibilityTintColors;
-(void)willTransitionAnimated:(BOOL)arg0 withSettings:(id)arg1 ;


@end


#endif