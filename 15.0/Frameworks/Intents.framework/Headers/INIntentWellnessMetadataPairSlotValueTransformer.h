// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ININTENTWELLNESSMETADATAPAIRSLOTVALUETRANSFORMER_H
#define ININTENTWELLNESSMETADATAPAIRSLOTVALUETRANSFORMER_H

@class NSValueTransformer;



@interface INIntentWellnessMetadataPairSlotValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)reverseTransformedValueClass;
+(Class)transformedValueClass;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif