// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPROGRAMMATICNAVIGATIONDESTINATION_H
#define PXPROGRAMMATICNAVIGATIONDESTINATION_H

@class NSString, NSArray;
@protocol PXDisplayAsset, PXDisplayAssetCollection, PXDisplayCollection, PXDisplayCollectionList;

#import <Foundation/Foundation.h>

#import "PXProgrammaticNavigationDestination.h"

@interface PXProgrammaticNavigationDestination : NSObject {
    NSString *_userAlbumName;
}


@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, copy, nonatomic) NSString *assetCollectionLocalIdentifier; // ivar: _assetCollectionLocalIdentifier
@property (readonly, nonatomic) NSInteger assetCollectionSubtype; // ivar: _assetCollectionSubtype
@property (readonly, nonatomic) NSInteger assetCollectionType; // ivar: _assetCollectionType
@property (readonly, copy, nonatomic) NSString *assetCollectionUUID; // ivar: _assetCollectionUUID
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier; // ivar: _assetLocalIdentifier
@property (readonly, copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (readonly, nonatomic) NSObject<PXDisplayCollection> *collection; // ivar: _collection
@property (readonly, copy, nonatomic) NSArray *collectionHierarchy; // ivar: _collectionHierarchy
@property (readonly, nonatomic) NSObject<PXDisplayCollectionList> *collectionList; // ivar: _collectionList
@property (readonly, nonatomic) NSInteger collectionListSubtype; // ivar: _collectionListSubtype
@property (readonly, nonatomic) NSInteger collectionListType; // ivar: _collectionListType
@property (readonly, copy, nonatomic) NSString *collectionListUUID; // ivar: _collectionListUUID
@property (readonly, copy, nonatomic) NSString *importSourceUUID; // ivar: _importSourceUUID
@property (readonly, copy, nonatomic) NSString *libraryViewMode; // ivar: _libraryViewMode
@property (readonly, nonatomic) NSString *publicDescription;
@property (readonly, nonatomic) BOOL renderAlbumAssetsWithDeferredProcessing; // ivar: _renderAlbumAssetsWithDeferredProcessing
@property (readonly, nonatomic) NSInteger revealMode; // ivar: _revealMode
@property (readonly, copy, nonatomic) PXProgrammaticNavigationDestination *sidebarBackNavigationRootDestination; // ivar: _sidebarBackNavigationRootDestination
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNavigationDestination:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithImportSourceUUID:(id)arg0 revealMode:(NSInteger)arg1 ;
-(id)initWithObject:(id)arg0 revealMode:(NSInteger)arg1 ;
-(id)initWithObject:(id)arg0 revealMode:(NSInteger)arg1 sidebarNavigationBackButtonRootDestination:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 revealMode:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif