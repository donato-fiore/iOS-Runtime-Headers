// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSCOMPOUNDVALUETRANSFORMER_H
#define VSCOMPOUNDVALUETRANSFORMER_H

@class NSValueTransformer, NSArray;



@interface VSCompoundValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSArray *valueTransformers; // ivar: _valueTransformers


-(id)init;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif