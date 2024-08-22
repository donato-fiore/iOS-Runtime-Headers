// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REFEATURESET_H
#define REFEATURESET_H

@class NSArray;
@protocol REFeatureSetProperties, NSCopying, NSMutableCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface REFeatureSet : NSObject <REFeatureSetProperties, NSCopying, NSMutableCopying, NSFastEnumeration>



@property (readonly, nonatomic) NSArray *allFeatures;
@property (readonly, nonatomic) NSArray *allFeatures;
@property (readonly, nonatomic) NSUInteger count;


+(id)featureSet;
+(id)featureSetWithFeature:(id)arg0 ;
+(id)featureSetWithFeatures:(id)arg0 ;
-(BOOL)containsFeature:(id)arg0 ;
-(BOOL)intersectsFeatureSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFeatureSet:(id)arg0 ;
-(BOOL)isSubsetOfFeatureSet:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureWithName:(id)arg0 ;
-(id)init;
-(id)initWithFeature:(id)arg0 ;
-(id)initWithFeatureSet:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateFeaturesUsingBlock:(id)arg0 ;


@end


#endif