// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOCATIONTUPLE_H
#define HMDLOCATIONTUPLE_H

@class HMFObject, CLLocation;



@interface HMDLocationTuple : HMFObject

@property (readonly, copy) CLLocation *location; // ivar: _location
@property (readonly) NSUInteger reachableBTLEAccessoryCount; // ivar: _reachableBTLEAccessoryCount
@property (readonly) NSUInteger reachableIPAccessoryCount; // ivar: _reachableIPAccessoryCount
@property (readonly) NSUInteger reachableMediaAccessoryCount; // ivar: _reachableMediaAccessoryCount


-(id)attributeDescriptions;
-(id)initWithLocation:(id)arg0 reachableIPAccessoryCount:(NSUInteger)arg1 reachableBTLEAccessoryCount:(NSUInteger)arg2 reachableMediaAccessoryCount:(NSUInteger)arg3 ;


@end


#endif