// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _RECHANGEFEATURETRANSFORMER_H
#define _RECHANGEFEATURETRANSFORMER_H

@class NSDate;


#import "REFeatureTransformer.h"

@interface _REChangeFeatureTransformer : REFeatureTransformer {
    CGFloat _interval;
    NSDate *_lastChangeDate;
}


@property (nonatomic) NSUInteger value; // ivar: _value


+(BOOL)supportsInvalidation;
+(id)functionName;
-(BOOL)_validateWithFeatures:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)_createTransformFromValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_featureCount;
-(NSUInteger)_outputType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_updateConfigurationForInterval:(CGFloat)arg0 ;
-(void)configureWithInvocation:(id)arg0 ;
-(void)dealloc;


@end


#endif