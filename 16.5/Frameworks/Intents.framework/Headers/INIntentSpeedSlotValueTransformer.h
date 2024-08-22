// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ININTENTSPEEDSLOTVALUETRANSFORMER_H
#define ININTENTSPEEDSLOTVALUETRANSFORMER_H

@class NSValueTransformer;



@interface INIntentSpeedSlotValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)_intents_resolutionResultClass;
+(Class)reverseTransformedValueClass;
+(Class)transformedValueClass;
+(NSInteger)_intents_valueType;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif