// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMAILACTIVITY_H
#define UIMAILACTIVITY_H

@class NSString, MFMailComposeViewController;
@protocol UIStateRestoring, UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, UICollaborationActivity, SFCollaborationItem, SFCollaborationService;


#import "UIActivity.h"

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, UICollaborationActivity>

 {
    os_unfair_lock_s _canSendMailLock;
    BOOL _canSendMailChecked;
    BOOL _managesOwnPresentationChecked;
    ? _canSendMail;
    BOOL _didPresentModally;
}


@property (retain, nonatomic) NSString *autosaveIdentifier; // ivar: _autosaveIdentifier
@property (retain, nonatomic) NSObject<SFCollaborationItem> *collaborationItem; // ivar: _collaborationItem
@property (weak, nonatomic) NSObject<SFCollaborationService> *collaborationService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAnyAccount; // ivar: _hasAnyAccount
@property (nonatomic) BOOL hasValidAccountForSending; // ivar: _hasValidAccountForSending
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCollaborative;
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (nonatomic) BOOL keyboardVisible; // ivar: _keyboardVisible
@property (retain, nonatomic) MFMailComposeViewController *mailComposeViewController; // ivar: _mailComposeViewController
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly, nonatomic) NSObject<UIStateRestoring> *restorationParent;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *sourceApplicationBundleID; // ivar: _sourceApplicationBundleID
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
+(id)applicationBundleID;
-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_managesOwnPresentation;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_restoreDraft;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)canShareURLThroughMail:(id)arg0 ;
-(id)_backgroundPreheatBlock:(SEL)arg0 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(id)_mailDraftRestorationURL;
-(id)_stateRestorationDraftIsAvailable;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)init;
-(struct ? )_checkCanSendMail;
-(void)_cleanup;
-(void)_deleteMailDraftIdentifierRestorationArchive:(id)arg0 ;
-(void)_prepareWithActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)_saveDraft:(id)arg0 ;
-(void)_setMailSubject:(id)arg0 ;
-(void)autosaveWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)setRecipients:(id)arg0 ;


@end


#endif