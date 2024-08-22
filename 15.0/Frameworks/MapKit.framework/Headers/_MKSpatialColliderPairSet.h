// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKSPATIALCOLLIDERPAIRSET_H
#define _MKSPATIALCOLLIDERPAIRSET_H


#import <Foundation/Foundation.h>


@interface _MKSpatialColliderPairSet : NSObject {
    unordered_set<_MKAnnotationViewPair, std::hash<_MKAnnotationViewPair>, std::equal_to<_MKAnnotationViewPair>, std::allocator<_MKAnnotationViewPair>> _pairs;
}




-(id)initWithCapacity:(NSUInteger)arg0 ;


@end


#endif