// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHAREEXTENSIONACTIONUIKITUSERINTERFACE_H
#define WFSHAREEXTENSIONACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface;



@interface WFShareExtensionActionUIKitUserInterface : WFEmbeddableActionUserInterface

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)contentItemClassesFromInputConfiguration:(id)arg0 ;
-(id)inputContentItemClassesFromInputConfiguration:(id)arg0 ;
-(void)addContentToShareController:(id)arg0 withInput:(id)arg1 inputConfiguration:(id)arg2 extensionUserInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithContentCollection:(id)arg0 error:(id)arg1 ;
-(void)performActionWithInput:(id)arg0 inputConfiguration:(id)arg1 socialServiceType:(id)arg2 extensionBundleIdentifier:(id)arg3 extensionUserInfo:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif