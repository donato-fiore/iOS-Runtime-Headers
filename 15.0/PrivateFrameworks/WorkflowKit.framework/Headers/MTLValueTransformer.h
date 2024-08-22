// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLVALUETRANSFORMER_H
#define MTLVALUETRANSFORMER_H

@class NSValueTransformer, NSString;
@protocol MTLTransformerErrorHandling;



@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *forwardBlock; // ivar: _forwardBlock
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *reverseBlock; // ivar: _reverseBlock
@property (readonly) Class superclass;


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
+(id)reversibleTransformerWithBlock:(id)arg0 ;
// +(id)reversibleTransformerWithForwardBlock:(id)arg0 reverseBlock:(unk)arg1  ;
+(id)transformerUsingForwardBlock:(id)arg0 ;
// +(id)transformerUsingForwardBlock:(id)arg0 reverseBlock:(unk)arg1  ;
+(id)transformerUsingReversibleBlock:(id)arg0 ;
+(id)transformerWithBlock:(id)arg0 ;
// -(id)initWithForwardBlock:(id)arg0 reverseBlock:(unk)arg1  ;
-(id)transformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 success:(*BOOL)arg1 error:(*id)arg2 ;


@end


#endif