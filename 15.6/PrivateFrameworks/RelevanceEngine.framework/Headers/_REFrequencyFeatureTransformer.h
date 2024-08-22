// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REFREQUENCYFEATURETRANSFORMER_H
#define _REFREQUENCYFEATURETRANSFORMER_H



#import "REFrequencyFeatureTransformer.h"
#import "REFeatureValueCounter.h"

@interface _REFrequencyFeatureTransformer : REFrequencyFeatureTransformer {
    REFeatureValueCounter *_counter;
    NSInteger _validCount;
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
-(void)increaseCountForFeatureValue:(id)arg0 ;


@end


#endif