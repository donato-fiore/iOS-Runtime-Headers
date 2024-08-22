// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASETYPERESOLUTIONRESULT_H
#define CASETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface CaseTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithCaseTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedCaseType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif