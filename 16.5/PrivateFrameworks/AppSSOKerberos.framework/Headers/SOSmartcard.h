// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSMARTCARD_H
#define SOSMARTCARD_H


#import <Foundation/Foundation.h>


@interface SOSmartcard : NSObject



+(?)getIdentityForPersistentRefidentityToReturn;
+(BOOL)pollSmartcardForIdentityWithPersistentRef:(id)arg0 tokenID:(id)arg1 ;
+(id)availableSmartCards;
+(id)searchForCachedIdentityPersistentRef:(id)arg0 tokenID:(id)arg1 ;
+(id)searchForCachedIdentityWithSerial:(struct __CFData *)arg0 withIssuer:(struct __CFData *)arg1 withTokenID:(id)arg2 ;
+(struct __SecIdentity *)getLocalAuthIdentityForCert:(id)arg0 withLAContext:(id)arg1 ;


@end


#endif