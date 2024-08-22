// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMACCOUNTHELPER_H
#define RMACCOUNTHELPER_H


#import <Foundation/Foundation.h>


@interface RMAccountHelper : NSObject



+(BOOL)_removeAccount:(id)arg0 store:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeAccountWithEnrollmentURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeAccountWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(BOOL)updateAccountWithIdentifier:(id)arg0 enrollmentURL:(id)arg1 personaID:(id)arg2 error:(*id)arg3 ;
+(id)_createAccountWithEnrollmentURL:(id)arg0 username:(id)arg1 personaID:(id)arg2 description:(id)arg3 error:(*id)arg4 ;
+(id)createAccountWithEnrollmentURL:(id)arg0 username:(id)arg1 personaID:(id)arg2 description:(id)arg3 error:(*id)arg4 ;


@end


#endif