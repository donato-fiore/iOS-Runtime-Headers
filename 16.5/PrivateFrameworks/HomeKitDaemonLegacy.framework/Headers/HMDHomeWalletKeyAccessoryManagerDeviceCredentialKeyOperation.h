// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEWALLETKEYACCESSORYMANAGERDEVICECREDENTIALKEYOPERATION_H
#define HMDHOMEWALLETKEYACCESSORYMANAGERDEVICECREDENTIALKEYOPERATION_H

@class HMFObject, NSSet, NSData;
@protocol NSCopying;


#import "HMDUser.h"

@interface HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation : HMFObject <NSCopying>



@property (readonly, copy) NSSet *accessoriesUUIDs; // ivar: _accessoriesUUIDs
@property (readonly, copy) NSData *deviceCredentialKey; // ivar: _deviceCredentialKey
@property (readonly, weak) HMDUser *user; // ivar: _user


-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDeviceCredentialKey:(id)arg0 accessories:(id)arg1 user:(id)arg2 ;
-(id)initWithDeviceCredentialKey:(id)arg0 accessoriesUUIDs:(id)arg1 user:(id)arg2 ;
-(id)operationByMergingWithOperation:(id)arg0 ;


@end


#endif