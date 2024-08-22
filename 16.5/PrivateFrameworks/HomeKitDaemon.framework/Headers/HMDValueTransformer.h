// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDVALUETRANSFORMER_H
#define HMDVALUETRANSFORMER_H

@class NSValueTransformer;



@interface HMDValueTransformer : NSValueTransformer



+(Class)transformedValueClass;
+(Class)valueClass;
+(id)decodeValue:(id)arg0 withTransformerNamed:(id)arg1 error:(*id)arg2 ;
+(id)encodeValue:(id)arg0 withTransformerNamed:(id)arg1 error:(*id)arg2 ;
+(id)reverseTransformedValue:(id)arg0 error:(*id)arg1 ;
+(id)sharedTransformer;
+(id)transformedValue:(id)arg0 error:(*id)arg1 ;
+(id)valueTransformerForName:(id)arg0 ;
-(BOOL)isKindOfTransformer:(Class)arg0 ;
-(id)description;
-(id)init;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)reverseTransformedValue:(id)arg0 error:(*id)arg1 ;
-(id)transformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 error:(*id)arg1 ;


@end


#endif