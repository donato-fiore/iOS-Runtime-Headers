// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAPREFERENCES_H
#define AAPREFERENCES_H


#import <Foundation/Foundation.h>


@interface AAPreferences : NSObject



+(BOOL)isCustomHealthCheckIntervalEnabled;
+(BOOL)isExperimentalModeEnabled;
+(BOOL)isMultipleFullAccountsEnabled;
+(BOOL)isRunningInStoreDemoMode;
+(BOOL)shouldShowAccountContacts;
+(BOOL)shouldUseUnifiedLoginEndpoint;
+(NSInteger)customHealthCheckIntervalMinutes;
+(void)setCustomHealthCheckIntervalEnabled:(BOOL)arg0 ;
+(void)setCustomHealthCheckIntervalMinutes:(NSInteger)arg0 ;
+(void)setExperimentalModeEnabled:(BOOL)arg0 ;
+(void)setMultipleFullAccountsEnabled:(BOOL)arg0 ;
+(void)setShouldShowAccountContacts:(BOOL)arg0 ;
+(void)setShouldUseUnifiedLoginEndpoint:(BOOL)arg0 ;


@end


#endif