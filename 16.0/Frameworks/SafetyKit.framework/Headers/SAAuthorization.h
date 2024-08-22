// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAAUTHORIZATION_H
#define SAAUTHORIZATION_H


#import <Foundation/Foundation.h>


@interface SAAuthorization : NSObject



+(BOOL)auditTokenAuthorizedForAnyEmergency:(struct ? )arg0 ;
+(BOOL)auditTokenAuthorizedForCrashDetection:(struct ? )arg0 ;
+(BOOL)connectionAuthorizedForAnyEmergency:(id)arg0 ;
+(BOOL)connectionAuthorizedForCrashDetection:(id)arg0 ;
+(BOOL)currentConnectionAuthorizedForAnyEmergency;
+(BOOL)currentConnectionAuthorizedForCrashDetection;
+(BOOL)isInFlight;
+(BOOL)startAuthorizationForBundleURL:(id)arg0 preflightAuthorizationStatus:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(NSInteger)authorizationStatusForCurrentConnection;
+(NSInteger)authorizationStatusWithTCCPreflightResult:(int)arg0 ;
+(id)approvedBundleId;
+(void)showAuthorizationPrompt;


@end


#endif