// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSEPKEY_H
#define TKSEPKEY_H

@class NSDictionary, LAContext;

#import <Foundation/Foundation.h>


@interface TKSEPKey : NSObject

@property (readonly, nonatomic) *__SecAccessControl accessControl;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) LAContext *authContext; // ivar: _authContext
@property (readonly, nonatomic) NSInteger keySize;
@property (readonly, nonatomic) id *keyType;
@property (readonly, nonatomic) id *objectID;
@property (readonly, nonatomic) BOOL systemKey;


+(BOOL)canUseSEPLocally;
+(BOOL)hasSEP;
+(BOOL)isDaytona;
+(BOOL)isGibraltar;
+(id)_testing_callerEntitlements;
+(id)clientToken;
+(void)setClientToken:(id)arg0 ;
+(void)setContextErrorHandler:(id)arg0 ;
+(void)set_testing_callerEntitlements:(id)arg0 ;
+(void)setupKeybagForTesting:(BOOL)arg0 ;
-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)lifetimeControlWithType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_initWithAuthContext:(id)arg0 ;
-(id)attestKey:(id)arg0 nonce:(id)arg1 error:(*id)arg2 ;
-(id)computeSharedSecret:(id)arg0 error:(*id)arg1 ;
-(id)initLocalWithKeyType:(id)arg0 keySize:(NSInteger)arg1 accessControl:(struct __SecAccessControl *)arg2 options:(id)arg3 authContext:(id)arg4 caller:(id)arg5 error:(*id)arg6 ;
-(id)initLocalWithObjectID:(id)arg0 authContext:(id)arg1 caller:(id)arg2 error:(*id)arg3 ;
-(id)initWithAttributes:(id)arg0 authContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithKeyType:(id)arg0 keySize:(NSInteger)arg1 accessControl:(struct __SecAccessControl *)arg2 options:(id)arg3 authContext:(id)arg4 error:(*id)arg5 ;
-(id)initWithObjectID:(id)arg0 authContext:(id)arg1 error:(*id)arg2 ;
-(id)publicKeyWithError:(*id)arg0 ;
-(id)recryptData:(id)arg0 attributes:(id)arg1 error:(*id)arg2 ;
-(id)signDigest:(id)arg0 error:(*id)arg1 ;


@end


#endif