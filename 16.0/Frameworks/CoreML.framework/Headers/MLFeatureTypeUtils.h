// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLFEATURETYPEUTILS_H
#define MLFEATURETYPEUTILS_H


#import <Foundation/Foundation.h>


@interface MLFeatureTypeUtils : NSObject



+(BOOL)canShapeArrayBePromotedFrom:(id)arg0 to:(id)arg1 ;
+(NSInteger)featureTypeForObject:(id)arg0 ;
+(NSInteger)featureTypeForValuesInArray:(id)arg0 error:(*id)arg1 ;
+(id)descriptionForType:(NSInteger)arg0 ;
+(id)featureDescriptionWithName:(id)arg0 consistentWithFeatureValues:(id)arg1 error:(*id)arg2 ;
+(id)featureValuesWithConsistentTypeFromArray:(id)arg0 error:(*id)arg1 ;


@end


#endif