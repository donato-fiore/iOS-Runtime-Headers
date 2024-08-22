// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITDATASOURCEMANAGER_H
#define PUPHOTOKITDATASOURCEMANAGER_H

@class NSString, PXPhotosDataSource;
@protocol PXPhotosDataSourceChangeObserver;


#import "PUAssetsDataSourceManager.h"

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager <PXPhotosDataSourceChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAssetsDataSourceManager:(id)arg0 ;
-(id)initWithPhotosDataSource:(id)arg0 ;
-(id)photosDataSourceInterestingAssetReferences:(id)arg0 ;
-(void)dealloc;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)updateWithPhotosDataSource:(id)arg0 andDataSourceChange:(id)arg1 ;


@end


#endif