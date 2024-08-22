// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKDEVICE_H
#define BKDEVICE_H

@class NSString;
@protocol BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol, BKDeviceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BiometricKitXPCClient.h"
#import "BKDeviceDescriptor.h"

@interface BKDevice : NSObject <BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol>

 {
    BiometricKitXPCClient *_xpcClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BKDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKDeviceDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(BOOL)biometryAvailabilityInfo:(*NSInteger)arg0 fromDeviceInfo:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)deviceAvailableWithFailure:(*BOOL)arg0 ;
+(BOOL)extendedLockoutState:(*NSInteger)arg0 fromDeviceLockoutState:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)lockoutState:(*NSInteger)arg0 fromDeviceLockoutState:(NSInteger)arg1 error:(*id)arg2 ;
+(id)deviceWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)bioLockoutState:(*NSInteger)arg0 forUser:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)biometryAvailability:(*NSInteger)arg0 forUser:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)deviceHardwareState:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)dropAllUnlockTokensWithError:(*id)arg0 ;
-(BOOL)expressModeState:(*NSInteger)arg0 forUser:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)extendedBioLockoutState:(*NSInteger)arg0 forUser:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)forceBioLockoutForAllUsersWithError:(*id)arg0 ;
-(BOOL)forceBioLockoutForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)forceBioLockoutIfLockedForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)isDelegate;
-(BOOL)removeAllIdentitiesForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)removeIdentity:(id)arg0 error:(*id)arg1 ;
-(BOOL)setProtectedConfiguration:(id)arg0 forUser:(unsigned int)arg1 credentialSet:(id)arg2 error:(*id)arg3 ;
-(BOOL)setSystemProtectedConfiguration:(id)arg0 credentialSet:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateIdentity:(id)arg0 error:(*id)arg1 ;
-(id)createEnrollOperationWithError:(*id)arg0 ;
-(id)createMatchOperationWithError:(*id)arg0 ;
-(id)createPresenceDetectOperationWithError:(*id)arg0 ;
-(id)dispatchQueue;
-(id)effectiveProtectedConfigurationForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(id)freeIdentityCountForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(id)identitiesDatabaseHashForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(id)identitiesDatabaseUUIDForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(id)identitiesForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(id)identitiesWithError:(*id)arg0 ;
-(id)identityForUUID:(id)arg0 error:(*id)arg1 ;
-(id)lastMatchEventWithError:(*id)arg0 ;
-(id)maxIdentityCountWithError:(*id)arg0 ;
-(id)protectedConfigurationForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(id)systemProtectedConfigurationWithError:(*id)arg0 ;
-(void)connectionInterrupted;
-(void)dealloc;
-(void)enrollFeedback:(id)arg0 client:(NSUInteger)arg1 ;
-(void)enrollResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)enrollUpdate:(id)arg0 client:(NSUInteger)arg1 ;
-(void)homeButtonPressed:(NSUInteger)arg0 ;
-(void)matchResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)removeAllIdentitiesForUser:(unsigned int)arg0 async:(BOOL)arg1 reply:(id)arg2 ;
-(void)removeAllIdentitiesForUser:(unsigned int)arg0 reply:(id)arg1 ;
-(void)removeIdentity:(id)arg0 async:(BOOL)arg1 reply:(id)arg2 ;
-(void)removeIdentity:(id)arg0 reply:(id)arg1 ;
-(void)setProtectedConfiguration:(id)arg0 forUser:(unsigned int)arg1 credentialSet:(id)arg2 async:(BOOL)arg3 reply:(id)arg4 ;
-(void)setProtectedConfiguration:(id)arg0 forUser:(unsigned int)arg1 credentialSet:(id)arg2 reply:(id)arg3 ;
-(void)setSystemProtectedConfiguration:(id)arg0 credentialSet:(id)arg1 async:(BOOL)arg2 reply:(id)arg3 ;
-(void)setSystemProtectedConfiguration:(id)arg0 credentialSet:(id)arg1 reply:(id)arg2 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)taskResumeStatus:(int)arg0 client:(NSUInteger)arg1 ;
-(void)templateUpdate:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)touchIDButtonPressed:(BOOL)arg0 client:(NSUInteger)arg1 ;
-(void)updateIdentity:(id)arg0 async:(BOOL)arg1 reply:(id)arg2 ;
-(void)updateIdentity:(id)arg0 reply:(id)arg1 ;


@end


#endif