// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFOPENINACTIONUIKITUSERINTERFACE_H
#define WFOPENINACTIONUIKITUSERINTERFACE_H

@class WFActionUserInterface, NSString, UIDocumentInteractionController;
@protocol UIDocumentInteractionControllerDelegate, WFOpenInActionUserInterface;



@interface WFOpenInActionUIKitUserInterface : WFActionUserInterface <UIDocumentInteractionControllerDelegate, WFOpenInActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDocumentInteractionController *documentController; // ivar: _documentController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(id)excludedActivityTypesForDocumentInteractionController:(id)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)showWithFile:(id)arg0 contentManaged:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif