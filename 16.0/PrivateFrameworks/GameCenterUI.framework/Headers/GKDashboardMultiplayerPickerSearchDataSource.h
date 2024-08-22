// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDMULTIPLAYERPICKERSEARCHDATASOURCE_H
#define GKDASHBOARDMULTIPLAYERPICKERSEARCHDATASOURCE_H

@class NSArray, NSMutableDictionary, UISearchBar;


#import "GKCollectionDataSource.h"

@interface GKDashboardMultiplayerPickerSearchDataSource : GKCollectionDataSource

@property (copy, nonatomic) NSArray *allPlayers; // ivar: _allPlayers
@property (readonly, nonatomic) NSInteger maxSelectable; // ivar: _maxSelectable
@property (retain, nonatomic) NSMutableDictionary *playerStates; // ivar: _playerStates
@property (weak, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (copy, nonatomic) NSArray *searchPlayers; // ivar: _searchPlayers
@property (nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (readonly, nonatomic) NSArray *selectedPlayers;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)itemCount;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithSearchPlayers:(id)arg0 maxSelectable:(NSInteger)arg1 ;
-(id)searchKeyForSection:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchTextHasChanged;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif