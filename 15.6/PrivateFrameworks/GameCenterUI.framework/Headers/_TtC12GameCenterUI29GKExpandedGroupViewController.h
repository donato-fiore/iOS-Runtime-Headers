// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI29GKEXPANDEDGROUPVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI29GKEXPANDEDGROUPVIEWCONTROLLER_H

@class TtC12GameCenterUI33GKExpandedGroupBaseViewController, UICollectionView, NSLayoutConstraint, UIView, UILabel, UIVisualEffectView;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, _TtP12GameCenterUI37GKExpandedGroupViewControllerDelegate_;



@interface _TtC12GameCenterUI29GKExpandedGroupViewController : TtC12GameCenterUI33GKExpandedGroupBaseViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

 {
    ? cornerRadius;
    ? pickerPlayerCellReuseIdentifier;
    ? pickerPlayerCellReuseIdentifierAX;
    ? dataSourceIdentifier;
    ? playerSelectionProxy;
    ? selectedPlayerCount;
    ? maxPlayerCount;
    ? players;
}


@property (nonatomic, weak) UICollectionView *collectionView; // ivar: collectionView
@property (nonatomic, weak) NSLayoutConstraint *collectionViewHeightConstraint; // ivar: collectionViewHeightConstraint
@property (nonatomic, weak) UIView *container; // ivar: container
@property (nonatomic, weak) NSLayoutConstraint *contentViewWidthConstraint; // ivar: contentViewWidthConstraint
@property (nonatomic, weak) NSObject<_TtP12GameCenterUI37GKExpandedGroupViewControllerDelegate_> *delegate; // ivar: delegate
@property (nonatomic, weak) UILabel *titleLabel; // ivar: titleLabel
@property (nonatomic, weak) UIVisualEffectView *visualEffectView; // ivar: visualEffectView


-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)configureWithPlayers:(id)arg0 groupName:(id)arg1 caption:(id)arg2 playerSelectionProxy:(id)arg3 ;
-(void)dismissView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif