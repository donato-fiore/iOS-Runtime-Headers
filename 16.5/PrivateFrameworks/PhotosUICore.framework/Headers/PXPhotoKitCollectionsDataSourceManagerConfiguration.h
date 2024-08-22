// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITCOLLECTIONSDATASOURCEMANAGERCONFIGURATION_H
#define PXPHOTOKITCOLLECTIONSDATASOURCEMANAGERCONFIGURATION_H

@class NSPredicate, PHCollectionList, PHFetchResult;

#import <Foundation/Foundation.h>


@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject

@property (nonatomic) NSUInteger assetTypesToInclude; // ivar: _assetTypesToInclude
@property (retain, nonatomic) NSPredicate *assetsFilterPredicate; // ivar: _assetsFilterPredicate
@property (readonly) PHCollectionList *collectionList; // ivar: _collectionList
@property (nonatomic) NSUInteger collectionTypesToInclude; // ivar: _collectionTypesToInclude
@property (readonly) PHFetchResult *collectionsFetchResult; // ivar: _collectionsFetchResult
@property (nonatomic) BOOL includePeopleAlbum; // ivar: _includePeopleAlbum
@property (nonatomic) NSInteger pausedChangeDetailsBufferLength; // ivar: _pausedChangeDetailsBufferLength
@property (nonatomic) BOOL separateSectionsForSmartAndUserCollections; // ivar: _separateSectionsForSmartAndUserCollections
@property (nonatomic) BOOL shouldExcludePrivacySensitiveAlbums; // ivar: _shouldExcludePrivacySensitiveAlbums
@property BOOL shouldIgnoreLibraryChanges; // ivar: _shouldIgnoreLibraryChanges
@property (nonatomic) BOOL simulateNonIncrementalChanges; // ivar: _simulateNonIncrementalChanges
@property (nonatomic) BOOL skipAssetFetches; // ivar: _skipAssetFetches
@property (nonatomic) BOOL skipKeyAssetFetches; // ivar: _skipKeyAssetFetches
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums; // ivar: _skipKeyAssetFetchesForSmartAlbums
@property (nonatomic) BOOL skipSyndicatedAssetFetches; // ivar: _skipSyndicatedAssetFetches
@property (nonatomic) BOOL updateKeyAssetFetchesInBackground; // ivar: _updateKeyAssetFetchesInBackground


+(id)_generatePredicateForAssetTypesToInclude:(NSUInteger)arg0 ;
-(BOOL)_shouldSupportSyndicatedAssetFetches:(id)arg0 ;
-(BOOL)isRootFolder;
-(id)_newConfigurationWithCollectionList:(id)arg0 collectionsFetchResult:(id)arg1 ;
-(id)customFetchOptionsForCollection:(id)arg0 ;
-(id)init;
-(id)initWithCollectionList:(id)arg0 ;
-(id)initWithCollectionList:(id)arg0 collectionsFetchResult:(id)arg1 ;
-(id)initWithCollectionsFetchResult:(id)arg0 ;
-(id)newConfigurationWithCollectionList:(id)arg0 ;
-(id)newConfigurationWithCollectionsFetchResult:(id)arg0 ;
-(void)setIsRootFolder:(BOOL)arg0 ;


@end


#endif