// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKLOCALSEPREFKEY_H
#define TKLOCALSEPREFKEY_H



#import "TKLocalSEPKey.h"

@interface TKLocalSEPRefKey : TKLocalSEPKey {
    NSUInteger _debugID;
}


@property (readonly, nonatomic) *aks_ref_key_s AKSRefKey; // ivar: _AKSRefKey


-(BOOL)deleteWithError:(*id)arg0 ;
-(NSInteger)keySize;
-(id)_initWithKeyType:(id)arg0 keySize:(NSInteger)arg1 accessControl:(struct __SecAccessControl *)arg2 options:(id)arg3 authContext:(id)arg4 caller:(id)arg5 error:(*id)arg6 ;
-(id)_initWithObjectID:(id)arg0 authContext:(id)arg1 caller:(id)arg2 error:(*id)arg3 ;
-(id)attestKey:(id)arg0 nonce:(id)arg1 error:(*id)arg2 ;
-(id)computeSharedSecret:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)keyType;
-(id)objectID;
-(id)publicKeyWithError:(*id)arg0 ;
-(id)recryptData:(id)arg0 attributes:(id)arg1 error:(*id)arg2 ;
-(id)signDigest:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif