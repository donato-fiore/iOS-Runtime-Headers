// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYASSETSDATASOURCEMANAGERCONFIGURATION_H
#define PXCURATEDLIBRARYASSETSDATASOURCEMANAGERCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PXCuratedLibraryAssetsDataSourceManagerConfiguration : NSObject



+(id)configurationWithPhotoLibrary:(id)arg0 ;
+(id)configurationWithYearsAssetsDataSourceManager:(id)arg0 monthsAssetsDataSourceManager:(id)arg1 daysAssetsDataSourceManager:(id)arg2 allPhotosAssetsDataSourceManager:(id)arg3 ;
-(id)configurationForZoomLevel:(NSInteger)arg0 ;
-(id)keyAssetCollectionReferenceInDataSource:(id)arg0 zoomLevel:(NSInteger)arg1 matchingAssetCollectionReference:(id)arg2 fromDataSource:(id)arg3 zoomLevel:(NSInteger)arg4 ;


@end


#endif