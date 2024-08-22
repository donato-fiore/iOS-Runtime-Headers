// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSHARINGACCEPTFLOWOPERATION_H
#define BRCSHARINGACCEPTFLOWOPERATION_H

@class BRCOperation, NSArray, NSURL, CKRecordID, CKShareMetadata, NSString;
@protocol LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass, BRCUserNotifier, OS_dispatch_queue;


#import "BRCAccountSession.h"
#import "BRCItemID.h"
#import "BRCClientZone.h"
#import "BRCAppLibrary.h"
#import "BRCXPCClient.h"

@interface BRCSharingAcceptFlowOperation : BRCOperation <LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass>

 {
    id<BRCUserNotifier> *_userNotification;
    BRCAccountSession *_session;
    NSArray *_acceptationFlow;
    NSUInteger _stepIndex;
    NSURL *_shareURL;
    CKRecordID *_shareID;
    CKShareMetadata *_shareMetadata;
    BRCItemID *_linkItemID;
    BRCItemID *_rootItemID;
    NSString *_unsaltedBookmarkData;
    BRCClientZone *_clientZone;
    BRCAppLibrary *_appLibrary;
    BOOL _needsZoneAndAppLibraryActivation;
    NSURL *_liveFileURL;
    NSString *_rootFilename;
    NSString *_linkFilename;
    BRCXPCClient *_xpcClient;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL skipOpenInApp; // ivar: _skipOpenInApp
@property (readonly) Class superclass;


+(Class)userNotificationClass;
+(id)_runningShareIDs;
+(void)_openAppStoreForShareURL:(id)arg0 ;
+(void)_openShareURLInWebBrowser:(id)arg0 withReason:(id)arg1 ;
+(void)_openiCloudSettings;
-(BOOL)_isDirectoryLinkInsideFolderShare;
-(BOOL)_isDocumentLinkInsideFolderShare;
-(BOOL)_isFolderShare;
-(BOOL)_isLinkInsideFolderShare;
-(BOOL)_isOwner;
-(BOOL)_isOwnerOrShareAlreadyAccepted;
-(BOOL)_isiWorkLinkInsideFolderShare;
-(BOOL)_isiWorkShare;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)_stepNameAtIndex:(NSUInteger)arg0 withPrefix:(id)arg1 ;
-(id)createActivity;
-(id)initWithShareMetadata:(id)arg0 client:(id)arg1 session:(id)arg2 ;
-(id)subclassableDescriptionWithContext:(id)arg0 ;
-(void)_acceptShareURL;
-(void)_activateSharedZoneIfNeeded;
-(void)_captureOpenInfoFromDocument:(id)arg0 ;
-(void)_checkIfShouldWaitUntilDownloadCompletion;
-(void)_createSideFaultOnDisk;
-(void)_endAcceptationFlow;
-(void)_isAccountRestricted;
-(void)_isAppInstalled;
-(void)_isFolderSharingSupported;
-(void)_isUserSignedInToiCloudDrive;
-(void)_jumpToSelector:(SEL)arg0 ;
-(void)_jumpToSelectorInQueue:(SEL)arg0 ;
-(void)_locateSharedItemOnDisk;
-(void)_openDocumentInDocumentsAppIfInstalled:(id)arg0 ;
-(void)_openSharedItemIfStillNeeded;
-(void)_openSharedSideFaultFile;
-(void)_openSharedSideFaultFileWithAppID:(id)arg0 ;
-(void)_openiWorkAppPreemptively;
-(void)_parseShareMetadata;
-(void)_performNextStep;
-(void)_performNextStepInQueue;
-(void)_prepareToDownloadSharedDocument;
-(void)_setSpotlightAttribute;
-(void)_showGenericErrorAndFinish:(id)arg0 ;
-(void)_showSharingJoinDialog;
-(void)_waitForSharedItemToBeOnDiskOnOwner;
-(void)_waitForSharedItemToBeOnDiskOnRecipient;
-(void)_waitForSharedItemToSyncDownOnOwner;
-(void)_waitForSharedItemToSyncDownOnRecipient;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)moveDialogToFront;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperationDidComplete:(id)arg0 ;


@end


#endif