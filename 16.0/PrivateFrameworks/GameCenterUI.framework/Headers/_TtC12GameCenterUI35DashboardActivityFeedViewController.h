// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI35DASHBOARDACTIVITYFEEDVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI35DASHBOARDACTIVITYFEEDVIEWCONTROLLER_H

@class TtC12GameCenterUI31BaseJetCollectionViewController;
@protocol GKPlayerAvatarViewDelegate;



@interface _TtC12GameCenterUI35DashboardActivityFeedViewController : TtC12GameCenterUI31BaseJetCollectionViewController <GKPlayerAvatarViewDelegate>

 {
    ? activityFeedPresenter;
}




-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeLayout;
-(struct NSDirectionalEdgeInsets )collectionViewFrameInsets;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif