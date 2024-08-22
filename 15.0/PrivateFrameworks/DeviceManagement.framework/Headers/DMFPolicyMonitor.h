// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFPOLICYMONITOR_H
#define DMFPOLICYMONITOR_H

@class NSMutableDictionary, NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DMFPolicyMonitor : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // ivar: _firstUnlockQueue
@property (readonly, nonatomic) int firstUnlockToken; // ivar: _firstUnlockToken
@property (readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier; // ivar: _notificationTokensByPolicyMonitorIdentifier
@property (readonly, nonatomic) NSMutableArray *pendingRequests; // ivar: _pendingRequests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // ivar: _registrationCallbackQueue
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)hasFirstUnlocked;
+(char *)mobileKeyBagFirstUnlockNotificationName;
+(id)policyMonitor;
+(id)remoteInterface;
-(id)init;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)requestPoliciesForTypes:(id)arg0 withError:(*id)arg1 ;
-(void)_dispatchRequest:(id)arg0 ;
-(void)addRegistration:(id)arg0 forPolicyMonitorIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)invalidatePolicyMonitor:(id)arg0 ;
-(void)requestPoliciesForTypes:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif