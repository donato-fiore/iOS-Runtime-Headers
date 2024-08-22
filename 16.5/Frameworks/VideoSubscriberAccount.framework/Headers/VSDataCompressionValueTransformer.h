// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSDATACOMPRESSIONVALUETRANSFORMER_H
#define VSDATACOMPRESSIONVALUETRANSFORMER_H

@class NSValueTransformer;



@interface VSDataCompressionValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)_dataByPerformingOperation:(int)arg0 onData:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif