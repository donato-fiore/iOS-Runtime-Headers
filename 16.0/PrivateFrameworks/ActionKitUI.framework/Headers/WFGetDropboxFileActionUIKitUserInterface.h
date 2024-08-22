// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGETDROPBOXFILEACTIONUIKITUSERINTERFACE_H
#define WFGETDROPBOXFILEACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFGetDropboxFileActionUserInterface, UIAdaptivePresentationControllerDelegate;



@interface WFGetDropboxFileActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFGetDropboxFileActionUserInterface, UIAdaptivePresentationControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(id)selectedStorageServiceForName:(id)arg0 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithResults:(id)arg0 error:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithServiceName:(id)arg0 directoryPath:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif