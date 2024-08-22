// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ININTENTSTRINGSLOTVALUETRANSFORMER_H
#define ININTENTSTRINGSLOTVALUETRANSFORMER_H

@class NSValueTransformer;



@interface INIntentStringSlotValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)reverseTransformedValueClass;
+(Class)transformedValueClass;
+(NSInteger)_intents_valueType;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif