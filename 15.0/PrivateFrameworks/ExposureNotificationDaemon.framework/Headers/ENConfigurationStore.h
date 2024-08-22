// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENCONFIGURATIONSTORE_H
#define ENCONFIGURATIONSTORE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENConfigurationStore : NSObject

@property (nonatomic) BOOL developerServerConfiguration; // ivar: _developerServerConfiguration
@property (readonly, copy, nonatomic) NSString *directoryPath; // ivar: _directoryPath
@property (copy, nonatomic) NSString *regionIdentifierOverride; // ivar: _regionIdentifierOverride
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storeQueue; // ivar: _storeQueue


+(id)legacyAppCacheURL;
-(BOOL)_removeSubdivisionListForRegion:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveCountrySubdivisionList:(id)arg0 country:(id)arg1 error:(*id)arg2 ;
-(BOOL)_saveRegionConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveServerConfigurationResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)regionSupportsSubdivisions:(id)arg0 ;
-(BOOL)removeConfigurationsForRegion:(id)arg0 includingSubdivisions:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)removeConfigurationsForRegionCode:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeSubdivisionListForRegion:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveCountrySubdivisionList:(id)arg0 region:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveRegionConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveServerConfigurationResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveTemporaryCountrySubdivisionList:(id)arg0 region:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveTemporaryServerConfigurations:(id)arg0 error:(*id)arg1 ;
-(id)_agencyConfigurationForRegion:(id)arg0 ;
-(id)_allCachedServerResponseConfigurationsWithPrefix:(id)arg0 ;
-(id)_configurationForRegion:(id)arg0 ;
-(id)_directoryURLForCachedConfigurations;
-(id)_existingConfigurationForRegion:(id)arg0 ;
-(id)_existingConfigurationForRegionPath:(id)arg0 ;
-(id)_localeForRegion:(id)arg0 ;
-(id)_localeIdentifiersForRegion:(id)arg0 ;
-(id)_serverConfigurationForRegion:(id)arg0 ;
-(id)_serverConfigurationResponseForFileURL:(id)arg0 ;
-(id)_serverConfigurationResponseForRegion:(id)arg0 ;
-(id)_subdivisionListForRegion:(id)arg0 ;
-(id)agencyConfigurationForRegion:(id)arg0 ;
-(id)allCachedCountries;
-(id)allRegionConfigurations;
-(id)allRegionServerConfigurations;
-(id)allRegionServerConfigurationsForCountryCode:(id)arg0 ;
-(id)cachedAppConfiguationForBundleID:(id)arg0 forRegionID:(id)arg1 ;
-(id)configurationCacheURL;
-(id)configurationForRegion:(id)arg0 ;
-(id)developerConfigurationsURL;
-(id)developerSubdivisionListCacheURL;
-(id)downloadConfigurationForRegion:(id)arg0 ;
-(id)fileURLforCountrySubdivisionList:(id)arg0 ;
-(id)fileURLforRegionConfiguration:(id)arg0 ;
-(id)fileURLforRegionServerConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithDirectoryPath:(id)arg0 ;
-(id)legacyAppConfiguationForMobileCountryCode:(id)arg0 ;
-(id)localeForRegion:(id)arg0 ;
-(id)localeIdentifiersForRegion:(id)arg0 ;
-(id)regionCacheURL;
-(id)regionFromServerResponse:(id)arg0 ;
-(id)serverConfigurationCacheURL;
-(id)serverConfigurationForRegion:(id)arg0 ;
-(id)serverConfigurationResponseForRegion:(id)arg0 ;
-(id)serverExposureConfigurationForRegion:(id)arg0 ;
-(id)serverSubdivisionListCacheURL;
-(id)subdivisionListCacheURL;
-(id)subdivisionListForRegion:(id)arg0 ;
-(id)systemConfigurationCacheURL;
-(void)_enumerateCachedServerResponseConfigurationsWithDirectoryURL:(id)arg0 prefix:(id)arg1 handler:(id)arg2 ;
-(void)allAgencyServerRegionConfigurationsWithCompletion:(id)arg0 ;
-(void)allCachedServerResponseConfigurationsWithCompletion:(id)arg0 ;
-(void)allCachedServerResponseConfigurationsWithCountryCode:(id)arg0 completion:(id)arg1 ;
-(void)allRegionConfigurationsWithCompletion:(id)arg0 ;
-(void)allRegionServerConfigurationsWithCompletion:(id)arg0 ;
-(void)clearTemporaryCountrySubdivisionList;
-(void)clearTemporaryServerConfigurations;
-(void)enumerateCachedRegionServerConfigurationsWithCountryCode:(id)arg0 handler:(id)arg1 ;
-(void)enumerateCachedRegionServerConfigurationsWithHandler:(id)arg0 ;
-(void)prefsChanged;
-(void)resetStore;


@end


#endif