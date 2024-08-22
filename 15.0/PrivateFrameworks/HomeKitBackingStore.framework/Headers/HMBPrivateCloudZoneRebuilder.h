// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBPRIVATECLOUDZONEREBUILDER_H
#define HMBPRIVATECLOUDZONEREBUILDER_H

@class HMFObject, NSString, NSUUID, CKRecord, HMFUnfairLock, NAFuture, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder;


#import "HMBCloudZone.h"
#import "HMBCloudZoneRebuilderStatus.h"

@interface HMBPrivateCloudZoneRebuilder : HMFObject <HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder>



@property (weak, nonatomic) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *lastRebuildUUID; // ivar: _lastRebuildUUID
@property (retain, nonatomic) CKRecord *previousSentinelRebuildRecord; // ivar: _previousSentinelRebuildRecord
@property (readonly, nonatomic) HMFUnfairLock *propertyLock; // ivar: _propertyLock
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture; // ivar: _rebuildCompleteFuture
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus; // ivar: _rebuilderStatus
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *uploadMonitorWatchdogTimer; // ivar: _uploadMonitorWatchdogTimer
@property (readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;


+(id)logCategory;
-(id)initWithCloudZone:(id)arg0 ;
-(id)logIdentifier;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(void)handleZoneChanged;
-(void)rebuild;
-(void)timerDidFire:(id)arg0 ;


@end


#endif