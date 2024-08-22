// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCONCRETEKEYCHAIN_H
#define CRKCONCRETEKEYCHAIN_H

@class NSDictionary, NSString;
@protocol CRKKeychain;

#import <Foundation/Foundation.h>


@interface CRKConcreteKeychain : NSObject <CRKKeychain>



@property (readonly, copy, nonatomic) NSDictionary *baseQueryAttributes; // ivar: _baseQueryAttributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultKeychain;
-(*void)copyItemWithPersistentID:(id)arg0 itemClass:(id)arg1 ;
-(id)addCertificate:(id)arg0 toAccessGroup:(id)arg1 ;
-(id)addIdentity:(id)arg0 toAccessGroup:(id)arg1 ;
-(id)addItem:(*void)arg0 toAccessGroup:(id)arg1 ;
-(id)addPrivateKey:(id)arg0 toAccessGroup:(id)arg1 ;
-(id)certificateWithPersistentID:(id)arg0 ;
-(id)identityWithPersistentID:(id)arg0 ;
-(id)initWithBaseQueryAttributes:(id)arg0 ;
-(id)makeCertificateWithData:(id)arg0 ;
-(id)makeIdentityWithCertificate:(id)arg0 privateKey:(id)arg1 ;
-(id)makeIdentityWithConfiguration:(id)arg0 ;
-(id)makeItemWithPersistentID:(id)arg0 itemClass:(id)arg1 creationBlock:(id)arg2 ;
-(id)makePasswordFacade;
-(id)makePrivateKeyWithData:(id)arg0 ;
-(id)passwordForService:(id)arg0 ;
-(id)privateKeyWithPersistentID:(id)arg0 ;
-(void)removeItemWithPersistentID:(id)arg0 ;
-(void)setPassword:(id)arg0 forService:(id)arg1 accessGroup:(id)arg2 ;


@end


#endif