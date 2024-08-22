// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REBUCKETFEATURETRANSFORMER_H
#define _REBUCKETFEATURETRANSFORMER_H



#import "REFeatureTransformer.h"

@interface _REBucketFeatureTransformer : REFeatureTransformer {
    NSUInteger _count;
    NSInteger _bitCount;
}


@property (nonatomic) NSUInteger max; // ivar: _max
@property (nonatomic) NSUInteger min; // ivar: _min


+(id)functionName;
-(BOOL)_validateWithFeatures:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)_createTransformFromValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_featureCount;
-(NSUInteger)_outputType;
-(NSUInteger)hash;
-(id)init;
-(void)_updateConfigurationForCount:(NSUInteger)arg0 ;
-(void)configureWithInvocation:(id)arg0 ;
-(void)dealloc;


@end


#endif