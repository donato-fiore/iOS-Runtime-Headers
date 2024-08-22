// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOKEYCHAINHELPER_H
#define SOKEYCHAINHELPER_H


#import <Foundation/Foundation.h>


@interface SOKeychainHelper : NSObject



-(int)addCredentialsToKeychainWithService:(id)arg0 withUsername:(id)arg1 withPassword:(id)arg2 requireUserPresence:(BOOL)arg3 ;
-(int)removeCredentialsFromKeychainWithService:(id)arg0 ;
-(int)retrieveCredentialsFromKeychainWithService:(id)arg0 returnedUsername:(*id)arg1 returnedPassword:(*id)arg2 ;
-(struct __SecIdentity *)identityForPersistientRef:(id)arg0 ;
-(struct __SecIdentity *)identityForUUIDString:(id)arg0 ;


@end


#endif