// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMODALTRANSCRIPTCONTROLLER_H
#define CKMODALTRANSCRIPTCONTROLLER_H

@class NSMutableArray;


#import "CKShareSheetChatController.h"
#import "CKChatEagerUploadController.h"

@interface CKModalTranscriptController : CKShareSheetChatController

@property (nonatomic) BOOL alreadySetUp; // ivar: _alreadySetUp
@property (nonatomic) BOOL appearCompleted; // ivar: _appearCompleted
@property (nonatomic) BOOL cameraSelectionDisabled; // ivar: _cameraSelectionDisabled
@property (retain, nonatomic) NSMutableArray *deferredInsertMediaObjectBlocks; // ivar: _deferredInsertMediaObjectBlocks
@property (retain, nonatomic) CKChatEagerUploadController *eagerUploadController; // ivar: _eagerUploadController
@property (nonatomic) int entryViewInvisible; // ivar: _entryViewInvisible
@property (nonatomic) BOOL forceMMS; // ivar: _forceMMS
@property (nonatomic) CGRect frameOfSpaceCoveredByKeyboard; // ivar: _frameOfSpaceCoveredByKeyboard
@property (nonatomic) BOOL mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSMutableArray *partsToInsert; // ivar: _partsToInsert
@property (retain, nonatomic) NSMutableArray *typesToInsert; // ivar: _typesToInsert


-(BOOL)_canShowWhileLocked;
-(BOOL)_deviceIsLocked;
-(BOOL)_insertMediaObject:(id)arg0 ;
-(BOOL)_shouldAllowCameraAttachments;
-(BOOL)_shouldUseDefaultFirstResponder;
-(BOOL)_shouldUseExistingConversations;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg0 ;
-(BOOL)messageEntryViewWidth:(*CGFloat)arg0 andOffset:(*CGFloat)arg1 ;
-(BOOL)shouldDismissAfterSend;
-(CGFloat)_maxEntryViewHeight;
-(CGFloat)_offsetForScreenWidth:(CGFloat)arg0 containerWidth:(CGFloat)arg1 windowOffset:(struct CGPoint )arg2 ;
-(id)initWithNavigationController:(id)arg0 ;
-(id)proposedParticipantHandles;
-(void)_conversationListDidFinishLoading:(id)arg0 ;
-(void)_insertMediaObjectAndReturnFrame:(id)arg0 completion:(id)arg1 ;
-(void)_setConversationDeferredSetup;
-(void)_setEntryViewVisible:(BOOL)arg0 ;
-(void)createCompositionForPluginPayload:(id)arg0 shelfMediaObject:(id)arg1 collaborationShareOptions:(id)arg2 completionHandler:(id)arg3 ;
-(void)disableCameraAttachments;
-(void)hideEntryViewContent:(BOOL)arg0 ;
-(void)insertCKShareForCollaboration:(id)arg0 containerSetupInfo:(id)arg1 collaborationShareOptions:(id)arg2 isCollaboration:(BOOL)arg3 ;
-(void)insertCKShareForCollaboration:(id)arg0 containerSetupInfo:(id)arg1 collaborationShareOptions:(id)arg2 isCollaboration:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)insertData:(id)arg0 MIMEType:(id)arg1 exportedFilename:(id)arg2 ;
-(void)insertFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 fullyRealizedPreview:(id)arg3 rawPreview:(id)arg4 appendedVideoURL:(id)arg5 completion:(id)arg6 ;
-(void)insertFileURLForCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 metadata:(id)arg2 sendAsCopyURL:(id)arg3 isCollaboration:(BOOL)arg4 ;
-(void)insertFileURLForCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 metadata:(id)arg2 sendAsCopyURL:(id)arg3 isCollaboration:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)insertGroupActivity:(id)arg0 ;
-(void)insertMessage:(id)arg0 appProxy:(id)arg1 ;
-(void)insertRichLinkWithCloudKitShare:(id)arg0 containerSetupInfo:(id)arg1 collaborationShareOptions:(id)arg2 isCollaboration:(BOOL)arg3 ;
-(void)insertRichLinkWithCloudKitShare:(id)arg0 containerSetupInfo:(id)arg1 collaborationShareOptions:(id)arg2 isCollaboration:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)insertRichLinkWithURL:(id)arg0 data:(id)arg1 ;
-(void)insertRichLinkWithURL:(id)arg0 sendAsCopyURL:(id)arg1 data:(id)arg2 collaborationType:(NSInteger)arg3 collaborationShareOptions:(id)arg4 metadata:(id)arg5 isCollaboration:(BOOL)arg6 completionHandler:(id)arg7 ;
-(void)insertSWYPendingCollaboration:(id)arg0 collaborationShareOptions:(id)arg1 collaborationMetadata:(id)arg2 sendAsCopyURL:(id)arg3 isCollaboration:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)registerForNotifications;
-(void)sendComposition:(id)arg0 ;
-(void)setCanEditRecipients:(BOOL)arg0 ;
-(void)setComposition:(id)arg0 ;
-(void)setCompositionForPluginPayload:(id)arg0 ;
-(void)setCompositionForPluginPayload:(id)arg0 shelfMediaObject:(id)arg1 collaborationShareOptions:(id)arg2 ;
-(void)setCompositionForPluginPayload:(id)arg0 shelfMediaObject:(id)arg1 collaborationShareOptions:(id)arg2 completionHandler:(id)arg3 ;
-(void)setEntryView:(id)arg0 ;
-(void)setPendingAddresses:(id)arg0 ;
-(void)setShouldDisableEntryField:(BOOL)arg0 ;
-(void)setTextEntryContentsVisible:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif