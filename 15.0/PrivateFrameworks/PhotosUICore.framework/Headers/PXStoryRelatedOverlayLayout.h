// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRELATEDOVERLAYLAYOUT_H
#define PXSTORYRELATEDOVERLAYLAYOUT_H

@class NSIndexSet, NSTimer, NSString;
@protocol PXGStringSource, PXGNamedImageSource, PXGSublayoutProvider, PXChangeObserver, PXStoryScrollContentLayoutDelegate, PXGScrollLayoutDelegate;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXNumberAnimator.h"
#import "PXStoryRelatedLayoutGenerator.h"
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
    _PXGSpriteIndexRange _relatedSelectionSpriteIndexRange;
    _NSRange _relatedSublayoutIndexRange;
    NSInteger _scrollSublayoutIndex;
    NSIndexSet *_axSpriteIndexes;
    NSInteger _capacity;
    *CGRect _relatedDefaultFrames;
}


@property (readonly, nonatomic) PXNumberAnimator *countDownAlphaAnimator; // ivar: _countDownAlphaAnimator
@property (retain, nonatomic) NSTimer *countDownTimer; // ivar: _countDownTimer
@property (nonatomic) NSInteger countDownValue; // ivar: _countDownValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRelatedOverlayScrolledIntoView; // ivar: _isRelatedOverlayScrolledIntoView
@property (readonly, nonatomic) PXStoryRelatedLayoutGenerator *layoutGenerator; // ivar: _layoutGenerator
@property (readonly, nonatomic) PXStoryScrollContentLayout *scrollContentLayout; // ivar: _scrollContentLayout
@property (readonly, nonatomic) PXGScrollLayout *scrollLayout; // ivar: _scrollLayout
@property (nonatomic) BOOL shouldCountDown; // ivar: _shouldCountDown
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)allowsDanglingUpdatesAssertions;
-(NSInteger)_relatedIndexForSublayoutIndex:(NSInteger)arg0 ;
-(NSInteger)_sublayoutIndexForRelatedIndex:(NSInteger)arg0 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(void)_arrangeSublayoutAtIndex:(NSInteger)arg0 frame:(struct CGRect )arg1 zIndex:(*NSInteger)arg2 ;
-(void)_createRelatedAnimationIfNeeded;
-(void)_handleCountDownTimer:(id)arg0 ;
-(void)_invalidateContent;
-(void)_invalidateRelatedSpritesAndSublayouts;
-(void)_invalidateScrollSpritesAndSublayouts;
-(void)_invalidateShouldCountDown;
-(void)_invalidateSublayoutPositions;
-(void)_invalidateTitleContent;
-(void)_updateContent;
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
-(void)update;


@end


#endif