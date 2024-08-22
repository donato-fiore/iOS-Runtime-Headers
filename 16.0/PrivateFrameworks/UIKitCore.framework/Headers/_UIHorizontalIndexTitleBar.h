// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHORIZONTALINDEXTITLEBAR_H
#define _UIHORIZONTALINDEXTITLEBAR_H

@class NSString, NSArray, NSIndexPath;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, _UIHorizontalIndexTitleBarDelegate;


#import "UIView.h"
#import "UICollectionView.h"
#import "_UIHorizontalIndexTitleBarCell.h"
#import "UIFocusGuide.h"
#import "UICollectionViewCompositionalLayout.h"
#import "_UIFocusFastScrollingIndexBarEntry.h"

@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIHorizontalIndexTitleBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *entries; // ivar: _entries
@property (weak, nonatomic) _UIHorizontalIndexTitleBarCell *focusedCell; // ivar: _focusedCell
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIFocusGuide *horizontalIndexTitleBarFocusGuide; // ivar: _horizontalIndexTitleBarFocusGuide
@property (retain, nonatomic) UICollectionViewCompositionalLayout *layout; // ivar: _layout
@property (nonatomic, getter=_parentContentInset, setter=_setParentContentInset:) UIEdgeInsets parentContentInset; // ivar: _parentContentInset
@property (nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset
@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *selectedEntry; // ivar: _selectedEntry
@property (retain, nonatomic) NSIndexPath *selectedEntryIndexPath; // ivar: _selectedEntryIndexPath
@property (readonly) Class superclass;


-(BOOL)_isViewEntryCell:(id)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_currentlyFocusedCell;
-(id)_existingCellForSelectedIndexPath;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)init;
-(id)preferredFocusEnvironments;
-(struct NSDirectionalEdgeInsets )_combinedSectionInset;
-(void)_cancelDelayedFocusAction;
-(void)_flipIfRightToLeft;
-(void)_selectEntryForTitleIndex:(NSInteger)arg0 ;
-(void)_selectFocusedCell;
-(void)_sendDelayedFocusActionIfNecessary;
-(void)_updateWithEntries:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)commonInit;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif