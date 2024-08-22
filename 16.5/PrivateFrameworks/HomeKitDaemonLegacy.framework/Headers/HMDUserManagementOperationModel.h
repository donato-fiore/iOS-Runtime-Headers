// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERMANAGEMENTOPERATIONMODEL_H
#define HMDUSERMANAGEMENTOPERATIONMODEL_H

@class HMFPairingIdentity, NSArray, NSDate, NSNumber, HAPPairingIdentity;


#import "HMDBackingStoreModelObject.h"

@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) HMFPairingIdentity *accessoryPairingIdentity;
@property (retain, nonatomic) NSArray *dependencies;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSNumber *operationType;
@property (retain, nonatomic) HAPPairingIdentity *ownerPairingIdentity;
@property (retain, nonatomic) HAPPairingIdentity *userPairingIdentity;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif