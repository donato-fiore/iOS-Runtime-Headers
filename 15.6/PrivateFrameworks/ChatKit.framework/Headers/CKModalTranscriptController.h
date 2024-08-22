// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMODALTRANSCRIPTCONTROLLER_H
#define CKMODALTRANSCRIPTCONTROLLER_H

@class NSMutableArray;


#import "CKShareSheetChatController.h"
#import "CKChatEagerUploadController.h"

@interface CKModalTranscriptController : CKShareSheetChatController {
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    BOOL _cameraSelectionDisabled;
}


@property (nonatomic) BOOL appearCompleted; // ivar: _appearCompleted
@property (retain, nonatomic) NSMutableArray *deferredInsertMediaObjectBlocks; // ivar: _deferredInsertMediaObjectBlocks
@property (retain, nonatomic) CKChatEagerUploadController *eagerUploadController; // ivar: _eagerUploadController
@property (nonatomic) BOOL forceMMS; // ivar: _forceMMS
@property (nonatomic) CGRect frameOfSpaceCoveredByKeyboard; // ivar: _frameOfSpaceCoveredByKeyboard
@property (nonatomic) BOOL mimeType; // ivar: _mimeType


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
-(void)disableCameraAttachments;
-(void)hideEntryViewContent:(BOOL)arg0 ;
-(void)insertData:(id)arg0 MIMEType:(id)arg1 exportedFilename:(id)arg2 ;
-(void)insertFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 fullyRealizedPreview:(id)arg3 rawPreview:(id)arg4 appendedVideoURL:(id)arg5 completion:(id)arg6 ;
-(void)insertMessage:(id)arg0 appProxy:(id)arg1 ;
-(void)insertRichLinkWithURL:(id)arg0 data:(id)arg1 ;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)registerForNotifications;
-(void)sendComposition:(id)arg0 ;
-(void)setCanEditRecipients:(BOOL)arg0 ;
-(void)setComposition:(id)arg0 ;
-(void)setEntryView:(id)arg0 ;
-(void)setPendingAddresses:(id)arg0 ;
-(void)setShouldDisableEntryField:(BOOL)arg0 ;
-(void)setTextEntryContentsVisible:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif