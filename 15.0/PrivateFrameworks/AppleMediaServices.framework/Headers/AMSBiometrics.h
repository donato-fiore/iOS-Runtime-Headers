// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBIOMETRICS_H
#define AMSBIOMETRICS_H


#import <Foundation/Foundation.h>


@interface AMSBiometrics : NSObject



+(BOOL)_deleteKeysWithOptions:(id)arg0 error:(*id)arg1 ;
+(BOOL)_shouldAddBiometricHeader;
+(BOOL)deleteKeysWithError:(*id)arg0 ;
+(BOOL)isActionSupported:(NSInteger)arg0 withAccessControl:(struct __SecAccessControl *)arg1 ;
+(BOOL)isActionSupported:(NSInteger)arg0 withConstraints:(id)arg1 ;
+(BOOL)isAvailableForAccount:(id)arg0 ;
+(BOOL)isIdentityMapValid;
+(NSInteger)deviceState;
+(NSInteger)stateForAccount:(id)arg0 ;
+(NSInteger)type;
+(id)ACLVersionForAccessControl:(struct __SecAccessControl *)arg0 ;
+(id)ACLVersionForAccount:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)ACLVersionForConstraints:(id)arg0 ;
+(id)_stateHeaderValueForAccount:(id)arg0 ;
+(id)disableForAccount:(id)arg0 ;
+(id)handleResponse:(id)arg0 session:(id)arg1 taskInfo:(id)arg2 ;
+(id)headersWithAccount:(id)arg0 options:(id)arg1 signatureResult:(id)arg2 ;
+(id)identityMap;
+(id)minimumACLVersionForAction:(NSInteger)arg0 ;
+(id)resumptionHeadersFromRequest:(id)arg0 ;
+(id)setState:(NSInteger)arg0 forAccount:(id)arg1 ;
+(id)signChallenge:(id)arg0 withAccount:(id)arg1 clientInfo:(id)arg2 options:(id)arg3 ;
+(void)saveIdentityMap;
+(void)setDeviceState:(NSInteger)arg0 ;


@end


#endif