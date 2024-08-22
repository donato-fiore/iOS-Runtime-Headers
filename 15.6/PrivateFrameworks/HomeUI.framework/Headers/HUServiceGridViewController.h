// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSERVICEGRIDVIEWCONTROLLER_H
#define HUSERVICEGRIDVIEWCONTROLLER_H

@class NSString;
@protocol UICollectionViewDelegateFlowLayout, HUServiceGridViewControllerDelegate;


#import "HUControllableItemCollectionViewController.h"
#import "HUGridLayoutOptions.h"

@interface HUServiceGridViewController : HUControllableItemCollectionViewController <UICollectionViewDelegateFlowLayout>



@property (nonatomic) NSUInteger contentMargins; // ivar: _contentMargins
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUServiceGridViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (nonatomic) BOOL shouldShowLoadingState; // ivar: _shouldShowLoadingState
@property (readonly) Class superclass;


-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)headerViewHeightForSectionIndex:(NSUInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)itemTypeForItem:(id)arg0 ;
-(id)_defaultLayoutOptionsForViewSize:(struct CGSize )arg0 ;
-(id)_performTapActionForItem:(id)arg0 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )preferredContentSizeForCollectionViewContentSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif