// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRRTCMIGRATIONREPORTMANAGER_H
#define BRRTCMIGRATIONREPORTMANAGER_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "BRRTCMigrationMetric.h"

@interface BRRTCMigrationReportManager : NSObject

@property (nonatomic) BOOL metricSubmitted; // ivar: _metricSubmitted
@property (nonatomic) BOOL migrationBegan; // ivar: _migrationBegan
@property (retain, nonatomic) BRRTCMigrationMetric *migrationMetric; // ivar: _migrationMetric
@property (readonly, nonatomic) NSUUID *pairingID; // ivar: _pairingID


-(id)_likelyOffendingTransaction;
-(id)_transactionNameFromKey:(id)arg0 ;
-(id)initWithPairingID:(id)arg0 ;
-(id)retrieveMigrationMetric;
-(void)addDeviceDetails:(id)arg0 ;
-(void)addTransactionPhase:(id)arg0 withSuccess:(BOOL)arg1 withPairingID:(id)arg2 ;
-(void)setErrorCode:(id)arg0 domain:(id)arg1 description:(id)arg2 ;
-(void)setIsAutomation:(BOOL)arg0 ;
-(void)setMigrationDeviceUnpairedBecauseKeychainIsOff:(BOOL)arg0 ;
-(void)setMigrationDeviceUnpairedBecauseStale:(BOOL)arg0 ;
-(void)setMigrationFailedBTKeysNotSynced:(BOOL)arg0 ;
-(void)setMigrationSucceeded:(BOOL)arg0 ;
-(void)setSessionID:(id)arg0 ;
-(void)submitMetic;


@end


#endif