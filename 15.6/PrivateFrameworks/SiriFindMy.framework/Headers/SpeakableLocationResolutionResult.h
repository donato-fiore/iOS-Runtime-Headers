// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPEAKABLELOCATIONRESOLUTIONRESULT_H
#define SPEAKABLELOCATIONRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface SpeakableLocationResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithSpeakableLocationToConfirm:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)disambiguationWithSpeakableLocationsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
+(id)successWithResolvedSpeakableLocation:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif