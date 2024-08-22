// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTPEOPLEPICKERVIEWCONTROLLER_H
#define FTPEOPLEPICKERVIEWCONTROLLER_H

@class UIViewController;



@interface FTPeoplePickerViewController : UIViewController {
    ? availableRecipientTintColor;
    ? unavailableRecipientTintColor;
    ? gondolaRecipientTintColor;
    ? restrictedRecipientTintColor;
    ? constants;
    ? callProviderManager;
    ? senderIdentityPillView;
    ? searchController;
    ? viewModel;
    ? style;
    ? videoButton;
    ? audioButton;
    ? addPeopleButton;
    ? stackView;
    ? possibleRecipients;
    ? loggedInvalidRecipients;
    ? existingAddresses;
    ? idsDestinations;
    ? idsGroupDestinations;
    ? meHandles;
    ? restrictionPolicy;
    ? keyboardHeight;
    ? selectedSenderIdentity;
    ? actionBar;
    ? currentConversation;
    ? currentConversationLink;
    ? $__lazy_storage_$_smsAccount;
    ? $__lazy_storage_$_maxParticipantLimit;
    ? delegate;
    ? appName;
    ? stagedActivity;
    ? initialRecipientDestinations;
    ? linkShareCoordinator;
    ? scheduleIDSQuerySubject;
    ? scheduleIDSQueryGroupSubject;
    ? scheduleIDSCachedQuerySubject;
    ? scheduleIDSQueryDebouncer;
    ? scheduleIDSQueryGroupDebouncer;
    ? scheduleIDSCachedQueryDebouncer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 existingAddresses:(id)arg1 currentConversation:(id)arg2 stagedActivity:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDismissViewAnimated:(BOOL)arg0 ;


@end


#endif