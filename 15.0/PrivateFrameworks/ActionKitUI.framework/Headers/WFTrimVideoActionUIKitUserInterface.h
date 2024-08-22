// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRIMVIDEOACTIONUIKITUSERINTERFACE_H
#define WFTRIMVIDEOACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, WFFileRepresentation, NSString;
@protocol UIVideoEditorControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, WFTrimVideoActionUserInterface;



@interface WFTrimVideoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIVideoEditorControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, WFTrimVideoActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) WFFileRepresentation *copiedFile; // ivar: _copiedFile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSaved; // ivar: _hasSaved
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(id)copyFileToDealWithBadUIVideoEditorControllerSandboxHandling:(id)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)dismissEditor:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithVideo:(id)arg0 completionHandler:(id)arg1 ;
-(void)videoEditorController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)videoEditorController:(id)arg0 didSaveEditedVideoToPath:(id)arg1 ;
-(void)videoEditorControllerDidCancel:(id)arg0 ;


@end


#endif