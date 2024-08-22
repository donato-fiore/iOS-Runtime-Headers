// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFWEBVIEWCONTROLLER_H
#define SFWEBVIEWCONTROLLER_H

@class UIViewController, NSString, WBSPermissionDialogThrottler, NSUUID, WKWebView, WKWebViewConfiguration;
@protocol SFFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _SFDialogControllerDelegate, _SFDialogViewControllerPresenting, _SFWebViewDelegate, _WKInputDelegate, _WKWebAuthenticationPanelDelegate, _SFDialogPresenting, SFWebViewControllerDelegate;


#import "_SFFormAutoFillController.h"
#import "_SFAuthenticationContext.h"
#import "_SFDialogController.h"

@interface SFWebViewController : UIViewController <SFFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _SFDialogControllerDelegate, _SFDialogViewControllerPresenting, _SFWebViewDelegate, _WKInputDelegate, _WKWebAuthenticationPanelDelegate, _SFDialogPresenting>

 {
    _SFFormAutoFillController *_autoFillController;
    BOOL _didFirstLayout;
    BOOL _didFinishDocumentLoad;
    BOOL _shouldSuppressDialogsThatBlockWebProcess;
    NSString *_domainWhereUserDeclinedAutomaticStrongPassword;
    WBSPermissionDialogThrottler *_permissionDialogThrottler;
}


@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFWebViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _SFDialogController *dialogController; // ivar: _dialogController
@property (readonly, nonatomic) BOOL didFirstPaint; // ivar: _didFirstPaint
@property (readonly, nonatomic) BOOL didFirstVisuallyNonEmptyLayout; // ivar: _didFirstVisuallyNonEmptyLayout
@property (readonly, nonatomic) BOOL hasFocusedInputFieldOnCurrentPage; // ivar: _hasFocusedInputFieldOnCurrentPage
@property (readonly, nonatomic) BOOL hasFormControlInteraction; // ivar: _hasFormControlInteraction
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration; // ivar: _webViewConfiguration


