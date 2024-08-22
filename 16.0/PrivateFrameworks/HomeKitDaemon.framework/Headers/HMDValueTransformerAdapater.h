// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDVALUETRANSFORMERADAPATER_H
#define HMDVALUETRANSFORMERADAPATER_H

@class NSValueTransformer;


#import "HMDValueTransformer.h"

@interface HMDValueTransformerAdapater : HMDValueTransformer {
    NSValueTransformer *_transformer;
}




+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
+(Class)valueClass;
-(id)initWithTransformer:(id)arg0 ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)reverseTransformedValue:(id)arg0 error:(*id)arg1 ;
-(id)transformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 error:(*id)arg1 ;


@end


#endif