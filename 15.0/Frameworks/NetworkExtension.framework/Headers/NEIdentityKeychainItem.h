// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIDENTITYKEYCHAINITEM_H
#define NEIDENTITYKEYCHAINITEM_H



#import "NEKeychainItem.h"

@interface NEIdentityKeychainItem : NEKeychainItem



+(id)copyIdentities:(id)arg0 fromDomain:(NSInteger)arg1 ;
+(id)copyPersistentReferenceForIdentity:(struct __SecIdentity *)arg0 ;
+(id)copyPropertiesForIdentity:(struct __SecIdentity *)arg0 persistentReference:(id)arg1 ;
+(id)importPKCS12Data:(id)arg0 passphrase:(id)arg1 ;
-(id)copyPassword;
-(id)copyQueryWithReturnTypes:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPassword:(id)arg0 domain:(NSInteger)arg1 accessGroup:(id)arg2 ;
-(void)sync;
-(void)syncUsingConfiguration:(id)arg0 accountName:(id)arg1 passwordType:(NSInteger)arg2 identifierSuffix:(id)arg3 ;


@end


#endif