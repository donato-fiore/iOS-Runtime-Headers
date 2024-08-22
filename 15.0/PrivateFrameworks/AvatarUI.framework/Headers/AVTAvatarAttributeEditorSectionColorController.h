// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONCOLORCONTROLLER_H
#define AVTAVATARATTRIBUTEEDITORSECTIONCOLORCONTROLLER_H

@class UICollectionView, UICollectionViewFlowLayout, UIView, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, AVTAvatarAttributeEditorSectionColorDataSourceDelegate, AVTAvatarColorSliderContainerViewDelegate, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTAvatarAttributeEditorSectionController, AVTAvatarAttributeEditorSection;

#import <Foundation/Foundation.h>

#import "AVTAvatarAttributeEditorSectionColorDataSource.h"
#import "AVTUIEnvironment.h"
#import "AVTAttributeEditorSectionHeaderView.h"
#import "AVTAvatarColorSliderContainerView.h"

@interface AVTAvatarAttributeEditorSectionColorController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, AVTAvatarAttributeEditorSectionColorDataSourceDelegate, AVTAvatarColorSliderContainerViewDelegate, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTAvatarAttributeEditorSectionController>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) CGFloat currentRelativeContentOffsetX;
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionColorDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontAnimateSelection; // ivar: _dontAnimateSelection
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVTAttributeEditorSectionHeaderView *headerView; // ivar: _headerView
@property (nonatomic) BOOL needsScrollToSelected; // ivar: _needsScrollToSelected
@property (readonly, nonatomic) NSObject<AVTAvatarAttributeEditorSection> *section; // ivar: _section
@property (readonly, nonatomic) UIView *sectionView;
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (readonly, nonatomic) BOOL showsHeader; // ivar: _showsHeader
@property (retain, nonatomic) AVTAvatarColorSliderContainerView *sliderContainerView; // ivar: _sliderContainerView
@property (readonly) Class superclass;


+(BOOL)supportsSelection;
+(BOOL)updateCollectionViewLayout:(id)arg0 containerSize:(struct CGSize )arg1 environment:(id)arg2 forExtended:(BOOL)arg3 withSlider:(BOOL)arg4 numberOfItems:(NSInteger)arg5 ;
+(CGFloat)edgeLengthFittingWidth:(CGFloat)arg0 environment:(id)arg1 ;
+(struct CGPoint )clampedContentOffsetForOffset:(struct CGPoint )arg0 collectionView:(id)arg1 ;
+(struct CGSize )cellSizeFittingWidth:(CGFloat)arg0 environment:(id)arg1 ;
-(BOOL)evaluateDisplayCondition:(id)arg0 ;
-(CGFloat)heightForCollectionViewFittingWidth:(CGFloat)arg0 ;
-(CGFloat)heightForSectionHeaderFittingWidth:(CGFloat)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItems;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)indexForItem:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 showsHeader:(BOOL)arg1 environment:(id)arg2 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 showsHeader:(BOOL)arg1 ;
-(id)prefetchingSectionItemForIndex:(NSInteger)arg0 ;
-(id)viewForIndex:(NSInteger)arg0 ;
-(struct CGSize )sizeForFocusingItemAtIndex:(NSInteger)arg0 fittingSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeForItemAtIndex:(NSInteger)arg0 fittingSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )edgeInsetsFittingSize:(struct CGSize )arg0 ;
// -(void)animateWithSpringAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)attributeEditorSectionController:(id)arg0 didDeleteSectionItems:(id)arg1 ;
-(void)attributeEditorSectionController:(id)arg0 didSelectSectionItem:(id)arg1 ;
-(void)attributeEditorSectionController:(id)arg0 didUpdateSectionItem:(id)arg1 ;
-(void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg0 ;
-(void)attributeSection:(id)arg0 didChangeValueForSectionItem:(id)arg1 ;
-(void)cell:(id)arg0 willDisplayAtIndex:(NSInteger)arg1 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)colorDataSource:(id)arg0 didChangeDisplayMode:(NSInteger)arg1 previousDisplayMode:(NSInteger)arg2 ;
-(void)colorDataSource:(id)arg0 didDeselectItemAtIndex:(NSInteger)arg1 shouldReloadModel:(BOOL)arg2 ;
-(void)colorDataSource:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 shouldReloadModel:(BOOL)arg2 ;
-(void)colorSliderDidFinishChangingVariation:(CGFloat)arg0 forItem:(id)arg1 ;
-(void)colorSliderVariationChanged:(CGFloat)arg0 forItem:(id)arg1 ;
-(void)createCollectionView;
-(void)createSliderContainerView;
-(void)didHighlightItemAtIndex:(NSInteger)arg0 cell:(id)arg1 completionBlock:(id)arg2 ;
-(void)didSelectItemAtIndex:(NSInteger)arg0 cell:(id)arg1 ;
-(void)didUnhighlightItemAtIndex:(NSInteger)arg0 cell:(id)arg1 completionBlock:(id)arg2 ;
-(void)hideSliderAnimated:(BOOL)arg0 ;
-(void)invalidateLayoutForNewContainerSize:(struct CGSize )arg0 ;
-(void)layoutSubviewsForIndex:(NSInteger)arg0 ;
-(void)reloadData;
-(void)resetToDefaultState;
-(void)scrollCollectionViewToOrigin;
-(void)scrollCollectionViewToSelectedColor;
-(void)selectIndexPath:(id)arg0 ;
-(void)setSelectedState:(BOOL)arg0 animated:(BOOL)arg1 forCellAtIndexPath:(id)arg2 ;
-(void)showSliderAnimated:(BOOL)arg0 ;
-(void)updateCell:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)updateCellLayer:(id)arg0 withColorItem:(id)arg1 withColorPreset:(id)arg2 ;
-(void)updateCollectionViewLayoutWithContainerSize:(struct CGSize )arg0 ;
-(void)updateSectionItem:(id)arg0 withVariation:(CGFloat)arg1 ;
-(void)updateSliderForSectionItemIfNeeded:(id)arg0 ;
-(void)updateWithSection:(id)arg0 ;
-(void)willDisplayViewForIndex:(NSInteger)arg0 ;


@end


#endif