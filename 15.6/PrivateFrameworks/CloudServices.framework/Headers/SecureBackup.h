// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECUREBACKUP_H
#define SECUREBACKUP_H

@class NSString, NSDate, NSData, NSDictionary, NSError, EscrowPrerecord, NSNumber;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SESWrapper.h"

@interface SecureBackup : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *activityLabel; // ivar: _activityLabel
@property (copy, nonatomic) NSString *activityUUID; // ivar: _activityUUID
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *authToken; // ivar: _authToken
@property (retain, nonatomic) NSDate *backOffDate; // ivar: _backOffDate
@property (retain, nonatomic) NSData *certData; // ivar: _certData
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *countryDialCode; // ivar: _countryDialCode
@property (nonatomic) BOOL deleteAll; // ivar: _deleteAll
@property (nonatomic) BOOL deleteDoubleOnly; // ivar: _deleteDoubleOnly
@property (retain, nonatomic) NSString *doubleRecoveryUUID; // ivar: _doubleRecoveryUUID
@property (copy, nonatomic) NSString *dsid; // ivar: _dsid
@property (copy, nonatomic) NSString *duplicateEncodedMetadata; // ivar: _duplicateEncodedMetadata
@property (copy, nonatomic) NSString *emcsCred; // ivar: _emcsCred
@property (retain, nonatomic) NSDictionary *emcsDict; // ivar: _emcsDict
@property (nonatomic) BOOL emcsMode; // ivar: _emcsMode
@property (copy, nonatomic) NSString *encodedMetadata; // ivar: _encodedMetadata
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *escrowProxyURL; // ivar: _escrowProxyURL
@property (retain, nonatomic) NSDictionary *escrowRecord; // ivar: _escrowRecord
@property (nonatomic) BOOL excludeiCDPRecords; // ivar: _excludeiCDPRecords
@property (nonatomic) BOOL fmipRecovery; // ivar: _fmipRecovery
@property (copy, nonatomic) NSString *fmipUUID; // ivar: _fmipUUID
@property (copy, nonatomic) NSString *hsa2CachedPrerecordUUID; // ivar: _hsa2CachedPrerecordUUID
@property (copy, nonatomic) NSString *iCloudEnv; // ivar: _iCloudEnv
@property (retain, nonatomic) NSData *iCloudIdentityData; // ivar: _iCloudIdentityData
@property (copy, nonatomic) NSString *iCloudPassword; // ivar: _iCloudPassword
@property (nonatomic) BOOL icdp; // ivar: _icdp
@property (retain, nonatomic) NSData *idmsData; // ivar: _idmsData
@property (nonatomic) BOOL idmsRecovery; // ivar: _idmsRecovery
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSDictionary *metadataHash; // ivar: _metadataHash
@property (copy, nonatomic) NSString *oldEMCSCred; // ivar: _oldEMCSCred
@property (copy, nonatomic) NSString *passphrase; // ivar: _passphrase
@property (retain, nonatomic) EscrowPrerecord *prerecord; // ivar: _prerecord
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (copy, nonatomic) NSString *recoveryKey; // ivar: _recoveryKey
@property (nonatomic) BOOL recoveryResult; // ivar: _recoveryResult
@property (retain, nonatomic) NSString *recoveryUUID; // ivar: _recoveryUUID
@property (retain, nonatomic) SESWrapper *ses; // ivar: _ses
@property (nonatomic) BOOL silent; // ivar: _silent
@property (nonatomic) BOOL silentDoubleRecovery; // ivar: _silentDoubleRecovery
@property (copy, nonatomic) NSString *smsTarget; // ivar: _smsTarget
@property (copy, nonatomic) NSNumber *specifiedFederation; // ivar: _specifiedFederation
@property (nonatomic) BOOL stingray; // ivar: _stingray
@property (nonatomic) BOOL suppressServerFiltering; // ivar: _suppressServerFiltering
@property (nonatomic) BOOL synchronize; // ivar: _synchronize
@property (nonatomic) BOOL useCachedPassphrase; // ivar: _useCachedPassphrase
@property (nonatomic) BOOL useRecoveryPET; // ivar: _useRecoveryPET
@property (nonatomic) BOOL usesMultipleiCSC; // ivar: _usesMultipleiCSC
@property (nonatomic) BOOL usesRandomPassphrase; // ivar: _usesRandomPassphrase
@property (nonatomic) BOOL usesRecoveryKey; // ivar: _usesRecoveryKey
@property (copy, nonatomic) NSString *verificationToken; // ivar: _verificationToken


+(BOOL)moveToFederationAllowed:(id)arg0 altDSID:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)_ClassCreateSecureBackupConcurrentConnection;
+(id)_getAcceptedTermsForAltDSID:(id)arg0 withError:(*id)arg1 ;
+(id)getAcceptedTermsForAltDSID:(id)arg0 withError:(*id)arg1 ;
+(id)getAllAcceptedTermsWithError:(*id)arg0 ;
+(id)knownICDPFederations:(*id)arg0 ;
+(unsigned int)daemonPasscodeRequestOpinion:(*id)arg0 ;
+(unsigned int)needPasscodeForHSA2EscrowRecordUpdate:(*id)arg0 ;
+(void)asyncRequestEscrowRecordUpdate;
+(void)getAcceptedTermsForAltDSID:(id)arg0 reply:(id)arg1 ;
+(void)saveTermsAcceptance:(id)arg0 reply:(id)arg1 ;
-(BOOL)changeSMSTargetWithError:(*id)arg0 ;
-(BOOL)disableWithError:(*id)arg0 ;
-(BOOL)enableWithError:(*id)arg0 ;
-(BOOL)requiresDoubleEnrollment;
-(BOOL)updateMetadataWithError:(*id)arg0 ;
-(id)_CreateSecureBackupConnection;
-(id)backupWithInfo:(id)arg0 ;
-(id)beginHSA2PasscodeRequest:(BOOL)arg0 error:(*id)arg1 ;
-(id)beginHSA2PasscodeRequest:(BOOL)arg0 uuid:(id)arg1 error:(*id)arg2 ;
-(id)beginHSA2PasscodeRequest:(BOOL)arg0 uuid:(id)arg1 reason:(id)arg2 error:(*id)arg3 ;
-(id)cachePassphraseWithInfo:(id)arg0 ;
-(id)changeSMSTargetWithInfo:(id)arg0 ;
-(id)disableWithInfo:(id)arg0 ;
-(id)enableWithInfo:(id)arg0 ;
-(id)getAccountInfoWithError:(*id)arg0 ;
-(id)getAccountInfoWithInfo:(id)arg0 results:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActivityLabel:(id)arg0 ;
-(id)recoverSilentWithCDPContext:(id)arg0 allRecords:(id)arg1 error:(*id)arg2 ;
-(id)recoverWithCDPContext:(id)arg0 escrowRecord:(id)arg1 error:(*id)arg2 ;
-(id)recoverWithError:(*id)arg0 ;
-(id)recoverWithInfo:(id)arg0 results:(*id)arg1 ;
-(id)srpInitNonce;
-(id)srpRecoveryBlobFromSRPInitResponse:(id)arg0 ;
-(id)startSMSChallengeWithError:(*id)arg0 ;
-(id)startSMSChallengeWithInfo:(id)arg0 results:(*id)arg1 ;
-(id)uncachePassphraseWithInfo:(id)arg0 ;
-(id)updateMetadataWithInfo:(id)arg0 ;
-(void)backOffDateWithCompletionBlock:(id)arg0 ;
-(void)backOffDateWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)backupWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)cachePassphrase;
-(void)cachePassphraseWithCompletionBlock:(id)arg0 ;
-(void)cachePassphraseWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)cacheRecoveryKeyWithCompletionBlock:(id)arg0 ;
-(void)changeSMSTargetWithCompletionBlock:(id)arg0 ;
-(void)changeSMSTargetWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)createICDPRecordWithContents:(id)arg0 reply:(id)arg1 ;
-(void)disableWithCompletionBlock:(id)arg0 ;
-(void)disableWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)enableWithCompletionBlock:(id)arg0 ;
-(void)enableWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getAccountInfoWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)getAccountInfoWithInfo:(id)arg0 completionBlockWithResults:(id)arg1 ;
-(void)getAccountInfoWithResults:(id)arg0 ;
-(void)getCertificates:(id)arg0 ;
-(void)getCountrySMSCodesWithInfo:(id)arg0 completionBlockWithResults:(id)arg1 ;
-(void)getCountrySMSCodesWithResults:(id)arg0 ;
-(void)notificationInfo:(id)arg0 ;
-(void)populateWithInfo:(id)arg0 ;
-(void)prepareHSA2EscrowRecordContents:(BOOL)arg0 reply:(id)arg1 ;
-(void)recoverRecordContents:(id)arg0 ;
-(void)recoverWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)recoverWithInfo:(id)arg0 completionBlockWithResults:(id)arg1 ;
-(void)recoverWithResults:(id)arg0 ;
-(void)restoreKeychainAsyncWithPassword:(id)arg0 keybagDigest:(id)arg1 haveBottledPeer:(BOOL)arg2 viewsNotToBeRestored:(id)arg3 error:(*id)arg4 ;
-(void)srpRecoveryUpdateDSID:(id)arg0 recoveryPassphrase:(id)arg1 ;
-(void)startSMSChallengeWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)startSMSChallengeWithInfo:(id)arg0 completionBlockWithResults:(id)arg1 ;
-(void)startSMSChallengeWithResults:(id)arg0 ;
-(void)stashRecoveryDataWithCompletionBlock:(id)arg0 ;
-(void)stashRecoveryDataWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)stateCaptureWithCompletionBlock:(id)arg0 ;
-(void)uncachePassphrase;
-(void)uncachePassphraseWithCompletionBlock:(id)arg0 ;
-(void)uncachePassphraseWithInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)uncacheRecoveryKeyWithCompletionBlock:(id)arg0 ;
-(void)updateMetadataWithCompletionBlock:(id)arg0 ;
-(void)updateMetadataWithInfo:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif