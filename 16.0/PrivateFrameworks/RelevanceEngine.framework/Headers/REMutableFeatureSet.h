// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMUTABLEFEATURESET_H
#define REMUTABLEFEATURESET_H



#import "REFeatureSet.h"

@interface REMutableFeatureSet : REFeatureSet



-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithFeature:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 ;
-(void)addFeature:(id)arg0 ;
-(void)intersetFeatureSet:(id)arg0 ;
-(void)minusFeatureSet:(id)arg0 ;
-(void)removeAllFeatures;
-(void)removeFeature:(id)arg0 ;
-(void)unionFeatureSet:(id)arg0 ;


@end


#endif