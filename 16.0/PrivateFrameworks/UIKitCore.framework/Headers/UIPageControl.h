// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPAGECONTROL_H
#define UIPAGECONTROL_H



#import "UIControl.h"
#import "_UIPageControlVisualProvider.h"
#import "UIVisualEffect.h"
#import "UIColor.h"
#import "UIImage.h"

@interface UIPageControl : UIControl {
    _UIPageControlVisualProvider *_visualProvider;
    ? _pageControlFlags;
    ? _custom;
    CGFloat _horizontalPadding;
    CGFloat _verticalPadding;
    CGFloat _indicatorSpacing;
    NSUInteger _preferredNumberOfVisibleIndicators;
}


@property (nonatomic, setter=_setAllowsDiscreteInteraction:) BOOL _allowsDiscreteInteraction;
@property (nonatomic, setter=_setCustomHorizontalPadding:) CGFloat _customHorizontalPadding;
@property (nonatomic, setter=_setCustomIndicatorSpacing:) CGFloat _customIndicatorSpacing;
@property (nonatomic, setter=_setCustomVerticalPadding:) CGFloat _customVerticalPadding;
@property (nonatomic, setter=_setFlickToEndGestureEnabled:) BOOL _flickToEndGestureEnabled;
@property (nonatomic, setter=_setIndicatorOpacity:) CGFloat _indicatorOpacity;
@property (retain, nonatomic, setter=_setPlatterEffect:) UIVisualEffect *_platterEffect; // ivar: __platterEffect
@property (nonatomic) BOOL allowsContinuousInteraction;
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) NSInteger currentPage; // ivar: _currentPage
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor; // ivar: _currentPageIndicatorTintColor
@property (nonatomic) BOOL defersCurrentPageDisplay;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) BOOL hidesForSinglePage;
@property (readonly, nonatomic) NSInteger interactionState;
@property (nonatomic) NSInteger numberOfPages; // ivar: _numberOfPages
@property (retain, nonatomic) UIColor *pageIndicatorTintColor; // ivar: _pageIndicatorTintColor
@property (retain, nonatomic) UIImage *preferredCurrentPageIndicatorImage;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;
@property (nonatomic, getter=_preferredNumberOfVisibleIndicators, setter=_setPreferredNumberOfVisibleIndicators:) NSUInteger preferredNumberOfVisibleIndicators;
@property (nonatomic) NSInteger previousPage; // ivar: _previousPage


+(BOOL)doesOverrideMethod:(SEL)arg0 inBaseClass:(Class)arg1 ;
+(id)_visualProviderForPageControl:(id)arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_implementsCustomCurrentPageImagesOverride;
-(BOOL)_implementsCustomPageImagesOverride;
-(BOOL)_isVertical;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)shouldTrack;
-(NSInteger)_displayedPage;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)currentPageIndicatorImageForPage:(NSInteger)arg0 ;
-(id)indicatorImageForPage:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_indicatorFrameForPage:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeForNumberOfPages:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateIndicators;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_setVertical:(BOOL)arg0 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;
-(void)_updateCurrentPage:(NSInteger)arg0 updateDisplayImmediately:(BOOL)arg1 ;
-(void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setIndicatorImage:(id)arg0 forPage:(NSInteger)arg1 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)updateCurrentPageDisplay;


@end


#endif