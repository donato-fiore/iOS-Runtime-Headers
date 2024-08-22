// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHAREACTIONUIKITUSERINTERFACE_H
#define WFSHAREACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFShareActionUserInterface;



@interface WFShareActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFShareActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(id)excludedActivityTypes;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithExtensionItems:(id)arg0 error:(id)arg1 ;
-(void)presentActivityViewControllerForItems:(id)arg0 isContentManaged:(BOOL)arg1 ;
-(void)presentExtensionViewControllerForItems:(id)arg0 extensionBundleIdentifier:(id)arg1 extensionPointIdentifier:(id)arg2 isContentManaged:(BOOL)arg3 ;
-(void)presentItems:(id)arg0 extensionBundleIdentifier:(id)arg1 extensionPointIdentifier:(id)arg2 isContentManaged:(BOOL)arg3 ;
-(void)prewarmInput:(id)arg0 completion:(id)arg1 ;
-(void)showWithArchivedItems:(id)arg0 isContentManaged:(BOOL)arg1 extensionBundleIdentifier:(id)arg2 extensionPointIdentifier:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif