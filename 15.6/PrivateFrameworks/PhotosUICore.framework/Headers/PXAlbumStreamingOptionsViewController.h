// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXALBUMSTREAMINGOPTIONSVIEWCONTROLLER_H
#define PXALBUMSTREAMINGOPTIONSVIEWCONTROLLER_H

@class UIViewController, NSString, UIBarButtonItem, UITableView, UISwitch, NSOperationQueue, ACAccountStore, NSArray, AAUIProfilePictureStore, NSMutableDictionary, PLCloudSharedAlbumInvitationRecord, PLCloudSharedAlbum;
@protocol PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate, PXAlbumStreamingOptionsViewControllerDelegate;



@interface PXAlbumStreamingOptionsViewController : UIViewController <PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate>

 {
    NSString *_visiblePublicURL;
    BOOL _showShareLink;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UITableView *_optionsTableView;
    UISwitch *_wantsPublicWebsiteSwitch;
    UISwitch *_wantsMultipleContributorsSwitch;
    UISwitch *_wantsAcceptCloudNotificationSwitch;
    NSUInteger _addSubscribersRow;
    NSOperationQueue *_familyRequestQueue;
    ACAccountStore *_familyAccountStore;
    NSArray *_familyMembers;
    AAUIProfilePictureStore *_familyMemberPictureStore;
    NSMutableDictionary *_familyProfilePictures;
}


@property (copy, nonatomic, setter=_setLastMultiContributorsSectionFooterTitle:) NSString *_lastMultiContributorsSectionFooterTitle; // ivar: __lastMultiContributorsSectionFooterTitle
@property (copy, nonatomic, setter=_setLastPublicURLSectionFooterTitle:) NSString *_lastPublicURLSectionFooterTitle; // ivar: __lastPublicURLSectionFooterTitle
@property (retain, nonatomic, setter=_setSelectedSubscriberInvitationRecord:) PLCloudSharedAlbumInvitationRecord *_selectedSubscriberInvitationRecord; // ivar: __selectedSubscriberInvitationRecord
@property (nonatomic, setter=_setShouldScrollToTopOnNextViewLayout:) BOOL _shouldScrollToTopOnNextViewLayout; // ivar: __shouldScrollToTopOnNextViewLayout
@property (nonatomic, setter=_setShowingPublicURLActivitySpinner:) BOOL _showingPublicURLActivitySpinner; // ivar: __showingPublicURLActivitySpinner
@property (retain, nonatomic) PLCloudSharedAlbum *album; // ivar: _album
@property (nonatomic) BOOL albumIsFamilyStream; // ivar: _albumIsFamilyStream
@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXAlbumStreamingOptionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPresentedModally) BOOL presentedModally; // ivar: _presentedModally
@property (retain, nonatomic) NSArray *sharedAlbumSubscribers; // ivar: _sharedAlbumSubscribers
@property (nonatomic) BOOL streamOwner; // ivar: _streamOwner
@property (readonly) Class superclass;


-(BOOL)_multipleContributorsEnabled;
-(BOOL)_publicURLEnabled;
-(BOOL)_shouldShowPublicURLActivitySpinner;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_personViewControllerSubscriberInfo:(id)arg0 canResendInvitation:(BOOL)arg1 canRemoveSubscriber:(BOOL)arg2 ;
-(id)_suppressionContexts;
-(id)initWithAlbum:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPHAlbum:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(struct CGSize )contentSizeForViewInPopover;
-(void)_changeWantsAcceptCloudNotification:(id)arg0 ;
-(void)_changeWantsMultipleContributors:(id)arg0 ;
-(void)_changeWantsPublicWebsite:(id)arg0 ;
-(void)_deletePhotoStream;
-(void)_displayActivitySheet;
-(void)_displayConfirmationForRemovalOfSelectedSubscriber;
-(void)_displayConfirmationWithMessage:(id)arg0 destructiveTitle:(id)arg1 actionHandler:(id)arg2 ;
-(void)_displayDeleteConfirmation:(id)arg0 ;
-(void)_doneAction:(id)arg0 ;
-(void)_handleCompletionWithReason:(int)arg0 ;
-(void)_removeSelectedSubscriber;
-(void)_resendInvitationToSelectedSubscriber;
-(void)_setShowingMultipleContributorSpinner:(BOOL)arg0 ;
-(void)_updateAllControls;
-(void)_updateMultipleContributorsState;
-(void)_updateNavigationItem;
-(void)_updatePublicURLStateIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_updateWantsAcceptCloudNotificationField;
-(void)_updateWantsMultipleContributorsField;
-(void)_updateWantsPublicWebsiteField;
-(void)dealloc;
-(void)invitationRecordsDidChange:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif