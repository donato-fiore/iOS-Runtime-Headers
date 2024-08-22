// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUUIDSTRINGFROMUUIDDATATRANSFORMER_H
#define PLUUIDSTRINGFROMUUIDDATATRANSFORMER_H

@class NSValueTransformer;



@interface PLUUIDStringFromUUIDDataTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif