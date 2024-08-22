// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSECUREMIMECOMPOSITIONMANAGER_H
#define MFSECUREMIMECOMPOSITIONMANAGER_H

@class NSLock, NSString, NSMutableSet, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue, MFSecureMIMECompositionManagerDelegate;

#import <Foundation/Foundation.h>

#import "MailAccount.h"
#import "MFError.h"

@interface MFSecureMIMECompositionManager : NSObject {
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
    id<MFSecureMIMECompositionManagerDelegate> *_delegate;
}


@property (weak) NSObject<MFSecureMIMECompositionManagerDelegate> *delegate;
@property (readonly) int encryptionPolicy;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet *recipients;
@property (readonly) MailAccount *sendingAccount;
@property (copy) NSString *sendingAddress;
@property (readonly) int signingPolicy;
@property (readonly) int signingStatus;


+(id)copyEncryptionCertificatesForAccount:(id)arg0 recipientAddresses:(id)arg1 errorsByAddress:(*id)arg2 ;
+(struct __SecIdentity *)copyEncryptionIdentityForAccount:(id)arg0 sendingAddress:(id)arg1 error:(*id)arg2 ;
+(struct __SecIdentity *)copySigningIdentityForAccount:(id)arg0 sendingAddress:(id)arg1 error:(*id)arg2 ;
+(unsigned int)evaluateTrustForSigningCertificate:(struct __SecCertificate *)arg0 sendingAddress:(id)arg1 ;
-(BOOL)shouldAllowSend;
-(id)compositionSpecification;
-(id)init;
-(id)initWithSendingAccount:(id)arg0 signingPolicy:(int)arg1 encryptionPolicy:(int)arg2 ;
-(id)initWithSigningPolicy:(int)arg0 encryptionPolicy:(int)arg1 ;
-(void)addRecipients:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeRecipients:(id)arg0 ;


@end


#endif