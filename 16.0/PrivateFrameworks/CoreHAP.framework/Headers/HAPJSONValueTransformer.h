// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPJSONVALUETRANSFORMER_H
#define HAPJSONVALUETRANSFORMER_H



#import "HAPValueTransformer.h"

@interface HAPJSONValueTransformer : HAPValueTransformer



+(Class)expectedTransformedClassForFormat:(NSUInteger)arg0 ;
+(id)defaultJSONValueTransformer;
+(void)initialize;
-(id)reverseTransformedValue:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)transformedValue:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif