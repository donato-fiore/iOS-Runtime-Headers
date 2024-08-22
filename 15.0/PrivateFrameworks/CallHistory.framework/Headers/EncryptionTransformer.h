// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENCRYPTIONTRANSFORMER_H
#define ENCRYPTIONTRANSFORMER_H

@class NSValueTransformer;



@interface EncryptionTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif