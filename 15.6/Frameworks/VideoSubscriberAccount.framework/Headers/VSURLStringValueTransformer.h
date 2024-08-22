// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSURLSTRINGVALUETRANSFORMER_H
#define VSURLSTRINGVALUETRANSFORMER_H

@class NSValueTransformer;



@interface VSURLStringValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif