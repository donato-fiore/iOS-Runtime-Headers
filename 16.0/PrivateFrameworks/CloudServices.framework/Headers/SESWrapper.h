// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SESWRAPPER_H
#define SESWRAPPER_H

@class NSString, NSData, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface SESWrapper : NSObject

@property (readonly, nonatomic) *ccses_crypto_t ccses; // ivar: _ccses
@property (readonly, nonatomic) *ckvr_srp_context ckvr; // ivar: _ckvr
@property (copy, nonatomic) NSString *decodedLabel; // ivar: _decodedLabel
@property (copy, nonatomic) NSString *dsid; // ivar: _dsid
@property (retain, nonatomic) NSData *escrowBlob; // ivar: _escrowBlob
@property (copy, nonatomic) NSDate *escrowDate; // ivar: _escrowDate
@property (readonly, copy, nonatomic) NSDictionary *escrowRecord; // ivar: _escrowRecord
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain) NSData *recoveryBlob; // ivar: _recoveryBlob
@property (copy, nonatomic) NSString *recoveryPassphrase; // ivar: _recoveryPassphrase
@property (nonatomic) BOOL recoveryPassphraseMutable; // ivar: _recoveryPassphraseMutable
@property (nonatomic) int reqVersion; // ivar: _reqVersion
@property (readonly, nonatomic) *ccsrp_ctx srp; // ivar: _srp
@property (readonly, nonatomic) BOOL useCKVR; // ivar: _useCKVR


-(id)decodedEscrowRecordFromData:(id)arg0 stingray:(BOOL)arg1 env:(id)arg2 duplicate:(BOOL)arg3 ;
-(id)encodedEscrowRecordWithPublicKey:(struct __SecKey *)arg0 error:(*id)arg1 ;
-(id)initWithDSID:(id)arg0 escrowRecordContents:(id)arg1 recoveryPassphrase:(id)arg2 recordID:(id)arg3 recordLabel:(id)arg4 ;
-(id)initWithDSID:(id)arg0 escrowRecordContents:(id)arg1 recoveryPassphrase:(id)arg2 recordID:(id)arg3 recordLabel:(id)arg4 ckvrFlag:(BOOL)arg5 reqVersion:(int)arg6 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ckvrFlag:(BOOL)arg1 reqVersion:(int)arg2 ;
-(id)initWithRequest:(id)arg0 reqVersion:(int)arg1 ;
-(id)recoveryResponseForBlob:(id)arg0 ;
-(id)srpRecoveryBlobFromData:(id)arg0 error:(*id)arg1 ;
-(id)srpResponseForEscrowBlob:(id)arg0 withKey:(struct __SecKey *)arg1 withFullCCKey:(struct ccrsa_full_ctx *)arg2 ;
-(void)dealloc;
-(void)srpRecoveryUpdateDSID:(id)arg0 recoveryPassphrase:(id)arg1 ;


@end


#endif