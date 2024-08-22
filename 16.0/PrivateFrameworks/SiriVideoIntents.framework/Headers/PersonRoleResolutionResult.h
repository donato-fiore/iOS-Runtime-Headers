// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERSONROLERESOLUTIONRESULT_H
#define PERSONROLERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface PersonRoleResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithPersonRoleToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedPersonRole:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif