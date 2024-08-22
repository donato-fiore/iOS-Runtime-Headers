// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNTCCVERSION2_H
#define CNTCCVERSION2_H

@class NSNumber;
@protocol CNTCC, CNTCCSettings, CNTCCSimulation, OS_tcc_server, OS_tcc_service, OS_tcc_message_options;

#import <Foundation/Foundation.h>


@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>



@property (retain, nonatomic) NSNumber *isUnitTestingOnSimulatorCachedValue; // ivar: _isUnitTestingOnSimulatorCachedValue
@property (readonly, nonatomic) NSObject<OS_tcc_server> *server; // ivar: _server
@property (readonly, nonatomic) NSObject<OS_tcc_service> *service; // ivar: _service
@property (retain, nonatomic) NSNumber *simulateStatus; // ivar: _simulateStatus
@property (readonly, nonatomic) NSObject<OS_tcc_message_options> *syncOptions; // ivar: _syncOptions


-(BOOL)isAuthorizationRestricted;
-(BOOL)isUnitTesting;
-(NSInteger)checkAuthorizationStatusOfAuditToken:(struct ? )arg0 ;
-(NSInteger)checkAuthorizationStatusOfCurrentProcess;
-(id)authorizationRecordForBundleIdentifier:(id)arg0 ;
-(id)authorizationRecords;
-(id)checkIfUnitTesting;
-(id)init;
-(void)requestAuthorization:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)saveAuthorizationRecord:(id)arg0 ;
-(void)simulateStatus:(NSInteger)arg0 ;
-(void)stopSimulation;


@end


#endif