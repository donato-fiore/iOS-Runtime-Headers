// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTURNBASEDMATCHDETAILVIEWCONTROLLER_H
#define GKTURNBASEDMATCHDETAILVIEWCONTROLLER_H

@class GKGame, GKTurnBasedMatch;
@protocol GKTurnBasedMatchDetailViewControllerDelegate;


#import "GKBasicCollectionViewController.h"
#import "GKTurnBasedMatchDetailHeaderView.h"
#import "GKTurnBasedParticipantsDataSource.h"

@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController

@property (weak, nonatomic) NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate; // ivar: _delegateWeak
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (retain, nonatomic) GKTurnBasedMatchDetailHeaderView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat initialSectionHeaderHeight; // ivar: _initialSectionHeaderHeight
@property (nonatomic) BOOL isInGame; // ivar: _isInGame
@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (retain, nonatomic) GKTurnBasedParticipantsDataSource *participantsDataSource; // ivar: _participantsDataSource
@property (nonatomic) BOOL shouldShowPlay; // ivar: _shouldShowPlay
@property (nonatomic) BOOL shouldShowQuit; // ivar: _shouldShowQuit


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(id)_gkRepresentedObject;
-(id)init;
-(id)preferredFocusEnvironments;
-(void)acceptInvitation:(id)arg0 ;
-(void)addBackgroundVisualEffect;
-(void)buyButtonPressed:(id)arg0 ;
-(void)chooseMatch:(id)arg0 ;
-(void)configureDataSource;
-(void)configureHeader:(id)arg0 indexPath:(id)arg1 ;
-(void)configureMatchDetailHeader:(id)arg0 ;
-(void)configureViewFactories;
-(void)dealloc;
-(void)declineInvitation:(id)arg0 ;
-(void)didEnterNoContentState;
-(void)didUpdateModel;
-(void)doneButtonPressed:(id)arg0 ;
-(void)handleTurnBasedEvent:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)quitMatch:(id)arg0 ;
-(void)removeMatch:(id)arg0 ;
-(void)setActionButtonEnabled:(BOOL)arg0 ;
-(void)setupActionButton;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUIBasedOnTraitCollection;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif