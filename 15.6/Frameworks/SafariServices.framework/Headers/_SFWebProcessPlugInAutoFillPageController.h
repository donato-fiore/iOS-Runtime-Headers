// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFWEBPROCESSPLUGINAUTOFILLPAGECONTROLLER_H
#define _SFWEBPROCESSPLUGINAUTOFILLPAGECONTROLLER_H

@class SFWebProcessPlugInPageController, _WKRemoteObjectInterface, WKWebProcessPlugInScriptWorld, NSString;
@protocol SFFormAutoFiller, SFInjectedJavaScriptWebProcessController;


#import "_SFFormMetadataController.h"

@interface _SFWebProcessPlugInAutoFillPageController : SFWebProcessPlugInPageController <SFFormAutoFiller, SFInjectedJavaScriptWebProcessController>

 {
    _WKRemoteObjectInterface *_activityControllerInterface;
    _WKRemoteObjectInterface *_autoFillerInterface;
    WKWebProcessPlugInScriptWorld *_isolatedWorld;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFFormMetadataController *formMetadataController; // ivar: _formMetadataController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPlugIn:(id)arg0 contextController:(id)arg1 ;
-(void)annotateForm:(NSInteger)arg0 inFrame:(id)arg1 withValues:(id)arg2 ;
-(void)autoFillForm:(NSInteger)arg0 inFrame:(id)arg1 withGeneratedPassword:(id)arg2 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg0 withValues:(id)arg1 setAutoFilled:(BOOL)arg2 focusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg0 withValues:(id)arg1 setAutoFilled:(BOOL)arg2 focusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 fieldsToObscure:(id)arg5 submitForm:(BOOL)arg6 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg0 withValues:(id)arg1 setAutoFilled:(BOOL)arg2 focusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 submitForm:(BOOL)arg5 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg0 withValues:(id)arg1 setAutoFilled:(BOOL)arg2 selectFieldAfterFilling:(id)arg3 ;
-(void)autoFillFormSynchronouslyInFrame:(id)arg0 withValues:(id)arg1 ;
-(void)autoFillOneTimeCodeFieldsInFrame:(id)arg0 withValue:(id)arg1 shouldSubmit:(BOOL)arg2 ;
-(void)automaticPasswordSheetDimissedInFrame:(id)arg0 focusedPasswordControlUniqueID:(id)arg1 ;
-(void)clearAutoFillMetadata;
-(void)collectFormMetadataForPageLevelAutoFillAtURL:(id)arg0 ;
-(void)collectFormMetadataForPrefillingAtURL:(id)arg0 ;
-(void)collectMetadataForTextField:(id)arg0 inFrame:(id)arg1 atURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)collectURLsForPrefillingAtURL:(id)arg0 ;
-(void)fillTextField:(id)arg0 inFrame:(id)arg1 withGeneratedPassword:(id)arg2 ;
-(void)focusFormForStreamlinedLogin:(NSInteger)arg0 inFrame:(id)arg1 ;
-(void)removeAutomaticPasswordElementsInFrame:(id)arg0 focusedPasswordControlUniqueID:(id)arg1 passwordControlUniqueIDs:(id)arg2 ;
-(void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg0 passwordControlUniqueIDs:(id)arg1 ;
-(void)runJavaScriptForActivity:(id)arg0 withScript:(id)arg1 object:(id)arg2 invokeMethod:(id)arg3 completionHandler:(id)arg4 ;
-(void)setFormControls:(id)arg0 areAutoFilled:(BOOL)arg1 andClearField:(id)arg2 inFrame:(id)arg3 ;
-(void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg0 formID:(NSInteger)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 automaticPassword:(id)arg4 blurAfterSubstitution:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didRemoveFrameFromHierarchy:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didSameDocumentNavigation:(NSInteger)arg1 forFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)willDestroyBrowserContextController:(id)arg0 ;


@end


#endif