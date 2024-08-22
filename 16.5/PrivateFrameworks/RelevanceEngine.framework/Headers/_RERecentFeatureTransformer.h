// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RERECENTFEATURETRANSFORMER_H
#define _RERECENTFEATURETRANSFORMER_H



#import "REFeatureTransformer.h"
#import "REFeatureValueCounter.h"

@interface _RERecentFeatureTransformer : REFeatureTransformer {
    REFeatureValueCounter *_counter;
    NSUInteger _bitCount;
}




+(BOOL)supportsInvalidation;
+(BOOL)supportsPersistence;
+(id)functionName;
-(BOOL)_validateWithFeatures:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_bitCount;
-(NSUInteger)_createTransformFromValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_featureCount;
-(NSUInteger)_outputType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_updateConfigurationForCount:(NSUInteger)arg0 ;
-(void)configureWithInvocation:(id)arg0 ;


@end


#endif