// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOKITACTIONPERFORMER_H
#define PUPHOTOKITACTIONPERFORMER_H

@class NSArray, PXPhotosDataSource;


#import "PUAssetActionPerformer.h"

@interface PUPhotoKitActionPerformer : PUAssetActionPerformer

@property (readonly, copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(id)_indexPathsInPhotosDataSource:(id)arg0 ;
-(void)forceIncludeAssetsInDataSource;
-(void)instantlyExcludeAssetsFromDataSource;
-(void)stopExcludingAssetsFromDataSource;


@end


#endif