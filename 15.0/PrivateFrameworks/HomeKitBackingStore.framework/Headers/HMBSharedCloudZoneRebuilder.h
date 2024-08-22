// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBSHAREDCLOUDZONEREBUILDER_H
#define HMBSHAREDCLOUDZONEREBUILDER_H

@class HMFObject, NSString, NAFuture;
@protocol HMFLogging, HMBCloudZoneRebuilder;


#import "HMBCloudZone.h"
#import "HMBCloudZoneRebuilderStatus.h"

@interface HMBSharedCloudZoneRebuilder : HMFObject <HMFLogging, HMBCloudZoneRebuilder>



@property (weak, nonatomic) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture; // ivar: _rebuildCompleteFuture
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus; // ivar: _rebuilderStatus
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;


+(id)logCategory;
-(id)initWithCloudZone:(id)arg0 ;
-(id)logIdentifier;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(void)handleZoneChanged;
-(void)rebuild;


@end


#endif