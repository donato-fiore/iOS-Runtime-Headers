// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REFEATUREMAP_H
#define REFEATUREMAP_H

@class NSDictionary, NSSet, NSArray;
@protocol MLFeatureProvider, _REFeatureMapLoggingProperties, NSCopying;

#import <Foundation/Foundation.h>


@interface REFeatureMap : NSObject <MLFeatureProvider, _REFeatureMapLoggingProperties, NSCopying>

 {
    NSUInteger _hash;
    *NSUInteger _values;
    NSDictionary *_indices;
}


@property (readonly, nonatomic) NSSet *allFeatures;
@property (readonly, nonatomic) NSUInteger featureCount;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) NSArray *loggingValues;


+(id)defaultFeatureName;
-(BOOL)hasValueForFeature:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_count;
-(NSUInteger)hash;
-(NSUInteger)valueForFeature:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForFeature:(id)arg0 ;
-(id)featureValueForName:(id)arg0 ;
-(id)initWithFeatureMap:(id)arg0 ;
-(void)dealloc;
-(void)enumerateBoolFeaturesUsingBlock:(id)arg0 ;
-(void)enumerateDoubleFeaturesUsingBlock:(id)arg0 ;
-(void)enumerateEmptyFeaturesUsingBlock:(id)arg0 ;
-(void)enumerateFeatureValuesUsingBlock:(id)arg0 ;
-(void)enumerateFeaturesUsingBlock:(id)arg0 ;
-(void)enumerateInt64FeaturesUsingBlock:(id)arg0 ;
// -(void)enumerateInt64FeaturesUsingIndexedBlock:(id)arg0 emptyFeatureBlock:(unk)arg1  ;
-(void)enumerateStringFeaturesUsingBlock:(id)arg0 ;
-(void)removeAllValues;
-(void)removeValueForFeature:(id)arg0 ;
-(void)setFeatureValue:(id)arg0 forFeature:(id)arg1 ;
-(void)setValue:(NSUInteger)arg0 forFeature:(id)arg1 ;


@end


#endif