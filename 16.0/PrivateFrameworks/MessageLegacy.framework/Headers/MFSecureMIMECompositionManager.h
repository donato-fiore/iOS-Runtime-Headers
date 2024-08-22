// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSECUREMIMECOMPOSITIONMANAGER_H
#define MFSECUREMIMECOMPOSITIONMANAGER_H

@class NSLock, NSString, NSMutableSet, NSMutableDictionary, NSSet;
@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MailAccount.h"
#import "MFError.h"

@interface MFSecureMIMECompositionManager : NSObject {
    id<MFSecureMIMECompositionManagerDelegate> *_delegate;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    *__SecIdentity _signingIdentity;
    MFError *_signingIdentityError;
    *__SecIdentity _encryptionIdentity;
    MFError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    NSUInteger _encryptionStatusSemaphore;
    NSUInteger _signingStatusSemaphore;
    BOOL _invalidated;
}


@property NSObject<MFSecureMIMECompositionManagerDelegate> *delegate;
@property (readonly) int encryptionPolicy;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet *recipients;
@property (readonly) MailAccount *sendingAccount;
@property (copy) NSString *sendingAddress;
@property (readonly) int signingPolicy;
@property (readonly) int signingStatus;


+(BOOL)isRevokedCertificate:(struct __SecCertificate *)arg0 sendingAddress:(id)arg1 ;
+(id)copyEncryptionCertificatesForAccount:(id)arg0 recipientAddress:(id)arg1 error:(*id)arg2 ;
+(struct __SecIdentity *)copyEncryptionIdentityForAccount:(id)arg0 sendingAddress:(id)arg1 error:(*id)arg2 ;
+(struct __SecIdentity *)copySigningIdentityForAccount:(id)arg0 sendingAddress:(id)arg1 error:(*id)arg2 ;
-(?)_nts_copyEncryptionIdentity:(?)arg0 error:(?)arg1 certificatesByRecipienterrorsByRecipient;
-(?)_nts_copySigningIdentityerror;
-(BOOL)_shouldAllowSend_nts;
-(BOOL)_shouldEncrypt_nts;
-(BOOL)_shouldSign_nts;
-(BOOL)_updateEncryptionStatus_nts;
-(BOOL)_updateSigningStatus_nts;
-(BOOL)shouldAllowSend;
-(id)compositionSpecification;
-(id)init;
-(id)initWithSendingAccount:(id)arg0 signingPolicy:(int)arg1 encryptionPolicy:(int)arg2 ;
-(id)initWithSigningPolicy:(int)arg0 encryptionPolicy:(int)arg1 ;
-(void)_determineEncryptionStatusWithNewRecipients:(id)arg0 ;
-(void)_determineEncryptionStatusWithSendingAddress:(id)arg0 ;
-(void)_determineIdentitiesWithSendingAddress:(id)arg0 forSigning:(BOOL)arg1 encryption:(BOOL)arg2 ;
-(void)_determineRevocationStatusWithIdentity:(struct __SecIdentity *)arg0 sendingAddress:(id)arg1 ;
-(void)_determineSigningStatusWithSendingAddress:(id)arg0 ;
-(void)_notifyDelegateEncryptionStatusDidChange:(int)arg0 certsByRecipient:(id)arg1 errorsByRecipient:(id)arg2 identity:(struct __SecIdentity *)arg3 error:(id)arg4 ;
-(void)_notifyDelegateSigningStatusDidChange:(int)arg0 identity:(struct __SecIdentity *)arg1 error:(id)arg2 ;
-(void)_nts_setEncryptionIdentity:(struct __SecIdentity *)arg0 error:(id)arg1 ;
-(void)_nts_setSigningIdentity:(struct __SecIdentity *)arg0 error:(id)arg1 ;
-(void)addRecipients:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeRecipients:(id)arg0 ;


@end


#endif