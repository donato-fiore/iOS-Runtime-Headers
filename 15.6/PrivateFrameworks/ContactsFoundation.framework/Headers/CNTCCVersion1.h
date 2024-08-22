// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNTCCVERSION1_H
#define CNTCCVERSION1_H

@class NSNumber;
@protocol CNTCC, CNTCCSettings, CNTCCSimulation;

#import <Foundation/Foundation.h>


@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>



@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue; // ivar: _isUnitTestingCachedValue
@property (retain, nonatomic) NSNumber *simulateStatus; // ivar: _simulateStatus


+(id)createAppAuthorizationRecordFromTCCAppInfo:(id)arg0 bundleIdentifier:(id)arg1 ;
-(BOOL)isAuthorizationRestricted;
-(BOOL)isUnitTesting;
-(NSInteger)checkAuthorizationStatusOfAuditToken:(id)arg0 assumedIdentity:(id)arg1 ;
-(NSInteger)checkAuthorizationStatusOfAuditToken:(struct ? )arg0 ;
-(NSInteger)checkAuthorizationStatusOfCurrentProcess;
-(NSInteger)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)arg0 ;
-(id)authorizationRecordForBundleIdentifier:(id)arg0 ;
-(id)authorizationRecords;
-(id)isUnitTestingImpl;
-(void)requestAuthorization:(NSInteger)arg0 auditToken:(id)arg1 assumedIdentity:(id)arg2 completionHandler:(id)arg3 ;
-(void)saveAuthorizationRecord:(id)arg0 ;
-(void)simulateStatus:(NSInteger)arg0 ;
-(void)stopSimulation;


@end


#endif