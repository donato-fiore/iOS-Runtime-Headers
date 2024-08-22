// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKINMEMORYKEYCHAIN_H
#define CRKINMEMORYKEYCHAIN_H

@class NSString, NSMutableDictionary;
@protocol CRKKeychain, CRKInMemoryKeychainDelegate;

#import <Foundation/Foundation.h>


@interface CRKInMemoryKeychain : NSObject <CRKKeychain>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKInMemoryKeychainDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *keychainItemsByPersistentID; // ivar: _keychainItemsByPersistentID
@property (readonly, nonatomic) NSMutableDictionary *passwordDatasByService; // ivar: _passwordDatasByService
@property (readonly) Class superclass;


-(id)addCertificate:(id)arg0 toAccessGroup:(id)arg1 ;
-(id)addIdentity:(id)arg0 toAccessGroup:(id)arg1 ;
-(id)addItem:(id)arg0 toAccessGroup:(id)arg1 ;
-(id)addPrivateKey:(id)arg0 toAccessGroup:(id)arg1 ;
-(id)certificateWithPersistentID:(id)arg0 ;
-(id)existingPersistentIDForItem:(id)arg0 ;
-(id)identityWithPersistentID:(id)arg0 ;
-(id)init;
-(id)itemWithPersistentID:(id)arg0 expectedProtocol:(id)arg1 ;
-(id)makeCertificateWithData:(id)arg0 ;
-(id)makeIdentityWithCertificate:(id)arg0 privateKey:(id)arg1 ;
-(id)makeIdentityWithConfiguration:(id)arg0 ;
-(id)makePrivateKeyWithData:(id)arg0 ;
-(id)passwordForService:(id)arg0 ;
-(id)privateKeyWithPersistentID:(id)arg0 ;
-(id)validityDateIntervalForConfiguration:(id)arg0 ;
-(void)enumerateKeychainUsingBlock:(id)arg0 ;
-(void)removeItemWithPersistentID:(id)arg0 ;
-(void)setPassword:(id)arg0 forService:(id)arg1 accessGroup:(id)arg2 ;


@end


#endif