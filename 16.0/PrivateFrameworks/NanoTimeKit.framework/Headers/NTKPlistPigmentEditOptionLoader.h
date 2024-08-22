// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKPLISTPIGMENTEDITOPTIONLOADER_H
#define NTKPLISTPIGMENTEDITOPTIONLOADER_H

@class NSArray, NSMutableArray, NSNumber, NSBundle, NSDictionary;

#import <Foundation/Foundation.h>


@interface NTKPlistPigmentEditOptionLoader : NSObject

@property (retain, nonatomic) NSArray *additionalBundles; // ivar: _additionalBundles
@property (retain, nonatomic) NSMutableArray *bundlePlistsFromFacesWithoutBundle; // ivar: _bundlePlistsFromFacesWithoutBundle
@property (retain, nonatomic) NSNumber *clhs; // ivar: _clhs
@property (retain, nonatomic) NSNumber *family; // ivar: _family
@property (retain, nonatomic) NSBundle *frameworkBundle; // ivar: _frameworkBundle
@property (nonatomic) BOOL ignoreSensitiveUIItems; // ivar: _ignoreSensitiveUIItems
@property (nonatomic) BOOL includesAllDeviceSpecificColors; // ivar: _includesAllDeviceSpecificColors
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSArray *plistFiles; // ivar: _plistFiles
@property (retain, nonatomic) NSDictionary *sharedConfigs; // ivar: _sharedConfigs
@property (retain, nonatomic) NSNumber *sku; // ivar: _sku
@property (retain, nonatomic) NSArray *sortedAdditionalPlistFiles; // ivar: _sortedAdditionalPlistFiles


+(BOOL)containsReservedKey:(id)arg0 inDictionary:(id)arg1 ;
+(BOOL)containsSeasonNamePrefix:(id)arg0 ;
+(NSInteger)compareColorFileNames:(id)arg0 otherFileName:(id)arg1 fileExtension:(id)arg2 ;
+(NSInteger)compareSeasonName:(id)arg0 otherSeasonName:(id)arg1 ;
+(NSInteger)compareSeasonWithoutYear:(id)arg0 otherSeasonNameWithoutYear:(id)arg1 ;
+(NSInteger)extractYearFromSeasonName:(id)arg0 ;
+(id)extractNameFromFullFileName:(id)arg0 fileExtension:(id)arg1 ;
+(id)indexForSeasonName:(id)arg0 ;
+(id)modifyContentRootForImplicitCollectionsIfNeeded:(id)arg0 ;
+(id)seasonNames;
+(id)sortedCollectionNamesFromCollections:(id)arg0 ;
+(id)sortedColorFileNames:(id)arg0 ;
+(id)sortedUniqueOptionNamesFromCollections:(id)arg0 ;
-(BOOL)hasFileLevelSensitiveUIConfig:(id)arg0 ;
-(BOOL)isValidPigment:(id)arg0 ;
-(id)alternativePropertyNamesForProperty:(id)arg0 inNode:(id)arg1 ;
-(id)alternativePropertyNamesForProperty:(id)arg0 inNode:(id)arg1 includesAllDeviceSpecificColors:(BOOL)arg2 ;
-(id)colorOptionsFromItemsDictionary:(id)arg0 collectionName:(id)arg1 applyConfig:(id)arg2 plistSuffix:(id)arg3 bundle:(id)arg4 ;
-(id)colorOptionsFromPListItems:(id)arg0 collectionName:(id)arg1 applyConfig:(id)arg2 plistSuffix:(id)arg3 bundle:(id)arg4 ;
-(id)configurationFromNode:(id)arg0 ;
-(id)configurationFromNode:(id)arg0 collectionName:(id)arg1 ;
-(id)configurationWithName:(id)arg0 fromNode:(id)arg1 collectionName:(id)arg2 ;
-(id)copyItemsApplyingConfiguration:(id)arg0 configuration:(id)arg1 ;
-(id)discoverCollectionWithName:(id)arg0 contentRoot:(id)arg1 collectionsRoot:(id)arg2 discoveredCollections:(id)arg3 privateDiscoveredCollections:(id)arg4 discoveredInvalidCollections:(id)arg5 invalidDependecies:(id)arg6 hasCycle:(*BOOL)arg7 plistSuffix:(id)arg8 bundle:(id)arg9 ;
-(id)extractSuffixFromFileName:(id)arg0 ;
-(id)importedCollectionsFromImports:(id)arg0 propertyName:(id)arg1 sharedCollectionsRoot:(id)arg2 parent:(id)arg3 discoveredCollections:(id)arg4 privateDiscoveredCollections:(id)arg5 discoveredInvalidCollections:(id)arg6 invalidDependencies:(id)arg7 hasCycle:(*BOOL)arg8 plistSuffix:(id)arg9 bundle:(id)arg10 ;
-(id)importedCollectionsWithNode:(id)arg0 sharedCollectionsRoot:(id)arg1 parent:(id)arg2 discoveredCollections:(id)arg3 privateDiscoveredCollections:(id)arg4 discoveredInvalidCollections:(id)arg5 invalidDependencies:(id)arg6 hasCycle:(*BOOL)arg7 plistSuffix:(id)arg8 bundle:(id)arg9 ;
-(id)init;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithPlistFiles:(id)arg0 ;
-(id)itemsFromNode:(id)arg0 collectionName:(id)arg1 applyingConfig:(id)arg2 plistSuffix:(id)arg3 bundle:(id)arg4 ;
-(id)loadFaceCollectionForAllSlotsForDomain:(id)arg0 propertyList:(id)arg1 bundle:(id)arg2 sharedCollections:(id)arg3 ;
-(id)loadFaceCollectionForDomain:(id)arg0 contentRoot:(id)arg1 faceCollectionsRoot:(id)arg2 sharedCollections:(id)arg3 plistSuffix:(id)arg4 bundle:(id)arg5 ;
-(id)loadFaceCollectionForDomain:(id)arg0 mainBundle:(id)arg1 faceBundle:(id)arg2 additionalBundles:(id)arg3 sharedCollections:(id)arg4 ;
-(id)loadNestedCollectionsFromNode:(id)arg0 parent:(id)arg1 config:(id)arg2 plistSuffix:(id)arg3 bundle:(id)arg4 ;
-(id)loadPropertyListFromFile:(id)arg0 ;
-(id)loadSharedCollections;
-(id)loadSharedCollectionsInMainBundle:(id)arg0 additionalBundles:(id)arg1 ;
-(id)loadSharedCollectionsWithPropertyList:(id)arg0 bundle:(id)arg1 ;
-(id)loadSharedConfigWithPropertyList:(id)arg0 bundle:(id)arg1 ;
-(id)parseColorOptionsForDomain:(id)arg0 bundle:(id)arg1 ;
-(id)parseColorOptionsForDomain:(id)arg0 bundle:(id)arg1 sharedCollections:(id)arg2 ;
-(id)plistFacesWithoutFaceBundle;
-(id)skuFileLevel:(id)arg0 ;
-(id)sortedColorPListBundles:(id)arg0 ;
-(id)sortedPlistFilesWithMainBundle:(id)arg0 faceBundle:(id)arg1 additionalBundles:(id)arg2 ;
-(void)applyConfigurationOnEditOption:(id)arg0 configuration:(id)arg1 ;
-(void)enumerateColorEditOptionFilesInBundle:(id)arg0 sorted:(BOOL)arg1 block:(id)arg2 ;
-(void)mergeCollections:(id)arg0 withCollections:(id)arg1 ;
-(void)mergeConfigs:(id)arg0 withConfigs:(id)arg1 ;


@end


#endif