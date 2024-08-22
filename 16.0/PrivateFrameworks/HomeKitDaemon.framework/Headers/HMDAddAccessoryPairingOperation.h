// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDADDACCESSORYPAIRINGOPERATION_H
#define HMDADDACCESSORYPAIRINGOPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDAccessoryBackgroundOperation.h"

@interface HMDAddAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)predicate;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)initWithAccessory:(id)arg0 newPairingIdentity:(id)arg1 asAdmin:(BOOL)arg2 shouldUpdateKeyChainEntry:(BOOL)arg3 ;
-(id)initWithAccessory:(id)arg0 newPairingIdentity:(id)arg1 asAdmin:(BOOL)arg2 shouldUpdateKeyChainEntry:(BOOL)arg3 userData:(id)arg4 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryIdentifier:(id)arg1 newPairingIdentity:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 asAdmin:(BOOL)arg4 shouldUpdateKeyChainEntry:(BOOL)arg5 userData:(id)arg6 ;
-(id)logIdentifier;
-(void)associateNewControllerKeyWithAccessory:(id)arg0 controllerKeyIdentifierToAssociate:(id)arg1 permissions:(NSUInteger)arg2 withCompletion:(id)arg3 ;


@end


#endif