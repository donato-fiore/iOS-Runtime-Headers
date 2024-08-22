// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSENDMESSAGEACTIONUIKITUSERINTERFACE_H
#define WFSENDMESSAGEACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString, NSArray;
@protocol WFSendMessageActionUserInterface, MFMessageComposeViewControllerDelegate;



@interface WFSendMessageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSendMessageActionUserInterface, MFMessageComposeViewControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *files; // ivar: _files
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)showWithRecipients:(id)arg0 content:(id)arg1 attachments:(id)arg2 completionHandler:(id)arg3 ;
-(void)showWithRecipients:(id)arg0 content:(id)arg1 files:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif