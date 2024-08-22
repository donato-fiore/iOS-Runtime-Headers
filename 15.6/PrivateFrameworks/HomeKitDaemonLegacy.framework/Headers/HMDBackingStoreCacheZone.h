// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTORECACHEZONE_H
#define HMDBACKINGSTORECACHEZONE_H

@class HMFObject, NSMutableArray, NSArray, NSString;



@interface HMDBackingStoreCacheZone : HMFObject

@property (retain) NSMutableArray *actualGroups; // ivar: _actualGroups
@property (readonly) NSArray *groups;
@property (readonly) NSInteger zoneID; // ivar: _zoneID
@property (readonly) NSString *zoneName; // ivar: _zoneName


-(id)dumpDebug;
-(id)initWithZoneID:(NSInteger)arg0 name:(id)arg1 ;


@end


#endif