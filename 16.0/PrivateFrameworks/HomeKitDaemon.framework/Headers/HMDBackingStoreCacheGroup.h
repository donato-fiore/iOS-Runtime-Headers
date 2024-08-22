// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORECACHEGROUP_H
#define HMDBACKINGSTORECACHEGROUP_H

@class HMFObject, NSString, CKServerChangeToken, CKRecordZoneSubscription;


#import "HMDBackingStoreCacheZone.h"

@interface HMDBackingStoreCacheGroup : HMFObject

@property NSInteger groupID; // ivar: _groupID
@property (readonly) NSString *owner; // ivar: _owner
@property (readonly) NSString *rootRecordName; // ivar: _rootRecordName
@property (retain) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (retain) CKRecordZoneSubscription *subscription; // ivar: _subscription
@property (readonly) NSString *subscriptionName; // ivar: _subscriptionName
@property (readonly, weak) HMDBackingStoreCacheZone *zone; // ivar: _zone


-(id)dumpDebug;
-(id)initWithGroupID:(NSInteger)arg0 zone:(id)arg1 rootRecord:(id)arg2 serverChangeToken:(id)arg3 subscriptionName:(id)arg4 owner:(id)arg5 subscription:(id)arg6 ;


@end


#endif