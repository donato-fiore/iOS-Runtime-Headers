// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSBIOMETRICIDENTITY_H
#define PSBIOMETRICIDENTITY_H


#import <Foundation/Foundation.h>


@interface PSBiometricIdentity : NSObject



+(NSInteger)maximumIdentityCount;
+(id)identities;
+(id)nameForIdentity:(id)arg0 ;
+(id)nextIdentityName;
+(void)removeIdentity:(id)arg0 ;
+(void)setName:(id)arg0 forIdentity:(id)arg1 ;


@end


#endif