// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONTRIGGERREGION_H
#define HULOCATIONTRIGGERREGION_H

@class CLCircularRegion, HMHome, NSString, CLLocation;

#import <Foundation/Foundation.h>


@interface HULocationTriggerRegion : NSObject

@property (readonly, nonatomic) CLCircularRegion *circularRegion; // ivar: _circularRegion
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) CLCircularRegion *defaultCircularRegionForCoordinate;
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSUInteger regionType; // ivar: _regionType


+(id)customRegionWithCircularRegion:(id)arg0 ;
+(id)homeRegionWithHome:(id)arg0 eventType:(NSUInteger)arg1 ;
-(id)initWithRegionType:(NSUInteger)arg0 home:(id)arg1 circularRegion:(id)arg2 eventType:(NSUInteger)arg3 ;


@end


#endif