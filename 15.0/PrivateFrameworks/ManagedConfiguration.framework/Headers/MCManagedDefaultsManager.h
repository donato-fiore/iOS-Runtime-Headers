// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCMANAGEDDEFAULTSMANAGER_H
#define MCMANAGEDDEFAULTSMANAGER_H


#import <Foundation/Foundation.h>


@interface MCManagedDefaultsManager : NSObject



+(id)sharedManager;
-(BOOL)domainHasManagedDefaults:(id)arg0 ;
-(id)managedDefaultsForDomain:(id)arg0 ;
-(id)managedDefaultsPathForDomain:(id)arg0 ;
-(id)managedSystemDefaultsForDomain:(id)arg0 ;
-(void)addDefaults:(id)arg0 toManagedDomain:(id)arg1 ;
-(void)addGlobalPreferenceDefaults:(id)arg0 ;
-(void)removeAllManagedDefaultsFromDomain:(id)arg0 ;
-(void)removeDefaults:(id)arg0 fromManagedDomain:(id)arg1 ;
-(void)removeGlobalPreferenceDefaults:(id)arg0 ;
-(void)sendManagedDefaultsChangedNotificationForDomains:(id)arg0 ;
-(void)setDefaults:(id)arg0 forManagedDomain:(id)arg1 ;
-(void)setGlobalPreferencesDefaults:(id)arg0 ;


@end


#endif