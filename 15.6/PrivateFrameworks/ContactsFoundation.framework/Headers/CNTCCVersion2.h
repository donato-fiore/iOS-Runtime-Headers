// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNTCCVERSION2_H
#define CNTCCVERSION2_H

@class NSNumber;
@protocol CNTCC, CNTCCSettings, CNTCCSimulation, OS_tcc_message_options, OS_tcc_server, OS_tcc_service;

#import <Foundation/Foundation.h>


@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>



@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue; // ivar: _isUnitTestingCachedValue
@property (readonly, nonatomic) NSObject<OS_tcc_message_options> *messageOptionsForAsyncPrompt; // ivar: _messageOptionsForAsyncPrompt
@property (readonly, nonatomic) NSObject<OS_tcc_message_options> *messageOptionsForSyncNoPrompt; // ivar: _messageOptionsForSyncNoPrompt
@property (readonly, nonatomic) NSObject<OS_tcc_server> *server; // ivar: _server
@property (readonly, nonatomic) NSObject<OS_tcc_service> *service; // ivar: _service
@property (retain, nonatomic) NSNumber *simulateStatus; // ivar: _simulateStatus


+(id)os_log;
-(BOOL)isAuthorizationRestricted;
-(BOOL)isUnitTesting;
-(NSInteger)checkAuthorizationStatusOfAuditToken:(id)arg0 assumedIdentity:(id)arg1 ;
-(NSInteger)checkAuthorizationStatusOfAuditToken:(struct ? )arg0 ;
-(NSInteger)checkAuthorizationStatusOfCurrentProcess;
-(NSInteger)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)arg0 ;
-(id)authorizationRecordForBundleIdentifier:(id)arg0 ;
-(id)authorizationRecords;
-(id)credentialForAuditToken:(id)arg0 assumedIdentity:(id)arg1 ;
-(id)init;
-(id)isUnitTestingImpl;
-(void)requestAuthorization:(NSInteger)arg0 auditToken:(id)arg1 assumedIdentity:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestAuthorizationWithCredential:(id)arg0 messageOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveAuthorizationRecord:(id)arg0 ;
-(void)simulateStatus:(NSInteger)arg0 ;
-(void)stopSimulation;


@end


#endif