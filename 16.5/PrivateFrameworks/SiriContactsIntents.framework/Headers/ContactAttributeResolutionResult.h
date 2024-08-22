// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTACTATTRIBUTERESOLUTIONRESULT_H
#define CONTACTATTRIBUTERESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface ContactAttributeResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithContactAttributeToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)disambiguationWithContactAttributesToDisambiguate:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedContactAttribute:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif