// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DELOGGINGPREFERENCES_H
#define DELOGGINGPREFERENCES_H


#import <Foundation/Foundation.h>


@interface DELoggingPreferences : NSObject



+(NSUInteger)numberOfManagedLoggingPreferences;
+(id)_subsystemPayloadForURL:(id)arg0 error:(*id)arg1 ;
+(id)combinedLoggingPayloadForURLs:(id)arg0 error:(*id)arg1 ;
+(id)loggingPayloadForURL:(id)arg0 error:(*id)arg1 ;
+(id)managedLoggingProfilesDirectory;
+(id)managedLoggingProfilesDirectoryForSessionIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
+(id)removeLoggingProfileForSessionIdentifier:(id)arg0 extensionIdentifier:(id)arg1 error:(*id)arg2 ;
+(void)installLoggingProfile:(id)arg0 sessionIdentifier:(id)arg1 extensionIdentifier:(id)arg2 error:(*id)arg3 ;


@end


#endif