// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REFEATURESET_H
#define _REFEATURESET_H

@class NSSet;


#import "REFeatureSet.h"

@interface _REFeatureSet : REFeatureSet {
    NSSet *_features;
}




-(BOOL)containsFeature:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)featureWithName:(id)arg0 ;
-(id)init;
-(id)initWithFeature:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 ;


@end


#endif