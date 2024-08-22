// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MESSAGEPROTECTION26GLTKEYDIVERSIFICATIONSWIFT_H
#define _TTC17MESSAGEPROTECTION26GLTKEYDIVERSIFICATIONSWIFT_H


#import <Foundation/Foundation.h>


@interface _TtC17MessageProtection26GLTKeyDiversificationSwift : NSObject



+(id)diversifyWithPublicKey:(struct __SecKey *)arg0 trackingPreventionSalt:(id)arg1 docId:(id)arg2 error:(*id)arg3 ;
+(struct __SecKey *)diversifyWithPrivateKey:(struct __SecKey *)arg0 docId:(id)arg1 trackingPreventionSalt:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif