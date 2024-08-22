// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCHALLENGEPLAYERPICKERVIEWCONTROLLER_H
#define GKCHALLENGEPLAYERPICKERVIEWCONTROLLER_H

@class UIButton, GKChallenge, UIViewController, NSString, UILabel, NSArray, UITextField, UIView, NSLayoutConstraint, UISearchBar;
@protocol GKComposeControllerDelegate, GKDaemonProxyDataUpdateDelegate;


#import "GKDashboardCollectionViewController.h"

@interface GKChallengePlayerPickerViewController : GKDashboardCollectionViewController <GKComposeControllerDelegate, GKDaemonProxyDataUpdateDelegate>



@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) UIViewController *composeController; // ivar: _composeController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers; // ivar: _initiallySelectedPlayers
@property (copy, nonatomic) id *inviteFriendHandler; // ivar: _inviteFriendHandler
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) UITextField *messageField; // ivar: _messageField
@property (nonatomic) UIView *scrollingHeader; // ivar: _scrollingHeader
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // ivar: _scrollingHeaderTopConstraint
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (nonatomic) UIButton *sendButton; // ivar: _sendButton
@property (nonatomic) BOOL shouldApplyInitialOffset; // ivar: _shouldApplyInitialOffset
@property (nonatomic) BOOL shouldIgnoreClearSelection; // ivar: _shouldIgnoreClearSelection
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithChallenge:(id)arg0 initiallySelectedPlayers:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)addMessage:(id)arg0 ;
-(void)applyInitialContentOffset;
-(void)cancel:(id)arg0 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureButtonsFocusEffect;
-(void)configureCollectionView;
-(void)configureFocusGuides;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)loadData;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)selectPlayersAtIndexPaths:(id)arg0 ;
-(void)send:(id)arg0 ;
-(void)setSearchText:(id)arg0 ;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateButtonEnableState;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif