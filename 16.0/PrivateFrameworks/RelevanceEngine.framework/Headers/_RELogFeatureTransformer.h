// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RELOGFEATURETRANSFORMER_H
#define _RELOGFEATURETRANSFORMER_H



#import "REFeatureTransformer.h"

@interface _RELogFeatureTransformer : REFeatureTransformer {
    CGFloat _base;
    NSUInteger _type;
}




-(BOOL)_validateWithFeatures:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)_createTransformFromValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_featureCount;
-(NSUInteger)_outputType;
-(NSUInteger)hash;
-(id)initWithBase:(id)arg0 ;


@end


#endif