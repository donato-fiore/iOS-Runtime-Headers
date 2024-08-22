// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSINTENTMAILRESOLUTIONRESULT_H
#define MSINTENTMAILRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface MSIntentMailResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithMailToConfirm:(id)arg0 ;
+(id)disambiguationWithMailsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedMail:(id)arg0 ;


@end


#endif