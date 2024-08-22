// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REBLOCKFEATURETRANSFORMER_H
#define _REBLOCKFEATURETRANSFORMER_H



#import "REFeatureTransformer.h"

@interface _REBlockFeatureTransformer : REFeatureTransformer {
    NSUInteger _featureCount;
    NSUInteger _outputFeatureType;
    id *_block;
}




-(BOOL)_validateWithFeatures:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)_createTransformFromValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_featureCount;
-(NSUInteger)_outputType;
-(NSUInteger)hash;
-(id)initWithFeatureCount:(NSUInteger)arg0 outputFeatureType:(NSUInteger)arg1 transformation:(id)arg2 ;


@end


#endif