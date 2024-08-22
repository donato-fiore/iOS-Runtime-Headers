// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFFORMMETADATACONTROLLER_H
#define _SFFORMMETADATACONTROLLER_H

@class WBSFormMetadataController, WKWebProcessPlugInScriptWorld, NSDictionary, WBSFormMetadata, WKWebProcessPlugInFrame, NSString;
@protocol WKWebProcessPlugInFormDelegatePrivate, SFFormMetadataObserver;


#import "_SFWebProcessPlugInPageController.h"

@interface _SFFormMetadataController : WBSFormMetadataController <WKWebProcessPlugInFormDelegatePrivate>

 {
    WKWebProcessPlugInScriptWorld *_scriptWorld;
    _SFWebProcessPlugInPageController *_pageController;
    id<SFFormMetadataObserver> *_observer;
    NSDictionary *_assistedNodeMetadata;
    BOOL _shouldListenForFormChanges;
    WBSFormMetadata *_unsubmittedForm;
    WKWebProcessPlugInFrame *_unsubmittedFormFrame;
    BOOL _autoFillInProgress;
    BOOL _focusingFormForStreamlinedLogin;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKWebProcessPlugInScriptWorld *scriptWorld;
@property (readonly) Class superclass;


-(BOOL)_formContainsAutoFilledElements:(id)arg0 ;
-(BOOL)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)arg0 ;
-(BOOL)shouldIncludeNonEmptyFields;
-(id)_assistedNodeMetadataWithPasswordField:(id)arg0 passwordFieldMetadata:(id)arg1 formMetadata:(id)arg2 inFrame:(id)arg3 ;
-(id)_observer;
-(id)_webProcessPlugInBrowserContextController:(id)arg0 willBeginInputSessionForElement:(id)arg1 inFrame:(id)arg2 userIsInteracting:(BOOL)arg3 ;
-(id)_webProcessPlugInBrowserContextController:(id)arg0 willSubmitForm:(id)arg1 toFrame:(id)arg2 fromFrame:(id)arg3 withValues:(id)arg4 ;
-(id)fillForm:(CGFloat)arg0 inFrame:(id)arg1 withPassword:(id)arg2 focusedFieldControlID:(id)arg3 ;
-(id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1 ;
-(id)initWithPageController:(id)arg0 ;
-(void)_collectFormMetadataForPreFilling:(BOOL)arg0 ;
-(void)_collectFormMetadataWithRequestType:(NSUInteger)arg0 ignoreAutoFilledForms:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_webProcessPlugInBrowserContextController:(id)arg0 textDidChangeInTextField:(id)arg1 inFrame:(id)arg2 initiatedByUserTyping:(BOOL)arg3 ;
-(void)_webProcessPlugInBrowserContextController:(id)arg0 willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 targetFrame:(id)arg3 values:(id)arg4 ;
-(void)_willNavigateFrameWithUnsubmittedForm:(id)arg0 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 fillSynchronously:(BOOL)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 submitForm:(BOOL)arg6 ;
-(void)autoFillFormInFrame:(id)arg0 withValues:(id)arg1 fillSynchronously:(BOOL)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4 ;
-(void)clearField:(id)arg0 inFrame:(id)arg1 ;
-(void)clearScriptWorld;
-(void)collectFormMetadataForPageLevelAutoFill;
-(void)collectFormMetadataForPreFilling;
-(void)collectMetadataForTextField:(id)arg0 inFrame:(id)arg1 completionHandler:(id)arg2 ;
-(void)collectURLsForPreFilling;
-(void)creditCardFieldFocused:(id)arg0 inFrame:(id)arg1 ;
-(void)dealloc;
-(void)didFindSearchURLTemplateString:(id)arg0 inFrame:(id)arg1 pageController:(id)arg2 ;
-(void)didSameDocumentNavigation:(NSInteger)arg0 inFrame:(id)arg1 ;
-(void)didStartProvisionalLoadForFrame:(id)arg0 ;
-(void)finishedAutoFillingForm:(id)arg0 inFrame:(id)arg1 shouldSubmit:(BOOL)arg2 ;
-(void)finishedAutoFillingOneTimeCodeInFrame:(id)arg0 shouldSubmit:(BOOL)arg1 ;
-(void)focusFormForStreamlinedLogin:(CGFloat)arg0 inFrame:(id)arg1 ;
-(void)invalidate;
-(void)passwordFieldFocused:(id)arg0 inFrame:(id)arg1 isPasswordFieldForUserCredentials:(BOOL)arg2 ;
-(void)removeAutomaticPasswordElementsInFrame:(id)arg0 focusedPasswordControlUniqueID:(id)arg1 passwordControlUniqueIDs:(id)arg2 blurAfterRemoval:(BOOL)arg3 ;
-(void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg0 passwordControlUniqueIDs:(id)arg1 ;
-(void)usernameFieldFocused:(id)arg0 fieldMetadata:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;


@end


#endif