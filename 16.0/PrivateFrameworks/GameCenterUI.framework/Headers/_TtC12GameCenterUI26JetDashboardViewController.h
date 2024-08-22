// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI26JETDASHBOARDVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI26JETDASHBOARDVIEWCONTROLLER_H

@class TtC12GameCenterUI33BaseSplitCollectionViewController, PSRootController, PSSpecifier, UICollectionViewCompositionalLayout;
@protocol GKPlayerAvatarViewDelegate;


#import "_TtC12GameCenterUI18BaseSplitPresenter.h"

@interface _TtC12GameCenterUI26JetDashboardViewController : TtC12GameCenterUI33BaseSplitCollectionViewController <GKPlayerAvatarViewDelegate>

 {
    ? dashboardPresenter;
    ? launchContext;
    ? request;
    ? secondaryDiffableDataSource;
    ? clippingLayer;
    ? photoView;
    ? didFinishBootstraping;
    ? didStartBootstraping;
}


@property (nonatomic, retain) PSRootController *_rootController; // ivar: _rootController
@property (nonatomic, retain) PSSpecifier *_specifier; // ivar: _specifier
@property (nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
@property (nonatomic, retain) UICollectionViewCompositionalLayout *secondaryCompositionalLayout; // ivar: secondaryCompositionalLayout


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeSecondaryLayout;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)didSelectPlayerAvatarView:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif