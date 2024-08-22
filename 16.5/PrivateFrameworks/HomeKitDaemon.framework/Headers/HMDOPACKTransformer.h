// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDOPACKTRANSFORMER_H
#define HMDOPACKTRANSFORMER_H



#import "HMDValueTransformer.h"

@interface HMDOPACKTransformer : HMDValueTransformer



+(BOOL)isStructuredDataCompatible;
+(Class)valueClass;
+(id)OPACKFromValue:(id)arg0 error:(*id)arg1 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)reverseTransformedValue:(id)arg0 error:(*id)arg1 ;
+(id)transformedValue:(id)arg0 error:(*id)arg1 ;
+(id)valueFromOPACK:(id)arg0 error:(*id)arg1 ;
-(id)OPACKFromValue:(id)arg0 error:(*id)arg1 ;
-(id)valueFromOPACK:(id)arg0 error:(*id)arg1 ;


@end


#endif