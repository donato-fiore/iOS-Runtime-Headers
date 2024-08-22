// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDMULTIPLAYERPICKERVIEWCONTROLLEROBSOLETE_H
#define GKDASHBOARDMULTIPLAYERPICKERVIEWCONTROLLEROBSOLETE_H

@class UIVisualEffectView, CNContactPickerViewController, NSLayoutConstraint, UIButton, NSString, UILabel, NSArray, UITextField, UIView;
@protocol UITextFieldDelegate, GKDashboardMultiplayerPickerDatasourceDelegateObsolete, CNContactPickerDelegate, GKDashboardMultiplayerPickerDelegateObsolete, GKDashboardNearbyBrowserDelegate;


#import "GKDashboardCollectionViewController.h"
#import "GKDashboardMultiplayerPickerDataSourceObsolete.h"
#import "GKPickerSearchTextFieldObsolete.h"

@interface GKDashboardMultiplayerPickerViewControllerObsolete : GKDashboardCollectionViewController <UITextFieldDelegate, GKDashboardMultiplayerPickerDatasourceDelegateObsolete, CNContactPickerDelegate>



@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) CNContactPickerViewController *contactPicker; // ivar: _contactPicker
@property (retain, nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // ivar: _customizeMessageBottomConstraint
@property (retain, nonatomic) UIButton *customizeMessageButton; // ivar: _customizeMessageButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialCustomizeMessageBottomConstraintConstant; // ivar: _initialCustomizeMessageBottomConstraintConstant
@property (retain, nonatomic) NSArray *initiallySelectedPlayers; // ivar: _initiallySelectedPlayers
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) UITextField *messageField; // ivar: _messageField
@property (weak, nonatomic) NSObject<GKDashboardMultiplayerPickerDelegateObsolete> *multiplayerPickerDelegate; // ivar: _multiplayerPickerDelegate
@property (nonatomic) NSObject<GKDashboardNearbyBrowserDelegate> *nearbyDelegate; // ivar: _nearbyDelegate
@property (readonly, nonatomic) BOOL nearbyOnly;
@property (readonly, nonatomic) GKDashboardMultiplayerPickerDataSourceObsolete *pickerDataSource;
@property (retain, nonatomic) UIView *searchBackgroundView; // ivar: _searchBackgroundView
@property (retain, nonatomic) GKPickerSearchTextFieldObsolete *searchTextField; // ivar: _searchTextField
@property (retain, nonatomic) UIButton *sendButton; // ivar: _sendButton
@property (nonatomic) BOOL shouldIgnoreClearSelection; // ivar: _shouldIgnoreClearSelection
@property (retain, nonatomic) UIButton *showContactPickerButton; // ivar: _showContactPickerButton
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsNearby;


-(BOOL)hasData;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)blurEffectForTraitCollection:(id)arg0 ;
-(id)createSortPickerMenu;
-(id)initWithMaxSelectable:(NSInteger)arg0 hiddenPlayers:(id)arg1 nearbyOnly:(BOOL)arg2 ;
-(id)preferredFocusEnvironments;
-(struct UIEdgeInsets )collectionSectionInset;
-(void)_updateButtonEnableState;
-(void)_updateCollectionView;
-(void)addMessage:(id)arg0 ;
-(void)adjustCustomizeMessageConstraint;
-(void)cancel:(id)arg0 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)didBeginSearchTextEditing;
-(void)didEndSearchTextEditing;
-(void)didPressShowContactPickerButton:(id)arg0 ;
-(void)handleSearchTextFieldReturn:(id)arg0 ;
-(void)pickerDatasource:(id)arg0 didPickPlayers:(id)arg1 ;
-(void)pickerDatasourceDidSelectAddFriend:(id)arg0 ;
-(void)selectPlayersAtIndexPaths:(id)arg0 askDelegateFirst:(BOOL)arg1 ;
-(void)send:(id)arg0 ;
-(void)setSearchText:(id)arg0 ;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif