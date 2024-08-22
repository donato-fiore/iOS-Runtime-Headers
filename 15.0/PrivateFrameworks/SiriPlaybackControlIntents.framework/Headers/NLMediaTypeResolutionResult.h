// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLMEDIATYPERESOLUTIONRESULT_H
#define NLMEDIATYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface NLMediaTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithNLMediaTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedNLMediaType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif