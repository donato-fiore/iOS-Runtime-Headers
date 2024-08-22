// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTAKEVIDEOACTIONUIKITUSERINTERFACE_H
#define WFTAKEVIDEOACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakeVideoActionUserInterface;



@interface WFTakeVideoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakeVideoActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


+(NSInteger)cameraDeviceFromString:(id)arg0 ;
+(NSInteger)qualityFromString:(id)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithOutput:(id)arg0 error:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)showWithQuality:(id)arg0 device:(id)arg1 startImmediately:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif