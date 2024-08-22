// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REWIDTHFEATURETRANSFORMER_H
#define _REWIDTHFEATURETRANSFORMER_H



#import "REFeatureTransformer.h"

@interface _REWidthFeatureTransformer : REFeatureTransformer {
    NSUInteger _mask;
    NSUInteger _width;
    NSUInteger _shift;
}




-(BOOL)_validateWithFeatures:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)_createTransformFromValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_featureCount;
-(NSUInteger)_outputType;
-(NSUInteger)hash;
-(id)initWithWidth:(NSUInteger)arg0 shift:(NSUInteger)arg1 ;


@end


#endif