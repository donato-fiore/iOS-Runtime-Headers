// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI26GKSUGGESTIONSCONTAINERCELL_H
#define _TTC12GAMECENTERUI26GKSUGGESTIONSCONTAINERCELL_H

@class TtC12GameCenterUI30GKSuggestionsContainerBaseCell, UIView, NSLayoutConstraint, UIViewController, UICollectionView;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TtP12GameCenterUI33GKSuggestionsPlayerSelectionProxy_, _TtP12GameCenterUI22GKPickerGroupCellProxy_;



@interface _TtC12GameCenterUI26GKSuggestionsContainerCell : TtC12GameCenterUI30GKSuggestionsContainerBaseCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TtP12GameCenterUI33GKSuggestionsPlayerSelectionProxy_, _TtP12GameCenterUI22GKPickerGroupCellProxy_>

 {
    ? dataSourceIdentifier;
    ? suggestionsDelegate;
    ? nearbyPlayers;
    ? suggestionsDataSource;
    ? horizontalInset;
    ? dataLoaded;
    ? nearbyIconTapHandler;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, weak) UIView *containerView; // ivar: containerView
@property (nonatomic, weak) NSLayoutConstraint *containerViewLeadingConstraint; // ivar: containerViewLeadingConstraint
@property (nonatomic, weak) NSLayoutConstraint *containerViewTrailingConstraint; // ivar: containerViewTrailingConstraint
@property (nonatomic, copy) id *nearbyIconTapHandler;
@property (nonatomic, weak) UIViewController *presentationViewController; // ivar: presentationViewController
@property (nonatomic, weak) UICollectionView *suggestionsCollectionView; // ivar: suggestionsCollectionView


+(CGFloat)defaultCellHeight;
+(id)reuseIdentifier;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)playerIsSelectable:(id)arg0 ;
-(BOOL)playerIsSelected:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)getMaxPlayerCount;
-(NSInteger)getSelectedPlayerCount;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)getSuggestedPlayerGroups;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)awakeFromNib;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureWithDelegate:(id)arg0 nearbyPlayers:(id)arg1 ;
-(void)didAttemptSelectingAlreadySelectedPlayers:(id)arg0 inGroup:(id)arg1 ;
-(void)didDeselectPlayerGroup:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)didDeselectPlayers:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)didExceedAvailablePlayers;
-(void)didSelectPlayerGroup:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)didSelectPlayers:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)donateGroupToPeopleSuggester:(id)arg0 ;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateNearbyPlayers:(id)arg0 ;
-(void)updateVisibleItemsWithPlayers:(id)arg0 excludedIndexPath:(id)arg1 ;


@end


#endif