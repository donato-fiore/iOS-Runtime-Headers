// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)initWithAccessory:(id)arg0 sharedUser:(id)arg1 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryIdentifier:(id)arg1 forSharedUser:(id)arg2 sharedUserPairingIdentity:(id)arg3 homeUUIDWhereAccessoryWasPaired:(id)arg4 ;
-(id)logIdentifier;


@end


#endif