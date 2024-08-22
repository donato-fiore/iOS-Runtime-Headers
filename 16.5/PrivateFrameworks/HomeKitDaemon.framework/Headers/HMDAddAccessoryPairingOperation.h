// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)addPairingToAirPlayAccessory:(id)arg0 newPairingIdentity:(id)arg1 isOwner:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)addPairingToHAPAccessory:(id)arg0 newPairingIdentity:(id)arg1 permissions:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)initWithAccessory:(id)arg0 newPairingIdentity:(id)arg1 asOwner:(BOOL)arg2 asAdmin:(BOOL)arg3 shouldUpdateKeyChainEntry:(BOOL)arg4 ;
-(id)initWithAccessory:(id)arg0 newPairingIdentity:(id)arg1 asOwner:(BOOL)arg2 asAdmin:(BOOL)arg3 shouldUpdateKeyChainEntry:(BOOL)arg4 userData:(id)arg5 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryIdentifier:(id)arg1 newPairingIdentity:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 asOwner:(BOOL)arg4 asAdmin:(BOOL)arg5 shouldUpdateKeyChainEntry:(BOOL)arg6 userData:(id)arg7 ;
-(id)logIdentifier;
-(void)associateNewControllerKeyWithAccessory:(id)arg0 controllerKeyIdentifierToAssociate:(id)arg1 permissions:(NSUInteger)arg2 withCompletion:(id)arg3 ;


@end


#endif