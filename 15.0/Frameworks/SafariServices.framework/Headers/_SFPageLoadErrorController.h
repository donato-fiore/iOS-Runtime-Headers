// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPAGELOADERRORCONTROLLER_H
#define _SFPAGELOADERRORCONTROLLER_H

@class WKWebView, NSTimer, _WKRemoteObjectInterface, NSURL, UINavigationController, WBSCertificateWarningPageContext, NSString, NSURLRequest;
@protocol WBSCertificateWarningPageHandler, OS_dispatch_queue, WBSCertificateWarningPagePresenter, _SFPageLoadErrorControllerDelegate, _SFDialogPresenting;

#import <Foundation/Foundation.h>


@interface _SFPageLoadErrorController : NSObject <WBSCertificateWarningPageHandler>

 {
    BOOL _reloadAfterResume;
    WKWebView *_webView;
    NSTimer *_crashCountResetTimer;
    NSObject<OS_dispatch_queue> *_certManagerQueue;
    id<WBSCertificateWarningPagePresenter> *_certificateWarningPagePresenterProxy;
    _WKRemoteObjectInterface *_certificateWarningPageHandlerInterface;
    BOOL _certificateWarningPageHandlerInterfaceInvalidated;
    *__SecTrust _certificateTrust;
    id *_certificateRecoveryAttempter;
    NSURL *_certificateFailingURL;
    UINavigationController *_certificateNavigationViewController;
    WBSCertificateWarningPageContext *_legacyTLSWarningPageContext;
    NSURL *_clickThroughURL;
}


@property (readonly, nonatomic) NSUInteger crashesSinceLastSuccessfulLoad; // ivar: _crashesSinceLastSuccessfulLoad
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFPageLoadErrorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<_SFDialogPresenting> *dialogPresenter; // ivar: _dialogPresenter
@property (readonly, nonatomic) NSURLRequest *failedRequest; // ivar: _failedRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL reloadingFailedRequest; // ivar: _reloadingFailedRequest
@property (readonly) Class superclass;


-(BOOL)updateCrashesAndShowCrashError:(id)arg0 URLString:(id)arg1 ;
-(id)_certificateWarningPagePresenterProxy;
-(id)_genericMessageForError:(id)arg0 ;
-(id)_specializedMessageForError:(id)arg0 URL:(id)arg1 ;
-(id)_titleForError:(id)arg0 ;
-(id)initWithWebView:(id)arg0 ;
-(void)_clearCertificateWarningPageHandlerInterface;
-(void)_continueAfterCertificateAlertWithURL:(id)arg0 trust:(struct __SecTrust *)arg1 recoveryAttempter:(id)arg2 ;
-(void)_continueWithoutCredentialsUsingAlertContext:(id)arg0 ;
-(void)_dismissCertificateViewButtonTapped;
// -(void)_handleCertificateError:(id)arg0 forURL:(id)arg1 isMainFrame:(BOOL)arg2 recoveryAttempter:(id)arg3 completionHandler:(unk)arg4  ;
-(void)_handleFrameLoadError:(id)arg0 forURL:(id)arg1 recoveryAttempter:(id)arg2 ;
-(void)_loadCertificateWarningPageForContext:(id)arg0 ;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_resetCrashCount:(id)arg0 ;
-(void)_resetCrashCountSoon;
-(void)_setUpCertificateWarningPageHandlerInterface;
-(void)_showRepeatedWebProcessCrashError:(id)arg0 URLString:(id)arg1 ;
-(void)addAlert:(id)arg0 ;
-(void)addAlertWithTitle:(id)arg0 bodyText:(id)arg1 ;
-(void)addDialog:(id)arg0 ;
-(void)addDisallowedFileURLAlert;
-(void)addDisallowedUseOfJavaScriptAlert;
-(void)addDownloadFailedAlertWithDescription:(id)arg0 ;
-(void)addFormAlertWithTitle:(id)arg0 decisionHandler:(id)arg1 ;
-(void)addInvalidProfileAlert;
-(void)addInvalidURLAlert;
-(void)clearCrashCountResetTimer;
-(void)clearFailedRequest;
-(void)dealloc;
-(void)goBackButtonClicked;
-(void)handleClientCertificateAuthenticationChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleFrameLoadError:(id)arg0 ;
-(void)handleLegacyTLSWithFailingURL:(id)arg0 clickThroughURL:(id)arg1 authenticationChallenge:(id)arg2 ;
-(void)handleSubframeCertificateError:(id)arg0 ;
-(void)invalidate;
-(void)openClockSettings;
-(void)performAction:(int)arg0 forAlert:(id)arg1 ;
-(void)reloadAfterError;
-(void)scheduleResetCrashCount;
-(void)showCertificateInformation;
-(void)showErrorPageWithTitle:(id)arg0 bodyText:(id)arg1 forError:(id)arg2 ;
-(void)showErrorPageWithTitle:(id)arg0 bodyText:(id)arg1 learnMoreLink:(id)arg2 forError:(id)arg3 ;
-(void)visitInsecureWebsite;
-(void)visitInsecureWebsiteWithTemporaryBypass;
-(void)webViewDidCommitErrorPagePreview:(id)arg0 ;


@end


#endif