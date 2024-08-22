// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LAKEYSTOREKEYNULL_H
#define _LAKEYSTOREKEYNULL_H

@class NSString, NSData;
@protocol LAKeyStoreKey;

#import <Foundation/Foundation.h>


@interface _LAKeyStoreKeyNull : NSObject <LAKeyStoreKey>

 {
    NSString *_identifier;
    NSData *_acl;
    NSString *_publicKeyHash;
}


@property (readonly, nonatomic) NSData *acl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *publicKeyHash;
@property (readonly) Class superclass;


-(BOOL)canDecryptUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)canEncryptUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)canSignUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)canVerifyUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(id)init;
-(void)decryptData:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)encryptData:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 completion:(id)arg2 ;
-(void)exchangeKeysWithPublicKey:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 secKeyParameters:(id)arg2 context:(id)arg3 completion:(id)arg4 ;
-(void)exportBytesWithCompletion:(id)arg0 ;
-(void)signData:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)verifyData:(id)arg0 signature:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 completion:(id)arg3 ;


@end


#endif