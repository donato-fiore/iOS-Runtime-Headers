// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI30ACHIEVEMENTSLISTVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI30ACHIEVEMENTSLISTVIEWCONTROLLER_H

@class TtC12GameCenterUI18BaseViewController, NSArray;
@protocol UICollectionViewDelegate;



@interface _TtC12GameCenterUI30AchievementsListViewController : TtC12GameCenterUI18BaseViewController <UICollectionViewDelegate>

 {
    ? bootstrapPresenter;
    ? presenter;
    ? gamesListStatePresenter;
    ? achivementsStatePresenter;
    ? gamesListCollectionView;
    ? achievementsCollectionView;
    ? gamesListDiffableDataSource;
    ? achievementsCollectionContent;
    ? gamesListComponents;
    ? gamesListBackgroundView;
    ? loadingView;
    ? emptyStateView;
    ? showLoadingViewTimer;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif