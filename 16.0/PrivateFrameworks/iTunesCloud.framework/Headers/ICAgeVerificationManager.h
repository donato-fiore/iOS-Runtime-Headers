// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAGEVERIFICATIONMANAGER_H
#define ICAGEVERIFICATIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICAgeVerificationState.h"

@interface ICAgeVerificationManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) ICAgeVerificationState *ageVerificationState;
@property (retain, nonatomic) NSMutableDictionary *ageVerificationStateInternal; // ivar: _ageVerificationStateInternal
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue


+(id)defaultManager;
-(BOOL)_bagHasValidKeys:(id)arg0 ;
-(BOOL)_processAgeVerificationState:(id)arg0 forDSID:(id)arg1 ;
-(id)_init;
-(id)ageVerificationStateForUserIdentity:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_runAgeVerificationForUserIdentity:(id)arg0 completion:(id)arg1 ;
-(void)_updateAgeVerificationStateAndSendNotification:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateAgeVerificationStateForUserIdentity:(id)arg0 sendNotification:(BOOL)arg1 completion:(id)arg2 ;
-(void)_userIdentityStoreDidChange:(id)arg0 ;
-(void)getAgeVerificationStateForUserIdentity:(id)arg0 completion:(id)arg1 ;
-(void)getAgeVerificationStateWithCompletion:(id)arg0 ;


@end


#endif