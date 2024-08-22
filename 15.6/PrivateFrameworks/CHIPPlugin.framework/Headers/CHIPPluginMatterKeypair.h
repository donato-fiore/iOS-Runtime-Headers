// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINMATTERKEYPAIR_H
#define CHIPPLUGINMATTERKEYPAIR_H

@class HMFObject, NSString;
@protocol HMFLogging, CHIPKeypair;



@interface CHIPPluginMatterKeypair : HMFObject <HMFLogging, CHIPKeypair>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL initialized; // ivar: _initialized
@property (retain) NSString *keychainAccount; // ivar: _keychainAccount
@property (readonly) *__SecKey privateKey; // ivar: _privateKey
@property (readonly) *__SecKey publicKey; // ivar: _publicKey
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_generateKeys;
-(BOOL)_reloadWithData:(id)arg0 ;
-(BOOL)_storePrivateKeyData:(id)arg0 ;
-(BOOL)deserialize:(id)arg0 ;
-(BOOL)initialize;
-(BOOL)reload;
-(id)ECDSA_sign_hash:(id)arg0 ;
-(id)_getPrivateKeydata;
-(id)initWithAccount:(id)arg0 ;
-(id)logIdentifier;
-(id)serialize;
-(struct __SecKey *)pubkey;


@end


#endif