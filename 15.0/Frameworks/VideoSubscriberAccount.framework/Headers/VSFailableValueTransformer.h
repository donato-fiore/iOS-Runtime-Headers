// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSFAILABLEVALUETRANSFORMER_H
#define VSFAILABLEVALUETRANSFORMER_H

@class NSValueTransformer;



@interface VSFailableValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSValueTransformer *objectValueTransformer; // ivar: _objectValueTransformer


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg0 ;


@end


#endif