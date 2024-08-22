// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFVALUETRANSFORMER_H
#define HFVALUETRANSFORMER_H


#import <Foundation/Foundation.h>


@interface HFValueTransformer : NSObject

@property (copy, nonatomic) id *reverseTransformBlock; // ivar: _reverseTransformBlock
@property (copy, nonatomic) id *transformBlock; // ivar: _transformBlock
@property (retain, nonatomic) Class valueClass; // ivar: _valueClass


+(id)identityTransformer;
// +(id)transformerForValueClass:(Class)arg0 transformBlock:(id)arg1 reverseTransformBlock:(unk)arg2  ;
-(id)transformedValueForValue:(id)arg0 ;
-(id)valueForTransformedValue:(id)arg0 ;


@end


#endif