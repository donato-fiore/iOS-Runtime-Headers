// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REBINARYFEATURETRANSFORMER_H
#define _REBINARYFEATURETRANSFORMER_H



#import "REFeatureTransformer.h"

@interface _REBinaryFeatureTransformer : REFeatureTransformer

@property (nonatomic) NSUInteger threshold; // ivar: _threshold


+(id)functionName;
-(BOOL)_validateWithFeatures:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)_createTransformFromValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_featureCount;
-(NSUInteger)_outputType;
-(NSUInteger)hash;
-(id)init;
-(void)configureWithInvocation:(id)arg0 ;
-(void)dealloc;


@end


#endif