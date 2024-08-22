// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKLOCALSEPSYSTEMKEY_H
#define TKLOCALSEPSYSTEMKEY_H



#import "TKLocalSEPKey.h"

@interface TKLocalSEPSystemKey : TKLocalSEPKey {
    unsigned int _AKSSystemKeyType;
    unsigned int _AKSSystemKeyGeneration;
}




+(BOOL)hasSystemKey:(unsigned int)arg0 ACMHandle:(id)arg1 ;
+(void)initSystemKeyIDs;
-(BOOL)lifetimeControlWithType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)systemKey;
-(NSInteger)keySize;
-(id)_initWithObjectID:(id)arg0 authContext:(id)arg1 isIDUnknown:(*BOOL)arg2 error:(*id)arg3 ;
-(id)attestKey:(id)arg0 nonce:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)keyType;
-(id)objectID;
-(id)publicKeyWithError:(*id)arg0 ;
-(id)signDigest:(id)arg0 error:(*id)arg1 ;


@end


#endif