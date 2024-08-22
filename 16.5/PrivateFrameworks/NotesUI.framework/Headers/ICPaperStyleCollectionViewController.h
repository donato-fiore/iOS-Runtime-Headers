// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPAPERSTYLECOLLECTIONVIEWCONTROLLER_H
#define ICPAPERSTYLECOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSString;
@protocol UICollectionViewDelegateFlowLayout;


#import "ICPaperStyleHeaderView.h"

@interface ICPaperStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forPreferences; // ivar: _forPreferences
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICPaperStyleHeaderView *headerViewMeasuringCell; // ivar: _headerViewMeasuringCell
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (nonatomic) CGFloat itemSpacingVertical; // ivar: _itemSpacingVertical
@property (nonatomic) BOOL needsUpdateItemSpacing; // ivar: _needsUpdateItemSpacing
@property (nonatomic) UIEdgeInsets sectionInsets; // ivar: _sectionInsets
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets titleInsets; // ivar: _titleInsets


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)paperStyleTypeFromIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathForInitialSelection;
-(id)indexPathFromPaperStyleType:(NSUInteger)arg0 ;
-(id)indexPathFromSetting:(id)arg0 ;
-(id)init;
-(id)initWithLargeIcons:(BOOL)arg0 forPreferences:(BOOL)arg1 ;
-(id)settingFromIndexPath:(id)arg0 ;
-(id)titleForHeaderView;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)updateItemSpacing;
-(void)updateSettings;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif