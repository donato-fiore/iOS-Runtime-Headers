// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTEXTENSIONVIEWCONTROLLER_H
#define CKTRANSCRIPTEXTENSIONVIEWCONTROLLER_H

@class UINavigationController, NSString, NSUUID, NSExtension;
@protocol CKChatControllerDelegate;


#import "CKDetailsNavigationController.h"

@interface CKTranscriptExtensionViewController : UINavigationController <CKChatControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CKDetailsNavigationController *detailsNavigationController; // ivar: _detailsNavigationController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (readonly) Class superclass;
@property (weak, nonatomic) NSExtension *weakExtension; // ivar: _weakExtension


+(void)initialize;
-(void)chatController:(id)arg0 didReportSpamForConversation:(id)arg1 ;
-(void)chatController:(id)arg0 didSendCompositionInConversation:(id)arg1 ;
-(void)chatController:(id)arg0 forwardComposition:(id)arg1 ;
-(void)chatController:(id)arg0 requestDeleteJunkConversation:(id)arg1 ;
-(void)chatController:(id)arg0 requestRecoverJunkConversation:(id)arg1 ;
-(void)chatController:(id)arg0 willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)doneButtonPressedForChatController:(id)arg0 ;
-(void)presentConversationWithMessageGUID:(id)arg0 attachmentGUID:(id)arg1 ;
-(void)presentDetailsNavigationController:(id)arg0 ;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif