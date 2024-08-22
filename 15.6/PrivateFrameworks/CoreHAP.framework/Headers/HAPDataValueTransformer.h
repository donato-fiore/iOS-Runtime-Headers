// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPDATAVALUETRANSFORMER_H
#define HAPDATAVALUETRANSFORMER_H



#import "HAPValueTransformer.h"

@interface HAPDataValueTransformer : HAPValueTransformer



+(BOOL)isValidFormat:(NSUInteger)arg0 ;
+(Class)expectedTransformedClassForFormat:(NSUInteger)arg0 ;
+(id)defaultDataValueTransformer;
+(void)initialize;
-(id)reverseTransformedValue:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)transformedValue:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif