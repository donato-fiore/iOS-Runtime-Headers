// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEDATA_H
#define HMDHOMEDATA_H

@class HMFObject, NSArray, NSString, NSUUID, NSDictionary;
@protocol NSCopying, NSMutableCopying;


#import "HMDAccount.h"
#import "HMDApplicationData.h"
#import "HMDAccountHandle.h"

@interface HMDHomeData : HMFObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *UUIDsOfRemovedHomes; // ivar: _UUIDsOfRemovedHomes
@property (readonly, nonatomic) BOOL accessAllowedWhenLocked; // ivar: _accessAllowedWhenLocked
@property (readonly, copy, nonatomic) NSArray *accessories; // ivar: _accessories
@property (readonly, nonatomic) HMDAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) HMDApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy, nonatomic) NSArray *cloudZones; // ivar: _cloudZones
@property (readonly, copy, nonatomic) NSString *currentDevice; // ivar: _currentDevice
@property (readonly, copy, nonatomic) NSUUID *dataTag; // ivar: _dataTag
@property (nonatomic) NSInteger dataVersion; // ivar: _dataVersion
@property (readonly, copy, nonatomic) NSDictionary *demoAccessories; // ivar: _demoAccessories
@property (readonly, nonatomic) BOOL demoFinalized; // ivar: _demoFinalized
@property (readonly, copy, nonatomic) NSArray *homes; // ivar: _homes
@property (readonly, copy, nonatomic) NSArray *incomingInvitations; // ivar: _incomingInvitations
@property (readonly, copy, nonatomic) NSUUID *lastCurrentHomeUUID; // ivar: _lastCurrentHomeUUID
@property (readonly, copy, nonatomic) NSArray *pendingReasonSaved; // ivar: _pendingReasonSaved
@property (readonly, copy, nonatomic) NSArray *pendingUserManagementOperations; // ivar: _pendingUserManagementOperations
@property (readonly, nonatomic) HMDAccountHandle *primaryAccountHandle; // ivar: _primaryAccountHandle
@property (readonly, copy, nonatomic) NSUUID *primaryHomeUUID; // ivar: _primaryHomeUUID
@property (readonly, nonatomic) NSInteger recoveryVersion; // ivar: _recoveryVersion
@property (readonly, copy, nonatomic) NSArray *remoteAccounts; // ivar: _remoteAccounts
@property (readonly, nonatomic) NSInteger residentEnabledState; // ivar: _residentEnabledState
@property (readonly, nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (readonly, copy, nonatomic) NSArray *unprocessedOperationIdentifiers; // ivar: _unprocessedOperationIdentifiers


+(void)configureKeyedArchiverClassMappings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)homeWithUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif