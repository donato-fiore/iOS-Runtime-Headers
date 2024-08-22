// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDVIEW_H
#define UIKEYCOMMANDDISCOVERABILITYHUDVIEW_H

@class NSArray, NSLayoutConstraint, NSString;
@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout;


#import "UIView.h"
#import "UIBlurEffect.h"
#import "UIVibrancyEffect.h"
#import "UIVisualEffectView.h"
#import "UICollectionViewFlowLayout.h"
#import "UICollectionView.h"
#import "UIPageControl.h"
#import "UIKeyCommandDiscoverabilityHUDVisualStyle.h"

@interface UIKeyCommandDiscoverabilityHUDView : UIView <UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

 {
    NSArray *_keyCommands;
    UIView *_HUDOutlineView;
    NSLayoutConstraint *_HUDOutlineViewWidthConstraint;
    NSLayoutConstraint *_HUDOutlineViewHeightConstraint;
    UIBlurEffect *_blurEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_backdropView;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewTopConstraint;
    NSLayoutConstraint *_collectionViewBottomConstraint;
    NSLayoutConstraint *_collectionViewLeadingConstraint;
    NSLayoutConstraint *_collectionViewTrailingConstraint;
    UIPageControl *_pageControl;
    NSLayoutConstraint *_pageControlYAnchor;
    CGFloat _fontScaleFactor;
    NSUInteger _pageCount;
    NSUInteger _cellsPerColumn;
    CGSize _columnSize;
    BOOL _twoColumnsPerPage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_shouldUseWordsNotSymbols) BOOL shouldUseWordsNotSymbols; // ivar: _shouldUseWordsNotSymbols
@property (readonly) Class superclass;
@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDVisualStyle *visualStyle; // ivar: _visualStyle


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_columnViewForColumnIndex:(NSUInteger)arg0 reusingView:(id)arg1 ;
-(id)_discoverabilityTitleForKeyCommand:(id)arg0 ;
-(id)_keyCommandsForColumnIndex:(NSUInteger)arg0 withCellsPerColumn:(NSUInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)discoverabilityHUDColumnView:(id)arg0 descriptionStringForKeyCommand:(id)arg1 ;
-(id)discoverabilityHUDColumnView:(id)arg0 inputStringForKeyCommand:(id)arg1 ;
-(id)discoverabilityHUDColumnView:(id)arg0 modifiersStringForKeyCommand:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithKeyCommands:(id)arg0 keyboard:(struct __GSKeyboard *)arg1 ;
-(struct CGSize )_bestColumnSizeWithCellsPerColumn:(NSUInteger)arg0 maxColumnSize:(struct CGSize )arg1 columnCount:(NSUInteger)arg2 usingColumnView:(id)arg3 getFontScaleFactor:(*CGFloat)arg4 ;
-(void)_pageControlValueChanged:(id)arg0 ;
-(void)animateIn;
-(void)animateOutWithCompletion:(id)arg0 ;
-(void)recalculatePages;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif