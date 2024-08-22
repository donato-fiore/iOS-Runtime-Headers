// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFADDNEWCONTACTACTIONUIKITUSERINTERFACE_H
#define WFADDNEWCONTACTACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFAddNewContactActionUserInterface, CNContactViewControllerDelegate, UIAdaptivePresentationControllerDelegate;



@interface WFAddNewContactActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFAddNewContactActionUserInterface, CNContactViewControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)finishWithContactIdentifier:(id)arg0 error:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithContactParameters:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif