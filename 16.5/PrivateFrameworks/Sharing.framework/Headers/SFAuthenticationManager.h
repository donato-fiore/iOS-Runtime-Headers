// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTHENTICATIONMANAGER_H
#define SFAUTHENTICATIONMANAGER_H

@class NSString;
@protocol SFAutoUnlockManagerDelegate, SFUnlockClientProtocol, SFAuthenticationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFAutoUnlockManager.h"

@interface SFAuthenticationManager : NSObject <SFAutoUnlockManagerDelegate, SFUnlockClientProtocol>



@property (readonly, nonatomic) SFAutoUnlockManager *autoUnlockManager; // ivar: _autoUnlockManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAuthenticationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)isEnabledForType:(NSUInteger)arg0 ;
-(BOOL)isSupportedForType:(NSUInteger)arg0 ;
-(id)authenticateForType:(NSUInteger)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)beganAttemptWithDevice:(id)arg0 ;
-(void)cancelAuthenticationSessionWithID:(id)arg0 ;
-(void)completedAuthenticationSessionWithID:(id)arg0 ;
-(void)completedUnlockWithDevice:(id)arg0 ;
-(void)enabledDevice:(id)arg0 ;
-(void)failedAuthenticationSessionWithID:(id)arg0 error:(id)arg1 ;
-(void)failedToEnableDevice:(id)arg0 error:(id)arg1 ;
-(void)failedUnlockWithError:(id)arg0 ;
-(void)keyDeviceLocked:(id)arg0 ;
-(void)listEligibleDevicesForType:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)manager:(id)arg0 beganAttemptWithDevice:(id)arg1 ;
-(void)manager:(id)arg0 completedUnlockWithDevice:(id)arg1 ;
-(void)manager:(id)arg0 failedAttemptWithError:(id)arg1 ;
-(void)startedAuthenticationSessionWithID:(id)arg0 ;


@end


#endif