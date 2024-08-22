// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOVEACCESSORYPAIRINGSHAREDUSEROPERATION_H
#define HMDREMOVEACCESSORYPAIRINGSHAREDUSEROPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDRemoveAccessoryPairingOperation.h"

@interface HMDRemoveAccessoryPairingSharedUserOperation : HMDRemoveAccessoryPairingOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)initWithAccessory:(id)arg0 isOwnerIdentity:(BOOL)arg1 sharedUser:(id)arg2 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryIdentifier:(id)arg1 isOwnerIdentity:(BOOL)arg2 forSharedUser:(id)arg3 sharedUserPairingIdentity:(id)arg4 homeUUIDWhereAccessoryWasPaired:(id)arg5 ;
-(id)logIdentifier;


@end


#endif