// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMUTABLEHOMEDATA_H
#define HMDMUTABLEHOMEDATA_H

@class NSArray, NSString, NSUUID, NSDictionary;
@protocol NSCopying, NSMutableCopying;


#import "HMDHomeData.h"
#import "HMDAccount.h"
#import "HMDApplicationData.h"
#import "HMDAccountHandle.h"

@interface HMDMutableHomeData : HMDHomeData <NSCopying, NSMutableCopying>



@property (copy, nonatomic) NSArray *UUIDsOfRemovedHomes;
@property (nonatomic) BOOL accessAllowedWhenLocked;
@property (copy, nonatomic) NSArray *accessories;
@property (retain, nonatomic) HMDAccount *account;
@property (copy, nonatomic) HMDApplicationData *applicationData;
@property (copy, nonatomic) NSArray *cloudZones;
@property (copy, nonatomic) NSString *currentDevice;
@property (copy, nonatomic) NSUUID *dataTag;
@property (nonatomic) NSInteger dataVersion;
@property (copy, nonatomic) NSDictionary *demoAccessories;
@property (nonatomic) BOOL demoFinalized;
@property (copy, nonatomic) NSArray *homes;
@property (copy, nonatomic) NSArray *incomingInvitations;
@property (copy, nonatomic) NSUUID *lastCurrentHomeUUID;
@property (copy, nonatomic) NSArray *pendingReasonSaved;
@property (copy, nonatomic) NSArray *pendingUserManagementOperations;
@property (copy, nonatomic) HMDAccountHandle *primaryAccountHandle;
@property (copy, nonatomic) NSUUID *primaryHomeUUID;
@property (nonatomic) NSInteger recoveryVersion;
@property (copy, nonatomic) NSArray *remoteAccounts;
@property (nonatomic) NSInteger residentEnabledState;
@property (nonatomic) NSInteger schemaVersion;
@property (copy, nonatomic) NSArray *unprocessedOperationIdentifiers;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif