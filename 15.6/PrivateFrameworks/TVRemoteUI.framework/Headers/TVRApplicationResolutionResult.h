// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRAPPLICATIONRESOLUTIONRESULT_H
#define TVRAPPLICATIONRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface TVRApplicationResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithApplicationToConfirm:(id)arg0 ;
+(id)disambiguationWithApplicationsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedApplication:(id)arg0 ;


@end


#endif