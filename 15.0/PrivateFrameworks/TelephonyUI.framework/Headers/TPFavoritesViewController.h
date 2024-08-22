// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPFAVORITESVIEWCONTROLLER_H
#define TPFAVORITESVIEWCONTROLLER_H

@class UICollectionViewController, CNContactFormatter, UIView, NSArray, NSIndexSet;


#import "TPFavoritesController.h"

@interface TPFavoritesViewController : UICollectionViewController

@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (nonatomic) BOOL contentUnavailable; // ivar: _contentUnavailable
@property (retain, nonatomic) UIView *contentUnavailableView; // ivar: _contentUnavailableView
@property (readonly, nonatomic) TPFavoritesController *favoritesController; // ivar: _favoritesController
@property (copy, nonatomic) NSArray *favoritesEntries; // ivar: _favoritesEntries
@property (retain, nonatomic) NSIndexSet *sections; // ivar: _sections


+(id)avatarViewControllerSettings;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)useAccessibileLayout;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)cellHeightToFitWidgetContainedCollectionView:(id)arg0 layout:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)favoritesEntryAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )accessibleCellSizeFor:(id)arg0 layout:(id)arg1 ;
-(struct CGSize )cellSizeFor:(id)arg0 layout:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)commonInit;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)handleFavoritesControllerFavoritesEntriesDidChangeNotification:(id)arg0 ;
-(void)postCNContactsClientDidDisplayFavoritesNotification;
-(void)refreshView;
-(void)refreshViewAnimated:(BOOL)arg0 ;
-(void)relayoutCollectionView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif