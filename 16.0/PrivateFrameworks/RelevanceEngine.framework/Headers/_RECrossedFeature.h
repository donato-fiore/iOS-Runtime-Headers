// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RECROSSEDFEATURE_H
#define _RECROSSEDFEATURE_H

@class NSString, NSArray;


#import "REFeature.h"
#import "REFeatureSet.h"

@interface _RECrossedFeature : REFeature {
    NSString *_name;
    NSUInteger _featureType;
    NSUInteger _bitCount;
    REFeatureSet *_dependentFeatures;
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSArray *features; // ivar: _features


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)featureType;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_rootFeatures;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFeatures:(id)arg0 ;
-(id)name;
-(void)_computeHash;
-(void)_replaceDependentFeature:(id)arg0 withFeature:(id)arg1 ;
-(void)_updateFeaturesArray;


@end


#endif