// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONTACTATTRIBUTETYPERESOLUTIONRESULT_H
#define CONTACTATTRIBUTETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface ContactAttributeTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithContactAttributeTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedContactAttributeType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif