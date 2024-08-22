// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSELECTPHOTOACTIONUIKITUSERINTERFACE_H
#define WFSELECTPHOTOACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectPhotoActionUserInterface;



@interface WFSelectPhotoActionUIKitUserInterface : WFEmbeddableActionUserInterface <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectPhotoActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithOutput:(id)arg0 error:(id)arg1 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithPhotoPickerTypes:(id)arg0 selectMultiple:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif