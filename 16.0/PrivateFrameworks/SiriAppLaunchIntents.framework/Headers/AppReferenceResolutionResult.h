// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPREFERENCERESOLUTIONRESULT_H
#define APPREFERENCERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface AppReferenceResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithAppReferenceToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedAppReference:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif