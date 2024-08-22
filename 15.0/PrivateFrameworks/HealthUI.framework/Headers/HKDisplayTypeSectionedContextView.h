// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDISPLAYTYPESECTIONEDCONTEXTVIEW_H
#define HKDISPLAYTYPESECTIONEDCONTEXTVIEW_H

@class UIView, UICollectionView, UICollectionViewLayout, NSIndexPath, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextVerticalCollectionViewCellDelegate, HKDisplayTypeSectionedContextViewDelegate;


#import "HKDisplayTypeContextVerticalCollectionViewCell.h"
#import "HKDisplayTypeContextItem.h"

@interface HKDisplayTypeSectionedContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextVerticalCollectionViewCellDelegate>

 {
    NSInteger _style;
    BOOL _bottomInsetsEnabled;
    UICollectionView *_collectionView;
    UICollectionViewLayout *_collectionViewLayout;
    NSIndexPath *_lastSelectedIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKDisplayTypeSectionedContextViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayTypeContextSections; // ivar: _displayTypeContextSections
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextVerticalCollectionViewCell *sizingCell; // ivar: _sizingCell
@property (nonatomic) CGFloat sizingCellEstimatedHeight; // ivar: _sizingCellEstimatedHeight
@property (retain, nonatomic) HKDisplayTypeContextItem *sizingItem; // ivar: _sizingItem
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)_cellSizingWidth;
-(CGFloat)_contentHeight;
-(CGFloat)_contentWidth;
-(CGFloat)_estimatedDynamicCellHeight;
-(CGFloat)_maximumHeaderLabelLength;
-(CGFloat)_preferredCollectionViewHeightForCount:(NSInteger)arg0 ;
-(NSInteger)_rowsForScreenSize;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_buildCollectionViewLayout;
-(id)_makeDummySizingItem;
-(id)_makeSizingItemWithItem:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 useBottomInsets:(BOOL)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_handleSelection:(id)arg0 indexPath:(id)arg1 informDelegate:(BOOL)arg2 ;
-(void)_updateSizingCellWithContextItemSections:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)deselectAllItemsAnimated:(BOOL)arg0 ;
-(void)didTapOnInfoButtonForCollectionViewCell:(id)arg0 ;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif