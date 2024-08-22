// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNAVIGATIONLISTDATASECTIONCONFIGURATION_H
#define PXNAVIGATIONLISTDATASECTIONCONFIGURATION_H

@class NSPredicate, PHCollectionList, PHFetchResult;

#import <Foundation/Foundation.h>


@interface PXNavigationListDataSectionConfiguration : NSObject

@property (copy, nonatomic) NSPredicate *assetsFilterPredicate; // ivar: _assetsFilterPredicate
@property (readonly, nonatomic) PHCollectionList *collectionList; // ivar: _collectionList
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult; // ivar: _collectionsFetchResult
@property (nonatomic) BOOL emptyCollectionsHidden; // ivar: _emptyCollectionsHidden
@property (nonatomic) BOOL hideHiddenAlbum; // ivar: _hideHiddenAlbum
@property (nonatomic) BOOL hideSharedLibraryAlbum; // ivar: _hideSharedLibraryAlbum
@property (nonatomic) BOOL includeKeyAssetFetches; // ivar: _includeKeyAssetFetches
@property (nonatomic) BOOL includeUserSmartAlbums; // ivar: _includeUserSmartAlbums
@property (nonatomic) NSInteger pausedChangeDetailsBufferLength; // ivar: _pausedChangeDetailsBufferLength
@property (nonatomic) BOOL showSyncedFromMacAlbums; // ivar: _showSyncedFromMacAlbums
@property (nonatomic) BOOL simulateNonIncrementalChanges; // ivar: _simulateNonIncrementalChanges
@property (nonatomic) BOOL skipAssetCountFetches; // ivar: _skipAssetCountFetches
@property (nonatomic) BOOL skipAssetFetches; // ivar: _skipAssetFetches
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums; // ivar: _skipKeyAssetFetchesForSmartAlbums
@property (nonatomic) BOOL skipSyndicatedAssetFetches; // ivar: _skipSyndicatedAssetFetches


+(id)configurationWithCollectionList:(id)arg0 ;
+(id)configurationWithCollectionsFetchResult:(id)arg0 ;
-(id)description;
-(id)initWithCollectionList:(id)arg0 ;
-(id)initWithCollectionsFetchResult:(id)arg0 ;


@end


#endif