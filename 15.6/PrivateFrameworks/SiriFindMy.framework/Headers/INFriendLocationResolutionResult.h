// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INFRIENDLOCATIONRESOLUTIONRESULT_H
#define INFRIENDLOCATIONRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface INFriendLocationResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithINFriendLocationToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)disambiguationWithINFriendLocationsToDisambiguate:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedINFriendLocation:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif