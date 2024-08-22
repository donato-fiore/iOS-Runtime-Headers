// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORMULTICOLORSECTIONPICKERCONTROLLER_H
#define AVTAVATARATTRIBUTEEDITORMULTICOLORSECTIONPICKERCONTROLLER_H

@class NSArray, UICollectionView, UIView, NSString, UICollectionViewFlowLayout;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarAttributeEditorMulticolorPickerCellDelegate, AVTAvatarAttributeEditorSectionController, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTAvatarAttributeEditorSection;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"

@interface AVTAvatarAttributeEditorMulticolorSectionPickerController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarAttributeEditorMulticolorPickerCellDelegate, AVTAvatarAttributeEditorSectionController>



@property (retain, nonatomic) NSArray *cachedTitleSizes; // ivar: _cachedTitleSizes
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) CGFloat currentOffsetX; // ivar: _currentOffsetX
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTAvatarAttributeEditorSection> *section; // ivar: _section
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;


+(BOOL)shouldScrollGivenTitleSizes:(id)arg0 fittingWidth:(CGFloat)arg1 items:(id)arg2 ;
+(BOOL)shouldWrapTitlesForTitleSizes:(id)arg0 items:(id)arg1 forWidth:(CGFloat)arg2 ;
+(BOOL)supportsSelection;
+(CGFloat)adjustedWidthForTitleSizes:(id)arg0 items:(id)arg1 forWidth:(CGFloat)arg2 ;
+(CGFloat)edgeLengthFittingWidth:(CGFloat)arg0 environment:(id)arg1 ;
+(CGFloat)estimatedContentHeightForWrappingTitleSizes:(id)arg0 items:(id)arg1 forWidth:(CGFloat)arg2 ;
+(CGFloat)estimatedContentWidthForTitleSizes:(id)arg0 items:(id)arg1 ;
+(CGFloat)estimatedContentWidthForWrappingTitleSizes:(id)arg0 items:(id)arg1 forWidth:(CGFloat)arg2 ;
+(struct CGPoint )clampedContentOffsetForOffset:(struct CGPoint )arg0 collectionView:(id)arg1 ;
+(struct CGSize )cellSizeForItemAtIndex:(NSInteger)arg0 forTitleSizes:(id)arg1 items:(id)arg2 forContainerWidth:(CGFloat)arg3 ;
-(BOOL)evaluateDisplayCondition:(id)arg0 ;
-(CGFloat)currentRelativeContentOffsetX;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItems;
-(NSUInteger)indexForItem:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)prefetchingSectionItemForIndex:(NSInteger)arg0 ;
-(id)viewForIndex:(NSInteger)arg0 ;
-(struct CGSize )cellSizeForItemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )sizeForFocusingItemAtIndex:(NSInteger)arg0 fittingSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeForItemAtIndex:(NSInteger)arg0 fittingSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )edgeInsetsFittingSize:(struct CGSize )arg0 ;
-(void)attributeSection:(id)arg0 didChangeValueForSectionItem:(id)arg1 ;
-(void)cacheTitleSizes;
-(void)cell:(id)arg0 willDisplayAtIndex:(NSInteger)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)createCollectionView;
-(void)didHighlightItemAtIndex:(NSInteger)arg0 cell:(id)arg1 completionBlock:(id)arg2 ;
-(void)didSelectItemAtIndex:(NSInteger)arg0 cell:(id)arg1 ;
-(void)didUnhighlightItemAtIndex:(NSInteger)arg0 cell:(id)arg1 completionBlock:(id)arg2 ;
-(void)invalidateLayoutForNewContainerSize:(struct CGSize )arg0 ;
-(void)multicolorPickerCellDidTapClearButton:(id)arg0 ;
-(void)resetToDefaultState;
-(void)setCurrentRelativeContentOffsetX:(CGFloat)arg0 ;
-(void)updateCell:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)updateInsetsForSize:(struct CGSize )arg0 ;
-(void)updateWithSection:(id)arg0 ;


@end


#endif