// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOLIBRARYCURATEDLIBRARYASSETSDATASOURCEMANAGERCONFIGURATION_H
#define _PXPHOTOLIBRARYCURATEDLIBRARYASSETSDATASOURCEMANAGERCONFIGURATION_H

@class PHPhotoLibrary;


#import "PXCuratedLibraryAssetsDataSourceManagerConfiguration.h"

@interface _PXPhotoLibraryCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PHPhotoLibrary *_photoLibrary;
}




-(id)configurationForZoomLevel:(NSInteger)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif