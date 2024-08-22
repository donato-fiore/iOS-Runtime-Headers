// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDIALOG_H
#define SFDIALOG_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SFDialogController.h"

@interface SFDialog : NSObject {
    BOOL _completed;
}


@property (readonly, copy, nonatomic) NSArray *additionalCancellationExemptions;
@property (readonly, nonatomic) BOOL canceledOnApplicationBackground;
@property (readonly, nonatomic) BOOL canceledOnCommittedNavigation;
@property (readonly, nonatomic) BOOL canceledOnProvisionalNavigation;
@property (readonly, nonatomic) BOOL completionHandlerBlocksWebProcess;
@property (weak, nonatomic) SFDialogController *dialogController; // ivar: _dialogController
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) BOOL shouldIgnoreGlobalModalUIDisplayPolicy; // ivar: _shouldIgnoreGlobalModalUIDisplayPolicy


+(id)_appLinkRedirectDialogWithMessage:(id)arg0 completionHandler:(id)arg1 ;
+(id)_dialogWithTitle:(id)arg0 message:(id)arg1 acceptAction:(id)arg2 secondaryAction:(id)arg3 cancelAction:(id)arg4 applicationModal:(BOOL)arg5 completionHandler:(id)arg6 ;
+(id)_dialogWithTitle:(id)arg0 message:(id)arg1 primaryAction:(id)arg2 secondaryAction:(id)arg3 applicationModal:(BOOL)arg4 completionHandler:(id)arg5 ;
+(id)authenticationDialogWithAuthenticationChallenge:(id)arg0 committedURL:(id)arg1 completionHandler:(id)arg2 ;
+(id)authenticatorDialogForPanel:(id)arg0 dialogController:(id)arg1 ;
+(id)blockedPopupWindowDialogWithCompletionHandler:(id)arg0 ;
+(id)continuePrintingDialogWithTitle:(id)arg0 message:(id)arg1 applicationModal:(BOOL)arg2 completionHandler:(id)arg3 ;
+(id)dialogWithWebUIAlert:(id)arg0 completionHandler:(id)arg1 ;
+(id)formSubmissionDialogWithMessage:(id)arg0 completionHandler:(id)arg1 ;
+(id)genericErrorDialogWithTitle:(id)arg0 message:(id)arg1 applicationModal:(BOOL)arg2 ;
+(id)increaseApplicationCacheQuotaDialogForOrigin:(id)arg0 newQuota:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(id)increaseDatabaseQuotaDialogForOrigin:(id)arg0 newQuota:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(id)javaScriptAlertDialogWithMessage:(id)arg0 completionHandler:(id)arg1 ;
+(id)javaScriptConfirmDialogWithMessage:(id)arg0 completionHandler:(id)arg1 ;
+(id)javaScriptPromptDialogWithMessage:(id)arg0 defaultText:(id)arg1 completionHandler:(id)arg2 ;
+(id)noFeedAppDialogWithCompletionHandler:(id)arg0 ;
+(id)pageLoadErrorWithMessage:(id)arg0 ;
+(id)permanentlyAcceptCertificateDialogWithAcceptanceHandler:(id)arg0 ;
+(id)printBlockedDialogWithCompletionHandler:(id)arg0 ;
+(id)redirectDialogWithMessage:(id)arg0 completionHandler:(id)arg1 ;
+(id)requestStorageAccessDialogForDomain:(id)arg0 underCurrentDomain:(id)arg1 completionHandler:(id)arg2 ;
+(id)telephonyNavigationDialogWithCompletionHandler:(id)arg0 ;
+(id)userMediaPermissionDialogWithHost:(id)arg0 devices:(id)arg1 completionHandler:(id)arg2 ;
+(id)webExtensionAlwaysAllowDialogWithExtension:(id)arg0 domains:(id)arg1 includeDenyButton:(BOOL)arg2 completionHandler:(id)arg3 ;
+(id)webExtensionDisabledBecauseItRequestsAdditionalPermissionsDialogForExtension:(id)arg0 completionHandler:(id)arg1 ;
+(id)webExtensionPermissionDialogWithExtension:(id)arg0 domains:(id)arg1 callingAPIName:(id)arg2 showMoreOptionsForAlwaysAllow:(BOOL)arg3 includeDenyButton:(BOOL)arg4 completionHandler:(id)arg5 ;
+(id)websiteLocationDialogForURL:(id)arg0 preciseLocation:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)newDialogViewRepresentation;
-(id)newViewControllerRepresentationWithCompletionHandler:(id)arg0 ;
-(void)completeWithResponse:(id)arg0 ;
-(void)didCompleteWithResponse:(id)arg0 ;


@end


#endif