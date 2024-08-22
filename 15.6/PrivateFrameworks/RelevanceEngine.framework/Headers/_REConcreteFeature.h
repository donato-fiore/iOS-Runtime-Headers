// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _RECONCRETEFEATURE_H
#define _RECONCRETEFEATURE_H

@class NSString;


#import "REFeature.h"

@interface _REConcreteFeature : REFeature {
    NSString *_name;
    NSUInteger _featureType;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_bitCount;
-(NSUInteger)featureType;
-(NSUInteger)hash;
-(id)_rootFeatures;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 featureType:(NSUInteger)arg1 ;
-(id)name;


@end


#endif