// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIMESSAGEMISSINGENTITYANALYZER_H
#define SGMIMESSAGEMISSINGENTITYANALYZER_H


#import <Foundation/Foundation.h>


@interface SGMIMessageMissingEntityAnalyzer : NSObject



+(BOOL)matchRecentContact:(id)arg0 store:(id)arg1 ;
+(id)_identifyComposeWarningsFromSubject:(id)arg0 content:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 originalToRecipients:(id)arg5 originalCcRecipients:(id)arg6 attachments:(id)arg7 language:(id)arg8 store:(id)arg9 disableConservativeCheckRequirement:(BOOL)arg10 ;
+(id)filterOutOrConvertMatches:(id)arg0 visibleFlatRecipientEmailsList:(id)arg1 visibleFlatRecipientList:(id)arg2 bccFlatRecipientList:(id)arg3 contactMatchRequired:(BOOL)arg4 textContent:(id)arg5 regexLanguage:(id)arg6 detectedLanguage:(id)arg7 store:(id)arg8 ;
+(id)identifyComposeWarningsFromSubject:(id)arg0 content:(id)arg1 attributes:(id)arg2 toRecipients:(id)arg3 ccRecipients:(id)arg4 bccRecipients:(id)arg5 originalToRecipients:(id)arg6 originalCcRecipients:(id)arg7 attachments:(id)arg8 ;
+(id)identifyComposeWarningsFromSubject:(id)arg0 content:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 originalToRecipients:(id)arg5 originalCcRecipients:(id)arg6 attachments:(id)arg7 ;
+(id)identifyComposeWarningsFromSubject:(id)arg0 content:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 originalToRecipients:(id)arg5 originalCcRecipients:(id)arg6 attachments:(id)arg7 language:(id)arg8 store:(id)arg9 disableConservativeCheckRequirement:(BOOL)arg10 ;
+(id)identifyWarningsFromSubject:(id)arg0 content:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 originalToRecipients:(id)arg5 originalCcRecipients:(id)arg6 attachments:(id)arg7 ;
+(id)reportUserEngagement:(BOOL)arg0 forWarning:(id)arg1 ;
+(id)reportUserEngagement:(BOOL)arg0 forWarning:(id)arg1 store:(id)arg2 ;


@end


#endif