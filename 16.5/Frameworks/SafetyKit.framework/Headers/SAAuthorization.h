// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAUTHORIZATION_H
#define SAAUTHORIZATION_H


#import <Foundation/Foundation.h>


@interface SAAuthorization : NSObject



+(*void)_copyPrefsValueForKey:(id)arg0 ;
+(BOOL)_synchronizePrefs;
+(BOOL)auditTokenAuthorizedForAnyEmergency:(struct ? )arg0 ;
+(BOOL)auditTokenAuthorizedForCrashDetection:(struct ? )arg0 ;
+(BOOL)connectionAuthorizedForAnyEmergency:(id)arg0 ;
+(BOOL)connectionAuthorizedForCrashDetection:(id)arg0 ;
+(BOOL)currentConnectionAuthorizedForAnyEmergency;
+(BOOL)currentConnectionAuthorizedForCrashDetection;
+(BOOL)isInFlight;
+(BOOL)setAccess:(BOOL)arg0 forBundleId:(id)arg1 ;
+(BOOL)startAuthorizationForBundleURL:(id)arg0 preflightAuthorizationStatus:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(NSInteger)authorizationStatusForCurrentConnection;
+(NSInteger)authorizationStatusWithTCCPreflightResult:(int)arg0 ;
+(id)SASyncedBundleId;
+(id)approvedAppExcludingBundleId:(id)arg0 ;
+(id)approvedBundleId;
+(void)_setPrefsValue:(id)arg0 forKey:(id)arg1 ;
+(void)setThirdPartyBundleId:(id)arg0 ;
+(void)showAuthorizationPrompt;


@end


#endif