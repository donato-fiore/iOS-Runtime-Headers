// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIIMAGEPICKERALERTCONTROLLER_H
#define AAUIIMAGEPICKERALERTCONTROLLER_H

@class UIViewController, NSString;
@protocol UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate;



@interface AAUIImagePickerAlertController : UIViewController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (readonly) Class superclass;


+(id)alertControllerWithSelectionHandler:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)modalPresentationStyle;
-(id)_propertiesForImagePickerController:(id)arg0 ;
-(void)_callSelectionHandlerWithImage:(id)arg0 cropRect:(id)arg1 ;
-(void)_dismissViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentDocumentPickerAnimated:(BOOL)arg0 ;
-(void)_presentImagePickerAnimated:(BOOL)arg0 ;
-(void)_presentImagePickerWithSourceType:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_presentImageSourcePickerAnimated:(BOOL)arg0 ;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif