// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSERACTIONPREDICTIONMANAGER_H
#define HMDUSERACTIONPREDICTIONMANAGER_H

@class HMFObject, NSString, HMBLocalZone;
@protocol HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, OS_dispatch_queue;


#import "HMDDatabaseZoneManager.h"

@interface HMDUserActionPredictionManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMDDatabaseZoneManager *zoneManager; // ivar: _zoneManager


-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(id)_removeZones;
-(id)initWithHome:(id)arg0 ;
-(id)initWithZoneManager:(id)arg0 workQueue:(id)arg1 ;
-(void)configure;
-(void)removeZones;
-(void)zoneManagerDidStart:(id)arg0 ;
-(void)zoneManagerDidStop:(id)arg0 ;


@end


#endif