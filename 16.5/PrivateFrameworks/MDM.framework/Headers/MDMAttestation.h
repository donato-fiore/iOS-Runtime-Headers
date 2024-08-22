// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMATTESTATION_H
#define MDMATTESTATION_H

@class NSArray, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface MDMAttestation : NSObject {
    *__SecKey _key;
    NSArray *_certs;
    NSData *_nonce;
    NSDate *_issued;
}




+(id)sharedInstance;
-(BOOL)_retrieveCerts:(*id)arg0 nonce:(*id)arg1 issued:(*id)arg2 ;
-(BOOL)_storeCerts:(id)arg0 nonce:(id)arg1 issued:(id)arg2 outError:(*id)arg3 ;
-(id)_expirationForIssued:(id)arg0 ;
-(id)_requestAttestationCertChainAnonymous:(BOOL)arg0 nonce:(id)arg1 outError:(*id)arg2 ;
-(id)attestationCertificateChainAnonymous:(BOOL)arg0 nonce:(id)arg1 outError:(*id)arg2 ;
-(id)initPrivate;
-(struct __SecKey *)attestationKey:(BOOL)arg0 outError:(*id)arg1 ;
-(void)reset;


@end


#endif