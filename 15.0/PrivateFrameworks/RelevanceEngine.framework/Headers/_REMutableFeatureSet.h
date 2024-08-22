// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REMUTABLEFEATURESET_H
#define _REMUTABLEFEATURESET_H

@class NSMutableSet;


#import "REMutableFeatureSet.h"

@interface _REMutableFeatureSet : REMutableFeatureSet {
    NSMutableSet *_names;
    NSMutableSet *_features;
}




-(BOOL)containsFeature:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)featureWithName:(id)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithFeature:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 ;
-(void)addFeature:(id)arg0 ;
-(void)removeAllFeatures;
-(void)removeFeature:(id)arg0 ;


@end


#endif