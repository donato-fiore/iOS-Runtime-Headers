// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSREVERSEVALUETRANSFORMER_H
#define VSREVERSEVALUETRANSFORMER_H

@class NSValueTransformer;



@interface VSReverseValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSValueTransformer *valueTransformer; // ivar: _valueTransformer


+(id)reverseValueTransformerWithValueTransformer:(id)arg0 ;
-(id)init;
-(id)initWithValueTransformer:(id)arg0 ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif