// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUASSETSUPPORT_H
#define SUASSETSUPPORT_H


#import <Foundation/Foundation.h>


@interface SUAssetSupport : NSObject



+(BOOL)updateIsPreCRelease:(id)arg0 ;
+(NSInteger)requestCatalogDownload:(id)arg0 ;
+(id)OSVersionComponent:(NSUInteger)arg0 osVersion:(id)arg1 ;
+(id)_gestaltValueForKey:(struct __CFString *)arg0 ;
+(id)assetDownloadOptionsForDocumentation;
+(id)assetDownloadOptionsFromMetadata:(id)arg0 descriptor:(id)arg1 priority:(int)arg2 forBrain:(BOOL)arg3 ;
+(id)copyInstalledAssets;
+(id)copySUAssetForAssetID:(id)arg0 ;
+(id)copySuAssetInCatalogMatchingDescriptor:(id)arg0 ;
+(id)copySuAssetInCatalogMatchingDescriptor:(id)arg0 exactAssetIdMatch:(BOOL)arg1 installedOnly:(BOOL)arg2 ;
+(id)copySuAssetInstalledExactlyMatchingDescriptor:(id)arg0 ;
+(id)defaultAssetDownloadOptionsWithPriority:(int)arg0 ;
+(id)filterSuAssets:(id)arg0 MatchingDescriptor:(id)arg1 ;
+(id)findAssetWithMatcher:(id)arg0 localSearch:(BOOL)arg1 error:(*id)arg2 ;
+(id)findAssetWithMatcher:(id)arg0 localSearch:(BOOL)arg1 releaseDate:(*id)arg2 error:(*id)arg3 ;
+(id)findExactMatchInAssets:(id)arg0 forAssetId:(id)arg1 ;
+(id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg0 ;
+(id)getLocalDefaultSoftwareUpdateAssetIfExists;
+(id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(*id)arg0 ;
+(id)minorOSVersion:(id)arg0 ;
+(id)queryMetaDataOfType:(id)arg0 WithFilter:(id)arg1 installedOnly:(BOOL)arg2 error:(*id)arg3 ;
+(id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg0 withReleaseDate:(id)arg1 ;
+(id)tryCreateDocumentationFromDocumentationAsset:(id)arg0 ;
+(void)_cleanupAllAssetsOfType:(id)arg0 ;
+(void)_queue_cleanupAllInstalledAssetsOfType:(id)arg0 ;
+(void)cleanupAllInstalledAssets:(id)arg0 ;
+(void)cleanupAllSoftwareUpdateAndRelatedAssets;
+(void)cleanupAllSoftwareUpdateAssets;
+(void)purgeMSUUpdate:(id)arg0 ;
+(void)setAssetQueryFilters:(id)arg0 ;
+(void)setSUFilters:(id)arg0 ;


@end


#endif