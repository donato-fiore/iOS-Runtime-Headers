// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMREMOTELOGINHANDLER_H
#define HMREMOTELOGINHANDLER_H

@class NSString, ACAccount, NSUUID;
@protocol HMAccessoryInfoDataProviderDelegate, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "HMAccessoryInfoDataProvider.h"
#import "HMRemoteLoginAnisetteDataProvider.h"
#import "_HMContext.h"

@interface HMRemoteLoginHandler : NSObject <HMAccessoryInfoDataProviderDelegate, HMFMessageReceiver, NSSecureCoding, HMObjectMerge>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HMAccessoryInfoDataProvider *accessoryInfoDataProvider; // ivar: _accessoryInfoDataProvider
@property (readonly, nonatomic) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider; // ivar: _anisetteDataProvider
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, getter=isControllable) BOOL controllable;
@property (retain, nonatomic) NSString *currentSessionID; // ivar: _currentSessionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ACAccount *loggedInAccount; // ivar: _loggedInAccount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic, getter=isSessionInProgress) BOOL sessionInProgress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)_configureAccessoryInfoDataProviderIfNeeded;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)_accountFromAccountInfo:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)messageDestination;
-(void)_callAccountUpdateDelegate:(id)arg0 ;
-(void)_companionLoginWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)_configureWithContext:(id)arg0 ;
-(void)_handleLoginResponse:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_handleQueryProxiedDeviceResponse:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_handleRemoteLoginAccountUpdated:(id)arg0 ;
-(void)_handleRemoteLoginSignoutResponse:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_proxyLoginWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)_queryProxiedDevice:(id)arg0 ;
-(void)_signout:(id)arg0 ;
-(void)accessoryInfoDataProvider:(id)arg0 didReceiveUpdatesForAccessoryWithIdentifier:(id)arg1 accountInfo:(id)arg2 ;
-(void)companionLoginWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)postConfigure;
-(void)proxyLoginWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)queryProxiedDevice:(id)arg0 ;
-(void)registerForMessages;
-(void)signout:(id)arg0 ;
-(void)updateLoggedInAccount:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif