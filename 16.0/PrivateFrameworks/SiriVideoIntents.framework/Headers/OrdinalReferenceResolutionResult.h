// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORDINALREFERENCERESOLUTIONRESULT_H
#define ORDINALREFERENCERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface OrdinalReferenceResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithOrdinalReferenceToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedOrdinalReference:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif