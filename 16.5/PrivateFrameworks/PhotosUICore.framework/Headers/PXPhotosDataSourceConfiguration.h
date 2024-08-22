// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDATASOURCECONFIGURATION_H
#define PXPHOTOSDATASOURCECONFIGURATION_H

@class NSSet, NSPredicate, PHFetchResult, PHCollection, NSDictionary, NSArray, PHPhotoLibrary, PHAsset;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXLibraryFilterState.h"

@interface PXPhotosDataSourceConfiguration : NSObject

@property (retain, nonatomic) NSSet *allowedOIDs; // ivar: _allowedOIDs
@property (retain, nonatomic) NSSet *allowedUUIDs; // ivar: _allowedUUIDs
@property (retain, nonatomic) NSPredicate *basePredicate; // ivar: _basePredicate
@property (nonatomic) BOOL canIncludeUnsavedSyndicatedAssets; // ivar: _canIncludeUnsavedSyndicatedAssets
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult; // ivar: _collectionListFetchResult
@property (readonly, nonatomic) PHCollection *containerCollection; // ivar: _containerCollection
@property (nonatomic) NSInteger curationType; // ivar: _curationType
@property (retain, nonatomic) NSDictionary *existingAssetCollectionFetchResults; // ivar: _existingAssetCollectionFetchResults
@property (retain, nonatomic) NSDictionary *existingKeyAssetsFetchResults; // ivar: _existingKeyAssetsFetchResults
@property (retain, nonatomic) NSArray *fetchPropertySets; // ivar: _fetchPropertySets
@property (retain, nonatomic) NSArray *filterPersons; // ivar: _filterPersons
@property (retain, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (nonatomic) BOOL hideHiddenAssets; // ivar: _hideHiddenAssets
@property (nonatomic) BOOL ignoreSharedLibraryFilters; // ivar: _ignoreSharedLibraryFilters
@property (nonatomic) NSInteger libraryFilter; // ivar: _libraryFilter
@property (retain, nonatomic) PXLibraryFilterState *libraryFilterState; // ivar: _libraryFilterState
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PHAsset *referenceAsset; // ivar: _referenceAsset
@property (nonatomic) BOOL reverseSortOrder; // ivar: _reverseSortOrder
@property (nonatomic) BOOL wantsCurationByDefault; // ivar: _wantsCurationByDefault


-(id)init;
-(id)initWithAssetCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithAssetFetchResult:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCollectionListFetchResult:(id)arg0 containerCollection:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithCollectionListFetchResult:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif