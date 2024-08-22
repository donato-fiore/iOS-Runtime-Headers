// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LANGUAGEOPTIONRESOLUTIONRESULT_H
#define LANGUAGEOPTIONRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface LanguageOptionResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithLanguageOptionToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)disambiguationWithLanguageOptionsToDisambiguate:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedLanguageOption:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif