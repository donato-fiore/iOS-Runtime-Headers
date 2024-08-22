// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GLTKEYDIVERSIFICATION_H
#define GLTKEYDIVERSIFICATION_H


#import <Foundation/Foundation.h>


@interface GLTKeyDiversification : NSObject



+(id)diversifyPublicKey:(struct __SecKey *)arg0 trackingPreventionSalt:(id)arg1 withDocumentIdentifier:(id)arg2 error:(*id)arg3 ;
+(id)diversifyPublicKey:(struct __SecKey *)arg0 withDocumentIdentifier:(id)arg1 error:(*id)arg2 ;
+(struct __SecKey *)diversifyPrivateKey:(struct __SecKey *)arg0 withDocumentIdentifier:(id)arg1 trackingPreventionSalt:(id)arg2 error:(*id)arg3 ;


@end


#endif