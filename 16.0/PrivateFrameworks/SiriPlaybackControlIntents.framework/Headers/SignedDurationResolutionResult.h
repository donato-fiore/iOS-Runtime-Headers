// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNEDDURATIONRESOLUTIONRESULT_H
#define SIGNEDDURATIONRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface SignedDurationResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithSignedDurationToConfirm:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)disambiguationWithSignedDurationsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
+(id)successWithResolvedSignedDuration:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif