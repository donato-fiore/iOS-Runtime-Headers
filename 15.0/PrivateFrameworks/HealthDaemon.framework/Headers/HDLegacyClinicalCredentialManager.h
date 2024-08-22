// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDLEGACYCLINICALCREDENTIALMANAGER_H
#define HDLEGACYCLINICALCREDENTIALMANAGER_H

@class NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDLegacyClinicalCredentialManager : NSObject {
    NSData *_cachedCredentialKey;
    NSObject<OS_dispatch_queue> *_credentialKeyQueue;
}


@property (copy, nonatomic) NSData *cachedCredentialKey;


-(BOOL)_storeCredentialKeyInKeychain:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteCredentialKeyFromKeychainWithError:(*id)arg0 ;
-(BOOL)unitTesting_storeCredentialKeyInKeychain:(id)arg0 error:(*id)arg1 ;
-(id)_encryptTokenData:(id)arg0 initializationVector:(id)arg1 operation:(unsigned int)arg2 error:(*id)arg3 ;
-(id)_generateCredentialKeyWithError:(*id)arg0 ;
-(id)_initializationVectorFromEncryptedTokenData:(id)arg0 error:(*id)arg1 ;
-(id)_payloadFromEncryptedTokenData:(id)arg0 error:(*id)arg1 ;
-(id)_retrieveCredentialKeyFromKeychainWithError:(*id)arg0 ;
-(id)_tokenDataFromToken:(id)arg0 error:(*id)arg1 ;
-(id)credentialKeyFingerprintWithError:(*id)arg0 ;
-(id)decryptTokenData:(id)arg0 error:(*id)arg1 ;
-(id)encryptToken:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(*id)arg0 ;


@end


#endif