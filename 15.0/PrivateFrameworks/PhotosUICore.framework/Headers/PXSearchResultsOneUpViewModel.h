// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHRESULTSONEUPVIEWMODEL_H
#define PXSEARCHRESULTSONEUPVIEWMODEL_H


#import <Foundation/Foundation.h>

#import "PXPhotosDataSource.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXPhotoKitUIMediaProvider.h"

@interface PXSearchResultsOneUpViewModel : NSObject

@property (retain, nonatomic) PXPhotosDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) PXAssetReference *initialAssetReference; // ivar: _initialAssetReference
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // ivar: _mediaProvider


-(id)initWithOneUpWithAsset:(id)arg0 atIndex:(NSUInteger)arg1 inAssetCollection:(id)arg2 ;
-(void)updateDataSourceWithFetchResult:(id)arg0 ;


@end


#endif