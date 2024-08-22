// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMANAGEDPREFERENCESMANAGER_H
#define MCMANAGEDPREFERENCESMANAGER_H


#import <Foundation/Foundation.h>


@interface MCManagedPreferencesManager : NSObject



+(BOOL)addManagedPreferences:(id)arg0 toDomain:(id)arg1 ;
+(BOOL)removeManagedPreferences:(id)arg0 fromDomain:(id)arg1 ;
+(BOOL)setManagedPreferences:(id)arg0 forDomain:(id)arg1 ;
+(id)globalManagedPreferencesDomain;
+(id)managedPreferencesForDomain:(id)arg0 ;
+(id)managedPreferencesPathForDomain:(id)arg0 ;
+(void)sendManagedPreferencesChangedNotificationForDomains:(id)arg0 ;
+(void)updateGlobalManagedPreferencesByAddingPreferences:(id)arg0 removingPreferences:(id)arg1 ;


@end


#endif