// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ININTENTDATECOMPONENTSRANGESLOTVALUETRANSFORMER_H
#define ININTENTDATECOMPONENTSRANGESLOTVALUETRANSFORMER_H

@class NSValueTransformer;



@interface INIntentDateComponentsRangeSlotValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)reverseTransformedValueClass;
+(Class)transformedValueClass;
+(NSInteger)_intents_valueType;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif