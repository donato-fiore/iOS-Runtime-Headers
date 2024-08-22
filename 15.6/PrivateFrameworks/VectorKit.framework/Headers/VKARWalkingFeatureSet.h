// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKARWALKINGFEATURESET_H
#define VKARWALKINGFEATURESET_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VKARWalkingFeatureSet : NSObject {
    _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _features;
}


@property (readonly, nonatomic) NSArray *features;
@property NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithFeatures:(id)arg0 ;


@end


#endif