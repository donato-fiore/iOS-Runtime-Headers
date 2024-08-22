// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _RETRANSFORMEDFEATURE_H
#define _RETRANSFORMEDFEATURE_H

@class NSString;


#import "REFeature.h"
#import "REFeatureSet.h"
#import "REFeatureTransformer.h"

@interface _RETransformedFeature : REFeature {
    NSString *_name;
    NSUInteger _hash;
}


@property (readonly, nonatomic) REFeatureSet *features; // ivar: _features
@property (readonly, nonatomic) REFeatureTransformer *transformer; // ivar: _transformer


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)featureType;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_rootFeatures;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTransformer:(id)arg0 features:(id)arg1 ;
-(id)name;
-(void)_computeHash;
-(void)_replaceDependentFeature:(id)arg0 withFeature:(id)arg1 ;


@end


#endif