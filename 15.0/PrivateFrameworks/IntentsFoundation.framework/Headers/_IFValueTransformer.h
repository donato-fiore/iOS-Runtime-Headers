// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IFVALUETRANSFORMER_H
#define _IFVALUETRANSFORMER_H

@class NSValueTransformer;



@interface _IFValueTransformer : NSValueTransformer

@property (readonly, copy, nonatomic) id *forwardTransformation; // ivar: _forwardTransformation
@property (readonly, copy, nonatomic) id *reverseTransformation; // ivar: _reverseTransformation


+(BOOL)allowsReverseTransformation;
// -(id)initWithForwardTransformation:(id)arg0 reverseTransformation:(unk)arg1  ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif