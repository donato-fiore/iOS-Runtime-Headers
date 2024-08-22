// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSELECTFILESUIKITUSERINTERFACE_H
#define WFSELECTFILESUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFFilePickerUserInterface, UIDocumentPickerDelegate;



@interface WFSelectFilesUIKitUserInterface : WFEmbeddableActionUserInterface <WFFilePickerUserInterface, UIDocumentPickerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *consumingBundleID; // ivar: _consumingBundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(id)supportedPickerContentTypesWithOptions:(NSUInteger)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)finishWithResults:(id)arg0 error:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)retrieveFilesWithConsumingBundleID:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif