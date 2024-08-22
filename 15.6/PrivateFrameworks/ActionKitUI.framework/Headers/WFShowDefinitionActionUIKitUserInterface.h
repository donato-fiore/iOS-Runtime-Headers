// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHOWDEFINITIONACTIONUIKITUSERINTERFACE_H
#define WFSHOWDEFINITIONACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFReferenceLibraryViewControllerDelegate, WFShowDefinitionActionUserInterface, UIAdaptivePresentationControllerDelegate;



@interface WFShowDefinitionActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFReferenceLibraryViewControllerDelegate, WFShowDefinitionActionUserInterface, UIAdaptivePresentationControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)libraryControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithString:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif