// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAGETYPERESOLUTIONRESULT_H
#define IMAGETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface ImageTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithImageTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedImageType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif