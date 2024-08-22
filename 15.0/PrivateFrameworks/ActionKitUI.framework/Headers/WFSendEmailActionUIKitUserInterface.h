// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSENDEMAILACTIONUIKITUSERINTERFACE_H
#define WFSENDEMAILACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol MFMailComposeViewControllerDelegate, WFSendEmailActionUserInterface;



@interface WFSendEmailActionUIKitUserInterface : WFEmbeddableActionUserInterface <MFMailComposeViewControllerDelegate, WFSendEmailActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)showWithEmailContent:(id)arg0 preferredSendingEmailAddress:(id)arg1 isManaged:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif