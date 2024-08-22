// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENTCARCHARGINGCONNECTORPOWERSLOTVALUETRANSFORMER_H
#define ININTENTCARCHARGINGCONNECTORPOWERSLOTVALUETRANSFORMER_H

@class NSValueTransformer;



@interface INIntentCarChargingConnectorPowerSlotValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)reverseTransformedValueClass;
+(Class)transformedValueClass;
+(NSInteger)_intents_valueType;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif