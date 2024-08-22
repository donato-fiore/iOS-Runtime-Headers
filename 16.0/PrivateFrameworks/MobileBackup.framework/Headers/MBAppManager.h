// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBAPPMANAGER_H
#define MBAPPMANAGER_H

@class MBSettingsContext, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MBAppManager : NSObject {
    MBSettingsContext *_settingsContext;
    NSMutableDictionary *_containersByID;
    NSMutableDictionary *_systemDataContainersByID;
    NSMutableDictionary *_systemSharedContainersByID;
}




+(id)_allPersistedDisabledDomainNamesForAccount:(id)arg0 ;
+(id)appManager;
+(id)appManagerWithSettingsContext:(id)arg0 ;
+(void)_persistDisabledDomainNames:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)_isContainerizedAppDomain:(id)arg0 ;
-(BOOL)isDomainNameEnabled:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)loadAppsWithAccount:(id)arg0 safeHarbors:(BOOL)arg1 dataSeparatedBundleIDs:(id)arg2 error:(*id)arg3 ;
-(BOOL)loadAppsWithAccount:(id)arg0 safeHarbors:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)loadAppsWithSafeHarbors:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)moveAppDataToSafeHarborForContainer:(id)arg0 usingIntermediateRestoreDir:(BOOL)arg1 withError:(*id)arg2 ;
-(BOOL)moveAppDataToSafeHarborForContainer:(id)arg0 withError:(*id)arg1 ;
-(id)_allDisabledDomainNamesForAccount:(id)arg0 ;
-(id)_copyAppsWithPlists:(id)arg0 safeHarbor:(BOOL)arg1 error:(*id)arg2 ;
-(id)_copySafeHarborsWithError:(*id)arg0 ;
-(id)_copySystemContainersWithError:(*id)arg0 ;
-(id)_copySystemContainersWithPlists:(id)arg0 error:(*id)arg1 ;
-(id)_copySystemPluginsWithError:(*id)arg0 ;
-(id)_copySystemPluginsWithPlists:(id)arg0 error:(*id)arg1 ;
-(id)_copyUserAppsForAccount:(id)arg0 dataSeparatedBundleIDs:(id)arg1 error:(*id)arg2 ;
-(id)_subdomainNamesForAppDomainNames:(id)arg0 ;
-(id)allApps;
-(id)allContainers;
-(id)allDisabledDomainNames;
-(id)allDisabledDomainNamesForAccount:(id)arg0 ;
-(id)allPlugins;
-(id)allRestrictedDomainNames;
-(id)allRestrictedDomainNamesForAccount:(id)arg0 ;
-(id)allSystemContainers;
-(id)appWithIdentifier:(id)arg0 ;
-(id)containerWithIdentifier:(id)arg0 ;
-(id)createSafeHarborForContainer:(id)arg0 error:(*id)arg1 ;
-(id)createSafeHarborForContainer:(id)arg0 usingIntermediateRestoreDir:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithSettingsContext:(id)arg0 ;
-(id)systemDataContainerWithIdentifier:(id)arg0 ;
-(id)systemSharedContainerWithIdentifier:(id)arg0 ;
-(void)_reconcileBooksAndHealthInDisabledDomainsList:(id)arg0 ;
-(void)_syncDisabledDomainsWithAllInstalledAppDomains:(id)arg0 account:(id)arg1 ;
-(void)removeAllDisabledDomainNamesForAccount:(id)arg0 ;
-(void)removeOldSafeHarbors;
-(void)removeStaleStateForUninstalledAppsForAccount:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 forDomainName:(id)arg1 account:(id)arg2 ;


@end


#endif