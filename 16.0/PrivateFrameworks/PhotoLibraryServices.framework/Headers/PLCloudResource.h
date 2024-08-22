// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDRESOURCE_H
#define PLCLOUDRESOURCE_H

@class NSString, NSDate, CPLScopedIdentifier;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLCloudMaster.h"

@interface PLCloudResource : PLManagedObject

@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) NSString *assetUuid;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) PLCloudMaster *cloudMaster;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) NSUInteger fileSize;
@property (retain, nonatomic) NSString *fingerprint;
@property (nonatomic) NSInteger height;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isLocallyAvailable;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (retain, nonatomic) NSDate *prunedAt;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic) int sourceType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) NSInteger width;


+(BOOL)_countOfLocalCloudResourcesOfType:(NSUInteger)arg0 inManagedObjectContext:(id)arg1 forMediumSized:(BOOL)arg2 localCount:(*NSUInteger)arg3 unavailableCount:(*NSUInteger)arg4 error:(*id)arg5 ;
+(BOOL)countOfLocalCloudResourcesOfType:(NSUInteger)arg0 inManagedObjectContext:(id)arg1 localCount:(*NSUInteger)arg2 unavailableCount:(*NSUInteger)arg3 error:(*id)arg4 ;
+(BOOL)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)arg0 localCount:(*NSUInteger)arg1 unavailableCount:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)legacyCreateNewResourcesIn:(id)arg0 inManagedObjectContext:(id)arg1 forAsset:(id)arg2 ;
+(NSUInteger)bytesForAllResourcesInLibrary:(id)arg0 ;
+(id)assetUUIDToCloudResourcesForCloudMaster:(id)arg0 ;
+(id)cloudResourceForResourceType:(NSUInteger)arg0 forAssetUuid:(id)arg1 forCloudMaster:(id)arg2 ;
+(id)cloudResourcesForResourceType:(NSUInteger)arg0 forCloudMaster:(id)arg1 ;
+(id)duplicateCloudResource:(id)arg0 forAsset:(id)arg1 withFilePath:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 forAsset:(id)arg1 withCPLResource:(id)arg2 adjusted:(BOOL)arg3 withCreationDate:(id)arg4 ;
+(id)legacyCloudResourceForResourceType:(NSUInteger)arg0 forAsset:(id)arg1 ;
+(id)nonLocalResourcesInManagedObjectContext:(id)arg0 forAssetUUIDs:(id)arg1 cplResourceTypes:(id)arg2 ;
+(id)validatedExternalResourceFromCloudResource:(id)arg0 asset:(id)arg1 ;
+(id)validatedExternalResourcesUsingLegacyCloudResourcesFromAssetWithCloudMaster:(id)arg0 ;
+(void)_copyResourceFileFrom:(id)arg0 to:(id)arg1 ;
+(void)resetPrefetchStateForResourcesWithResourceType:(NSInteger)arg0 itemIdentifiers:(id)arg1 inLibrary:(id)arg2 ;
-(id)cplResourceIncludeFile:(BOOL)arg0 ;
-(id)description;
-(void)_duplicatePropertiesFromCloudResource:(id)arg0 withFilePath:(id)arg1 forAssetUuid:(id)arg2 ;
-(void)applyPropertiesFromCloudResource:(id)arg0 ;
-(void)prepareForDeletion;
-(void)repairCloudPlaceholderKindForVideoAsset:(id)arg0 ;


@end


#endif