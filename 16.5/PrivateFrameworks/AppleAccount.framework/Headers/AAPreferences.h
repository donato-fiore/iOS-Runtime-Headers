// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAPREFERENCES_H
#define AAPREFERENCES_H


#import <Foundation/Foundation.h>


@interface AAPreferences : NSObject



+(BOOL)isBackupForDataSeparationEnabled;
+(BOOL)isCustomHealthCheckIntervalEnabled;
+(BOOL)isExperimentalModeEnabled;
+(BOOL)isHealthCheckTTREnabled;
+(BOOL)isMultipleFullAccountsEnabled;
+(BOOL)isNeverSkipCustodianCheckEnabled;
+(BOOL)isRunningInStoreDemoMode;
+(BOOL)isSimulateUnhealthyCustodianEnabled;
+(BOOL)shouldEnableAccountUserNotifications;
+(BOOL)shouldEnableFastSignIn;
+(BOOL)shouldShowAccountContacts;
+(BOOL)shouldUseUnifiedLoginEndpoint;
+(NSInteger)customHealthCheckIntervalMinutes;
+(NSInteger)customHealthCheckReachabilityIntervalMinutes;
+(NSInteger)customHealthCheckVersion;
+(void)setCustomHealthCheckIntervalEnabled:(BOOL)arg0 ;
+(void)setCustomHealthCheckIntervalMinutes:(NSInteger)arg0 ;
+(void)setCustomHealthCheckVersion:(NSInteger)arg0 ;
+(void)setCustomHealthFailureReachabilityIntervalMinutes:(NSInteger)arg0 ;
+(void)setExperimentalModeEnabled:(BOOL)arg0 ;
+(void)setHealthCheckTTREnabled:(BOOL)arg0 ;
+(void)setMultipleFullAccountsEnabled:(BOOL)arg0 ;
+(void)setNeverSkipCustodianCheckEnabled:(BOOL)arg0 ;
+(void)setShouldShowAccountContacts:(BOOL)arg0 ;
+(void)setShouldUseUnifiedLoginEndpoint:(BOOL)arg0 ;
+(void)setSimulateUnhealthyCustodianEnabled:(BOOL)arg0 ;


@end


#endif