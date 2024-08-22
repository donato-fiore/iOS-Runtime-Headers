// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOKEYCHAINHELPER_H
#define SOKEYCHAINHELPER_H


#import <Foundation/Foundation.h>


@interface SOKeychainHelper : NSObject



-(BOOL)hasCredentialsInKeychainWithService:(id)arg0 ;
-(int)addCredentialsToKeychainWithService:(id)arg0 withUsername:(id)arg1 withPassword:(id)arg2 requireUserPresence:(BOOL)arg3 ;
-(int)removeCredentialsFromKeychainWithService:(id)arg0 ;
-(int)retrieveCredentialsFromKeychainWithContext:(id)arg0 service:(id)arg1 returnedUsername:(*id)arg2 returnedPassword:(*id)arg3 ;
-(struct __SecIdentity *)identityForPersistientRef:(id)arg0 ;
-(struct __SecIdentity *)identityForUUIDString:(id)arg0 ;


@end


#endif