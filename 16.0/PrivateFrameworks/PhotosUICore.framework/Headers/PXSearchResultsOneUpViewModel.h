// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHRESULTSONEUPVIEWMODEL_H
#define PXSEARCHRESULTSONEUPVIEWMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PXPhotosDataSource.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXPhotoKitUIMediaProvider.h"

@interface PXSearchResultsOneUpViewModel : NSObject

@property (readonly, copy, nonatomic) NSArray *assetUUIDsAllowedToHighlightText; // ivar: _assetUUIDsAllowedToHighlightText
@property (retain, nonatomic) PXPhotosDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) PXAssetReference *initialAssetReference; // ivar: _initialAssetReference
@property (copy, nonatomic) NSArray *matchedQueryStrings; // ivar: _matchedQueryStrings
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // ivar: _mediaProvider


-(id)initWithOneUpWithAsset:(id)arg0 atIndex:(NSUInteger)arg1 inAssetCollection:(id)arg2 matchedQueryStrings:(id)arg3 assetUUIDsAllowedToHighlightText:(id)arg4 ;
-(void)updateDataSourceWithFetchResult:(id)arg0 ;


@end


#endif