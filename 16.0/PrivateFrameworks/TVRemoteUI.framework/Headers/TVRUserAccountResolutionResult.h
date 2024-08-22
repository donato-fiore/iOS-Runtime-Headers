// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUSERACCOUNTRESOLUTIONRESULT_H
#define TVRUSERACCOUNTRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface TVRUserAccountResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithUserAccountToConfirm:(id)arg0 ;
+(id)disambiguationWithUserAccountsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedUserAccount:(id)arg0 ;


@end


#endif