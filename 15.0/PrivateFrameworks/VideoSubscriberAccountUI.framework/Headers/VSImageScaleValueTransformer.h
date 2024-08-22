// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIMAGESCALEVALUETRANSFORMER_H
#define VSIMAGESCALEVALUETRANSFORMER_H

@class NSValueTransformer;



@interface VSImageScaleValueTransformer : NSValueTransformer

@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg0 ;


@end


#endif