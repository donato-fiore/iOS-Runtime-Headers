// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINMATTERKEYPAIR_H
#define CHIPPLUGINMATTERKEYPAIR_H

@class HMFObject, NSString;
@protocol HMFLogging, MTRKeypair;



@interface CHIPPluginMatterKeypair : HMFObject <HMFLogging, MTRKeypair>



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
-(id)_getPrivateKeydata;
-(id)initWithAccount:(id)arg0 ;
-(id)logIdentifier;
-(id)serialize;
-(id)signMessageECDSA_DER:(id)arg0 ;
-(struct __SecKey *)pubkey;


@end


#endif