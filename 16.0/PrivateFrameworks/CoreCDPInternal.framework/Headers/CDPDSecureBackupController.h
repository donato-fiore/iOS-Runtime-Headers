// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDSECUREBACKUPCONTROLLER_H
#define CDPDSECUREBACKUPCONTROLLER_H

@class NSDictionary, CDPContext;
@protocol CDPDSecureBackupDelegate, CDPDOctagonTrustProxy, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

#import <Foundation/Foundation.h>

#import "CDPDSecureBackupConfiguration.h"

@interface CDPDSecureBackupController : NSObject

@property (retain, nonatomic) NSDictionary *cachedAccountInfo; // ivar: _cachedAccountInfo
@property (retain, nonatomic) CDPDSecureBackupConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CDPContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<CDPDSecureBackupDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fakeNearlyDepletedRecords; // ivar: _fakeNearlyDepletedRecords
@property (retain, nonatomic) NSObject<CDPDOctagonTrustProxy> *octagonTrustProxy; // ivar: _octagonTrustProxy
@property (retain, nonatomic) NSObject<CDPDSecureBackupProxy> *secureBackupProxy; // ivar: _secureBackupProxy
@property (readonly, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider; // ivar: _uiProvider


+(id)_dateWithSecureBackupDateString:(id)arg0 ;
+(id)_printableAccountInfo:(id)arg0 ;
+(id)_sanitizedInfoDictionary:(id)arg0 ;
-(BOOL)_disableRecoveryKey:(*id)arg0 ;
-(BOOL)_disableSecureBackup:(*id)arg0 ;
-(BOOL)_disableThenEnableWithInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)authenticatedEnableSecureBackupWithRecoveryKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)recordIsEmpty:(id)arg0 ;
-(BOOL)supportsRecoveryKey;
-(id)_accountInfo:(*id)arg0 ;
-(id)_clientMetadataWithSecretType:(NSUInteger)arg0 length:(NSUInteger)arg1 ;
-(id)_currentAnisetteData;
-(id)_recoverBackupDictionaryWithContext:(id)arg0 error:(*id)arg1 ;
-(id)_recoveryInfoDictionaryFromContext:(id)arg0 ;
-(id)handleCDPDevices:(id)arg0 ;
-(id)initWithContext:(id)arg0 secureBackupProxy:(id)arg1 octagonTrustProxy:(id)arg2 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 delegate:(id)arg2 ;
-(id)performEscrowRecoveryWithData:(id)arg0 error:(*id)arg1 ;
-(id)performEscrowRecoveryWithRecoveryContext:(id)arg0 error:(*id)arg1 ;
-(id)performSilentEscrowRecoveryWithCDPContext:(id)arg0 error:(*id)arg1 ;
-(void)_authenticatedEnableSecureBackupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_deleteAllBackupRecordsWithCompletion:(id)arg0 ;
-(void)_deleteSingleICSCBackupWithCompletion:(id)arg0 ;
-(void)_enableSecureBackupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(id)arg0 ;
-(void)_getOctagonEscrowBackupRecordDevicesWithOptionForceFetch:(BOOL)arg0 completion:(id)arg1 ;
-(void)accountInfoWithCompletion:(id)arg0 ;
-(void)backupRecordsArePresentWithCompletion:(id)arg0 ;
-(void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)arg0 completion:(id)arg1 ;
-(void)checkForExistingRecord:(id)arg0 ;
-(void)checkForExistingRecordMatchingPredicate:(id)arg0 forceFetch:(BOOL)arg1 completion:(id)arg2 ;
-(void)checkForExistingRecordWithPeerId:(id)arg0 completion:(id)arg1 ;
-(void)clearAccountInfoCache;
-(void)deleteAllBackupRecordsWithCompletion:(id)arg0 ;
-(void)deleteSingleICSCBackupWithCompletion:(id)arg0 ;
-(void)disableRecoveryKeyWithCompletion:(id)arg0 ;
-(void)disableSecureBackupWithCompletion:(id)arg0 ;
-(void)enableSecureBackupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)enableSecureBackupWithRecoveryKey:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllEscrowRecordsWithOptionForceFetch:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchEscrowRecordsWithOptionForceFetch:(BOOL)arg0 completion:(id)arg1 ;
-(void)getBackupRecordDevicesWithOptionForceFetch:(BOOL)arg0 completion:(id)arg1 ;
-(void)isEligibleForCDPWithCompletion:(id)arg0 ;
-(void)performEscrowRecoveryWithRecoveryContext:(id)arg0 completion:(id)arg1 ;
-(void)recoverSecureBackupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)synchronizeKeyValueStoreWithCompletion:(id)arg0 ;
-(void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif