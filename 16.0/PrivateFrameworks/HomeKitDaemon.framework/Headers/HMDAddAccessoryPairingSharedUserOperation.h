// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDADDACCESSORYPAIRINGSHAREDUSEROPERATION_H
#define HMDADDACCESSORYPAIRINGSHAREDUSEROPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDAddAccessoryPairingOperation.h"

@interface HMDAddAccessoryPairingSharedUserOperation : HMDAddAccessoryPairingOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithAccessory:(id)arg0 forSharedUser:(id)arg1 sharedUserPairingIdentity:(id)arg2 asSharedAdmin:(BOOL)arg3 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryIdentifier:(id)arg1 forSharedUser:(id)arg2 sharedUserPairingIdentity:(id)arg3 asSharedAdmin:(BOOL)arg4 homeUUIDWhereAccessoryWasPaired:(id)arg5 ;
-(id)logIdentifier;


@end


#endif