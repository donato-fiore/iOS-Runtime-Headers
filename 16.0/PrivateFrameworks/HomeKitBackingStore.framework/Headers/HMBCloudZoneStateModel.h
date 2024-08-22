// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBCLOUDZONESTATEMODEL_H
#define HMBCLOUDZONESTATEMODEL_H

@class NSNumber, NSSet, NSData;


#import "HMBCloudStateModel.h"
#import "HMBCloudZone.h"
#import "HMBCloudZoneRebuilderStatus.h"
#import "HMBCloudZoneID.h"

@interface HMBCloudZoneStateModel : HMBCloudStateModel

@property (weak) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (retain, nonatomic) NSNumber *needsZoneCreation;
@property (retain, nonatomic) NSNumber *needsZoneDeletion;
@property (retain, nonatomic) HMBCloudZoneRebuilderStatus *rebuilderStatus; // ivar: _rebuilderStatus
@property (retain, nonatomic) NSSet *subscriptions;
@property (retain, nonatomic) NSData *subscriptionsData;
@property (retain, nonatomic) HMBCloudZoneID *zoneID;


+(id)hmbProperties;
-(id)initWithModelID:(id)arg0 parentModelID:(id)arg1 ;


@end


#endif