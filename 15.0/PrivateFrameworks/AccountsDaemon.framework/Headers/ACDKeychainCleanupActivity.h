// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDKEYCHAINCLEANUPACTIVITY_H
#define ACDKEYCHAINCLEANUPACTIVITY_H

@class ACAccountStore;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACDKeychainCleanupActivity : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_xpc_object> *_xpcActivity;
    NSObject<OS_dispatch_queue> *_activityQueue;
}




+(id)sharedActivity;
-(BOOL)_removeExpiredCredentials;
-(id)init;
-(void)_activityQueue_checkIn;
-(void)_activityQueue_configureXPCActivityWithCriteria:(id)arg0 ;
-(void)_activityQueue_queueCredentialItemWithAccount:(id)arg0 serviceName:(id)arg1 ;
-(void)_activityQueue_registerXPCActivityWithCriteria:(id)arg0 ;
-(void)_activityQueue_removeCredentialItem:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_activityQueue_removeExpiredCredentials;
-(void)_activityQueue_unregisterActivity;
-(void)checkInIfNecessary;
-(void)queueNonPersistentCredentialRemoval:(id)arg0 ;


@end


#endif