-(BOOL)_webView:(id)arg0 fileUploadPanelContentIsManagedWithInitiatingFrame:(id)arg1 ;
-(BOOL)_webView:(id)arg0 focusRequiresStrongPasswordAssistance:(id)arg1 ;
-(BOOL)_webView:(id)arg0 shouldIncludeAppLinkActionsForElement:(id)arg1 ;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg0 ;
-(BOOL)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg0 ;
-(BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg0 ;
-(BOOL)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg0 ;
-(BOOL)sfWebViewCanPromptForAccountSecurityRecommendation;
-(NSInteger)_webView:(id)arg0 dataOwnerForDragSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 dataOwnerForDropSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 decidePolicyForFocusedElement:(id)arg1 ;
-(NSInteger)dialogController:(id)arg0 presentationPolicyForDialog:(id)arg1 ;
-(id)_presentingViewControllerForWebView:(id)arg0 ;
-(id)_webView:(id)arg0 contextMenuContentPreviewForElement:(id)arg1 ;
-(id)_webViewAdditionalContextForStrongPasswordAssistance:(id)arg0 ;
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg0 ;
-(id)initWithWebViewConfiguration:(id)arg0 ;
-(id)permissionDialogThrottler;
-(id)sfWebView:(id)arg0 didStartDownload:(id)arg1 ;
-(int)_analyticsClient;
-(void)_automaticPasswordInputViewNotification:(id)arg0 ;
-(void)_userDeclinedAutomaticStrongPasswordForCurrentDomainOnTabWithUUID:(id)arg0 ;
-(void)_webView:(id)arg0 accessoryViewCustomButtonTappedInFormInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 authenticationChallenge:(id)arg1 shouldAllowLegacyTLS:(id)arg2 ;
-(void)_webView:(id)arg0 checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(NSUInteger)arg3 decisionHandler:(id)arg4 ;
-(void)_webView:(id)arg0 contextMenuConfigurationForElement:(id)arg1 completionHandler:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuDidEndForElement:(id)arg1 ;
-(void)_webView:(id)arg0 contextMenuForElement:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuWillPresentForElement:(id)arg1 ;
-(void)_webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 completionHandler:(id)arg4 ;
-(void)_webView:(id)arg0 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(NSInteger)arg1 forExtension:(id)arg2 completionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 didChangeSafeAreaShouldAffectObscuredInsets:(BOOL)arg1 ;
-(void)_webView:(id)arg0 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg1 ;
-(void)_webView:(id)arg0 didNegotiateModernTLSForURL:(id)arg1 ;
-(void)_webView:(id)arg0 didPresentFocusedElementViewController:(id)arg1 ;
-(void)_webView:(id)arg0 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id)arg1 ;
-(void)_webView:(id)arg0 didStartInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg1 uti:(id)arg2 ;
-(void)_webView:(id)arg0 insertTextSuggestion:(id)arg1 inInputSession:(id)arg2 ;
-(void)_webView:(id)arg0 mediaCaptureStateDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 navigation:(id)arg1 didSameDocumentNavigation:(NSInteger)arg2 ;
-(void)_webView:(id)arg0 navigationDidFinishDocumentLoad:(id)arg1 ;
-(void)_webView:(id)arg0 printFrame:(id)arg1 ;
-(void)_webView:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 requestGeolocationAuthorizationForURL:(id)arg1 frame:(id)arg2 decisionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 requestStorageAccessPanelForDomain:(id)arg1 underCurrentDomain:(id)arg2 completionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 requestUserMediaAuthorizationForDevices:(NSUInteger)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(id)arg4 ;
-(void)_webView:(id)arg0 runWebAuthenticationPanel:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 willGoToBackForwardListItem:(id)arg1 inPageCache:(BOOL)arg2 ;
-(void)_webView:(id)arg0 willPerformClientRedirectToURL:(id)arg1 delay:(CGFloat)arg2 ;
-(void)_webView:(id)arg0 willStartInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id)arg3 ;
-(void)_webViewDidCancelClientRedirect:(id)arg0 ;
-(void)_webViewDidEndNavigationGesture:(id)arg0 withNavigationToBackForwardListItem:(id)arg1 ;
-(void)_webViewDidEnterFullscreen:(id)arg0 ;
-(void)_webViewDidExitFullscreen:(id)arg0 ;
-(void)_webViewWebProcessDidCrash:(id)arg0 ;
-(void)_webViewWillEndNavigationGesture:(id)arg0 withNavigationToBackForwardListItem:(id)arg1 ;
-(void)dealloc;
-(void)dialogController:(id)arg0 dismissViewController:(id)arg1 withAdditionalAnimations:(id)arg2 ;
-(void)dialogController:(id)arg0 presentViewController:(id)arg1 withAdditionalAnimations:(id)arg2 ;
-(void)dialogController:(id)arg0 willPresentDialog:(id)arg1 ;
-(void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg0 ;
-(void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg0 completion:(id)arg1 ;
-(void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)panel:(id)arg0 decidePolicyForLocalAuthenticatorWithCompletionHandler:(id)arg1 ;
-(void)panel:(id)arg0 dismissWebAuthenticationPanelWithResult:(NSInteger)arg1 ;
-(void)panel:(id)arg0 requestPINWithRemainingRetries:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)panel:(id)arg0 selectAssertionResponse:(id)arg1 source:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)panel:(id)arg0 updateWebAuthenticationPanel:(NSInteger)arg1 ;
-(void)performPageLevelAutoFill;
-(void)presentDialog:(id)arg0 sender:(id)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)sfWebViewDidBecomeFirstResponder:(id)arg0 ;
-(void)sfWebViewDidChangeSafeAreaInsets:(id)arg0 ;
-(void)sfWebViewDidEndFormControlInteraction:(id)arg0 ;
-(void)sfWebViewDidStartFormControlInteraction:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 preferences:(id)arg2 decisionHandler:(id)arg3 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didReceiveServerRedirectForProvisionalNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id)arg3 ;
-(void)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id)arg3 ;
-(void)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id)arg4 ;
-(void)webViewDidClose:(id)arg0 ;
-(void)willActivateWebViewController;
-(void)willBeginUserInitiatedNavigation;


@end


#endif