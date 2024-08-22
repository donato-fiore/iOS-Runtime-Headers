// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDCHALLENGEPLAYERPICKERVIEWCONTROLLER_H
#define GKDASHBOARDCHALLENGEPLAYERPICKERVIEWCONTROLLER_H

@class GKChallenge, UIViewController, NSLayoutConstraint, UIBarButtonItem, NSString, UILabel, NSArray, UITextField, UIView, UIButton;
@protocol UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate;


#import "GKDashboardCollectionViewController.h"

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate>



@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) UIViewController *composeController; // ivar: _composeController
@property (nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // ivar: _customizeMessageBottomConstraint
@property (nonatomic) UIBarButtonItem *customizeMessageButton; // ivar: _customizeMessageButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialCustomizeMessageBottomConstraintConstant; // ivar: _initialCustomizeMessageBottomConstraintConstant
@property (nonatomic) UIEdgeInsets initialInsets; // ivar: _initialInsets
@property (retain, nonatomic) NSArray *initiallySelectedPlayers; // ivar: _initiallySelectedPlayers
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) UITextField *messageField; // ivar: _messageField
@property (nonatomic) UIView *scrollingHeader; // ivar: _scrollingHeader
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // ivar: _scrollingHeaderTopConstraint
@property (nonatomic) CGFloat scrollingHeaderTopConstraintConstant; // ivar: _scrollingHeaderTopConstraintConstant
@property (nonatomic) UIButton *sendButton; // ivar: _sendButton
@property (nonatomic) BOOL shouldApplyInitialOffset; // ivar: _shouldApplyInitialOffset
@property (nonatomic) BOOL shouldIgnoreClearSelection; // ivar: _shouldIgnoreClearSelection
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithChallenge:(id)arg0 initiallySelectedPlayers:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_updateButtonEnableState;
-(void)addMessage:(id)arg0 ;
-(void)adjustCustomizeMessageConstraint;
-(void)applyInitialContentOffset;
-(void)cancel:(id)arg0 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)loadData;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)selectPlayersAtIndexPaths:(id)arg0 ;
-(void)send:(id)arg0 ;
-(void)setSearchText:(id)arg0 ;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif