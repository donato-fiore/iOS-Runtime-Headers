// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLREVERSIBLEVALUETRANSFORMER_H
#define MTLREVERSIBLEVALUETRANSFORMER_H



#import "MTLValueTransformer.h"

@interface MTLReversibleValueTransformer : MTLValueTransformer



+(BOOL)allowsReverseTransformation;
// -(id)initWithForwardBlock:(id)arg0 reverseBlock:(unk)arg1  ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)reverseTransformedValue:(id)arg0 success:(*BOOL)arg1 error:(*id)arg2 ;


@end


#endif