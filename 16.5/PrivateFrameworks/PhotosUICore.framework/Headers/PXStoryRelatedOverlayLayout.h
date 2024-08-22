// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRELATEDOVERLAYLAYOUT_H
#define PXSTORYRELATEDOVERLAYLAYOUT_H

@class NSTimer, NSString;
@protocol PXGStringSource, PXGNamedImageSource, PXGSublayoutProvider, PXChangeObserver, PXStoryScrollContentLayoutDelegate, PXGScrollLayoutDelegate;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXNumberAnimator.h"
#import "PXStoryRelatedOverlayItemDecorationSource.h"
#import "PXStoryRelatedLayoutGenerator.h"
#import "PXStoryChromeButtonConfiguration.h"
#import "PXStoryScrollContentLayout.h"
#import "PXGScrollLayout.h"
#import "PXStoryViewModel.h"

@interface PXStoryRelatedOverlayLayout : PXGAbsoluteCompositeLayout <PXGStringSource, PXGNamedImageSource, PXGSublayoutProvider, PXChangeObserver, PXStoryScrollContentLayoutDelegate, PXGScrollLayoutDelegate>

 {
    ? _updateFlags;
    BOOL _shouldIgnoreContentScrollOffsetChanges;
    unsigned int _titleSpriteIndex;
    unsigned short _titleVersion;
    unsigned int _countDownSpriteIndex;
    unsigned int _countDownDecorationSpriteIndex;
    unsigned int _navigationButtonSpriteIndex;
    unsigned int _navigationHitTestVisabilitySpriteIndex;
    _NSRange _relatedSublayoutIndexRange;
    NSInteger _scrollSublayoutIndex;
    NSInteger _capacity;
    *CGRect _relatedDefaultFrames;
}


@property (readonly, nonatomic) PXNumberAnimator *countDownAlphaAnimator; // ivar: _countDownAlphaAnimator
@property (retain, nonatomic) NSTimer *countDownTimer; // ivar: _countDownTimer
@property (nonatomic) NSInteger countDownValue; // ivar: _countDownValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXStoryRelatedOverlayItemDecorationSource *decorationSource; // ivar: _decorationSource
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRelatedOverlayScrolledIntoView; // ivar: _isRelatedOverlayScrolledIntoView
@property (readonly, nonatomic) PXStoryRelatedLayoutGenerator *layoutGenerator; // ivar: _layoutGenerator
@property (readonly, nonatomic) PXNumberAnimator *navigationButtonAlphaAnimator; // ivar: _navigationButtonAlphaAnimator
@property (copy, nonatomic) PXStoryChromeButtonConfiguration *navigationButtonConfiguration; // ivar: _navigationButtonConfiguration
@property (nonatomic) NSInteger navigationButtonDirection; // ivar: _navigationButtonDirection
@property (readonly, nonatomic) PXNumberAnimator *navigationButtonScrollAnimator; // ivar: _navigationButtonScrollAnimator
@property (nonatomic) CGFloat navigationButtonScrollAnimatorTarget; // ivar: _navigationButtonScrollAnimatorTarget
@property (nonatomic) NSInteger navigationButtonVersion; // ivar: _navigationButtonVersion
@property (readonly, nonatomic) _PXGSpriteIndexRange relatedSelectionSpriteIndexRange; // ivar: _relatedSelectionSpriteIndexRange
@property (readonly, nonatomic) PXStoryScrollContentLayout *scrollContentLayout; // ivar: _scrollContentLayout
@property (readonly, nonatomic) PXGScrollLayout *scrollLayout; // ivar: _scrollLayout
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (nonatomic) BOOL shouldCountDown; // ivar: _shouldCountDown
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) BOOL wantsNavigationButton; // ivar: _wantsNavigationButton
@property (nonatomic) BOOL wasAnimatingScrollOffsetForNavigation; // ivar: _wasAnimatingScrollOffsetForNavigation


-(BOOL)_needsRTLFlip;
-(BOOL)allowsDanglingUpdatesAssertions;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)_relatedIndexForSublayoutIndex:(NSInteger)arg0 ;
-(NSInteger)_sublayoutIndexForFirstRelated;
-(NSInteger)_sublayoutIndexForRelatedIndex:(NSInteger)arg0 ;
-(NSInteger)relatedCardOverlayStartIndex;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)_firstRelatedSublayout;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axLocalizedLabel;
-(id)axSpriteIndexes;
-(id)axVisibleSpriteIndexes;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)preferredFocusLayouts;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_arrangeSublayoutAtIndex:(NSInteger)arg0 frame:(struct CGRect )arg1 zIndex:(*NSInteger)arg2 ;
-(void)_autoplayUpNext;
-(void)_considerChangingToSelectedRelatedMemory;
-(void)_createRelatedAnimationIfNeeded;
-(void)_handleCountDownTimer:(id)arg0 ;
-(void)_handleNavigationButton:(id)arg0 ;
-(void)_invalidateAXGroupRole;
-(void)_invalidateContent;
-(void)_invalidateNavigationButton;
-(void)_invalidateRelatedSpritesAndSublayouts;
-(void)_invalidateScrollSpritesAndSublayouts;
-(void)_invalidateShouldCountDown;
-(void)_invalidateSublayoutPositions;
-(void)_invalidateTitleContent;
-(void)_selectRelatedMemoryAtIndex:(NSInteger)arg0 ;
-(void)_setFirstRelatedLayoutCountdownValue:(NSInteger)arg0 ;
-(void)_updateAXGroupRole;
-(void)_updateContent;
-(void)_updateNavigationButton;
-(void)_updateRelatedSpritesAndSublayouts;
-(void)_updateScrollSpritesAndSublayouts;
-(void)_updateShouldCountDown;
-(void)_updateSublayoutPositions;
-(void)alphaDidChange;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)scrollContentLayoutScrollOffsetDidChange:(id)arg0 ;
-(void)scrollLayoutWillBeginScrolling:(id)arg0 ;
-(void)scrollLayoutWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)showOrHideFullRelated:(BOOL)arg0 ;
-(void)update;


@end


#endif