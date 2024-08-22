// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RESINGLEFEATURESET_H
#define _RESINGLEFEATURESET_H



#import "REFeatureSet.h"
#import "REFeature.h"

@interface _RESingleFeatureSet : REFeatureSet {
    REFeature *_feature;
}




-(BOOL)containsFeature:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allFeatures;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)featureWithName:(id)arg0 ;
-(id)init;
-(id)initWithFeature:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 ;


@end


#endif