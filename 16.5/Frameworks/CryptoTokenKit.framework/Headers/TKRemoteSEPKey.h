// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKREMOTESEPKEY_H
#define TKREMOTESEPKEY_H

@class NSData;


#import "TKSEPKey.h"

@interface TKRemoteSEPKey : TKSEPKey {
    id *_keyType;
    NSInteger _keySize;
    BOOL _systemKey;
    NSData *_publicKey;
    id *_accessControl;
    BOOL _forceSystemSession;
}


@property (readonly, nonatomic) id *keyID; // ivar: _keyID


-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)lifetimeControlWithType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)processServerAtributes:(id)arg0 error:(*id)arg1 ;
-(BOOL)systemKey;
-(NSInteger)keySize;
-(id)_initWithKeyType:(id)arg0 keySize:(NSInteger)arg1 accessControl:(struct __SecAccessControl *)arg2 options:(id)arg3 authContext:(id)arg4 forceSystemSession:(BOOL)arg5 error:(*id)arg6 ;
-(id)_initWithObjectID:(id)arg0 authContext:(id)arg1 forceSystemSession:(BOOL)arg2 error:(*id)arg3 ;
-(id)attestKey:(id)arg0 nonce:(id)arg1 error:(*id)arg2 ;
-(id)computeSharedSecret:(id)arg0 error:(*id)arg1 ;
-(id)keyType;
-(id)objectID;
-(id)publicKeyWithError:(*id)arg0 ;
-(id)recryptData:(id)arg0 attributes:(id)arg1 error:(*id)arg2 ;
-(id)signDigest:(id)arg0 error:(*id)arg1 ;
-(id)withError:(*id)arg0 invoke:(id)arg1 ;
-(struct __SecAccessControl *)accessControl;


@end


#endif