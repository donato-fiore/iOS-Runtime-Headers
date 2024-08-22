// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DABEHAVIOROPTIONS_H
#define DABEHAVIOROPTIONS_H


#import <Foundation/Foundation.h>


@interface DABehaviorOptions : NSObject



+(BOOL)CFNetworkLogging;
+(BOOL)_shouldForceCookies:(*BOOL)arg0 ;
+(BOOL)addDAManagedDefaults:(id)arg0 ;
+(BOOL)allIMAPServersSupportNotesSearch;
+(BOOL)alwaysUseCalendarHomeSync;
+(BOOL)babysitterEnabled;
+(BOOL)calDAVRemindersForAll;
+(BOOL)completelyIgnoreNotes;
+(BOOL)compressRequests;
+(BOOL)cookiesEnabled;
+(BOOL)customAutoDV2UserAgentEnabled;
+(BOOL)earlyPingEnabled;
+(BOOL)enablePromptForServerTrust;
+(BOOL)ignoreBadLDAPCerts;
+(BOOL)ignoreSupportedCommands;
+(BOOL)isAppleInternalInstall;
+(BOOL)isEASParsingLogEnabled;
+(BOOL)isInHoldingPattern;
+(BOOL)orphanCheckEnabled;
+(BOOL)perfLogging;
+(BOOL)promptForAllCerts;
+(BOOL)sendMeCardEverywhere;
+(BOOL)setDAManagedDefaults:(id)arg0 ;
+(BOOL)useContactsFramerwork;
+(BOOL)useThunderhillBetaServers;
+(BOOL)writeOutBrokenCancelationRequests;
+(CGFloat)defaultDAVProbeTimeout;
+(CGFloat)defaultEASTaskTimeoutOutWasFound:(*BOOL)arg0 ;
+(CGFloat)holidayCalendarRefreshInterval;
+(NSInteger)rem_changeTrackingBehaviors;
+(id)APSEnv;
+(id)DAManagedDefaultForKey:(id)arg0 ;
+(id)DAManagedDefaults;
+(id)_daManagedDefaultsPath;
+(id)allowlistedEASProtocols;
+(id)holidayCalendarURL;
+(int)numForgivable401s;
+(int)refreshThrottleTime;
+(void)_startListeningForNotifications;
+(void)initialize;
+(void)removeDAManagedDefaults:(id)arg0 ;


@end


#endif