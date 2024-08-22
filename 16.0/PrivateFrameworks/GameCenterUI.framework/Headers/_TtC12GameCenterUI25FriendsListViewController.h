// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI25FRIENDSLISTVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI25FRIENDSLISTVIEWCONTROLLER_H

@class TtC12GameCenterUI28BaseCollectionViewController;
@protocol UISearchResultsUpdating, UISearchControllerDelegate;



@interface _TtC12GameCenterUI25FriendsListViewController : TtC12GameCenterUI28BaseCollectionViewController <UISearchResultsUpdating, UISearchControllerDelegate>

 {
    ? bootstrapPresenter;
    ? statePresenter;
    ? compositionalLayout;
    ? diffableDataSource;
    ? components;
    ? searchController;
}




-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif