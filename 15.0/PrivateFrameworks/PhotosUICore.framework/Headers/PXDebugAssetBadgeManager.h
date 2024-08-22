// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDEBUGASSETBADGEMANAGER_H
#define PXDEBUGASSETBADGEMANAGER_H

@class NSSet, PHFetchResult, NSString;
@protocol PXPhotosDataSourceChangeObserver;


#import "PXAssetBadgeManager.h"
#import "PXPhotosDataSource.h"
#import "PXMiroMovieProvider.h"

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager <PXPhotosDataSourceChangeObserver>

 {
    PXPhotosDataSource *_curatedPhotosDataSource;
    PXMiroMovieProvider *_miroMovieProvider;
}


@property (retain, nonatomic, setter=_setMiroCurationAssets:) NSSet *_miroCurationAssets; // ivar: __miroCurationAssets
@property (retain, nonatomic, setter=_setPhotosGraphCurationAssets:) PHFetchResult *_photosGraphCurationAssets; // ivar: __photosGraphCurationAssets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (readonly) Class superclass;


-(BOOL)_isAssetContainedInMiroCuration:(id)arg0 ;
-(BOOL)_isAssetContainedInPhotosGraphCuration:(id)arg0 ;
-(struct PXAssetBadgeInfo )badgeInfoForAsset:(id)arg0 inCollection:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_updateAssets;
-(void)dealloc;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;


@end


#endif