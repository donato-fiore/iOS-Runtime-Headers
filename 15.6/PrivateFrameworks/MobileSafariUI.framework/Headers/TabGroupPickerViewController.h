// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABGROUPPICKERVIEWCONTROLLER_H
#define TABGROUPPICKERVIEWCONTROLLER_H

@class UIViewController, UICollectionView, UICollectionViewDiffableDataSource, UIBarButtonItem, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, TabGroupProvider;



@interface TabGroupPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate>

 {
    id<TabGroupProvider> *_tabGroupProvider;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    UIBarButtonItem *_doneButton;
    BOOL _isReordering;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldShowCheckmarkForTabGroup:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)_checkmarkAccessory;
-(id)_swipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg1 atCurrentIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)initWithTabGroupProvider:(id)arg0 ;
-(void)_enumerateTabGroupSectionsWithBlock:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)doneButtonTapped;
-(void)loadView;
-(void)reloadData;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif