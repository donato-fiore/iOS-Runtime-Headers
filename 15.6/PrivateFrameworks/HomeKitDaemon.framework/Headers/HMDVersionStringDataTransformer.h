// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDVERSIONSTRINGDATATRANSFORMER_H
#define HMDVERSIONSTRINGDATATRANSFORMER_H



#import "HMDValueTransformer.h"

@interface HMDVersionStringDataTransformer : HMDValueTransformer



+(Class)transformedValueClass;
+(Class)valueClass;
+(id)reverseTransformedValue:(id)arg0 error:(*id)arg1 ;
+(id)transformedValue:(id)arg0 error:(*id)arg1 ;


@end


#endif