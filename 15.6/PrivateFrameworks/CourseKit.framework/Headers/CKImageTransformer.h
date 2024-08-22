// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKIMAGETRANSFORMER_H
#define CKIMAGETRANSFORMER_H

@class NSValueTransformer;



@interface CKImageTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
+(void)registerValueTransformer;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif