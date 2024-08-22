// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCHOOSEFROMLISTACTIONUIKITUSERINTERFACE_H
#define WFCHOOSEFROMLISTACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFChooseFromListActionUserInterface, WFChooseImageViewControllerDelegate, UIPopoverPresentationControllerDelegate;



@interface WFChooseFromListActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFChooseFromListActionUserInterface, WFChooseImageViewControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)chooseImageController:(id)arg0 didSelectItems:(id)arg1 ;
-(void)chooseImageControllerDidCancel:(id)arg0 ;
-(void)finishWithContent:(id)arg0 error:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showImagesWithPrompt:(id)arg0 canSelectAll:(BOOL)arg1 canSelectMultiple:(BOOL)arg2 inputItems:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif