// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI25FRIENDSLISTVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI25FRIENDSLISTVIEWCONTROLLER_H

@class TtC12GameCenterUI31BaseJetCollectionViewController;
@protocol UISearchResultsUpdating, UISearchControllerDelegate;


#import "_TtC12GameCenterUI13BasePresenter.h"

@interface _TtC12GameCenterUI25FriendsListViewController : TtC12GameCenterUI31BaseJetCollectionViewController <UISearchResultsUpdating, UISearchControllerDelegate>

 {
    ? friendsPresenter;
    ? searchController;
}


@property (nonatomic, retain) _TtC12GameCenterUI13BasePresenter *dataPresenter;


-(id)initWithCoder:(id)arg0 ;
-(id)makeLayout;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif