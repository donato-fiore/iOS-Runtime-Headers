// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXEXPLICITCURATEDLIBRARYASSETSDATASOURCEMANAGERCONFIGURATION_H
#define _PXEXPLICITCURATEDLIBRARYASSETSDATASOURCEMANAGERCONFIGURATION_H



#import "PXCuratedLibraryAssetsDataSourceManagerConfiguration.h"
#import "PXAssetsDataSourceManager.h"

@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PXAssetsDataSourceManager *_yearsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_monthsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_daysAssetsDataSourceManager;
    PXAssetsDataSourceManager *_allPhotosAssetsDataSourceManager;
}




-(id)configurationForZoomLevel:(NSInteger)arg0 ;
-(id)initWithYearsAssetsDataSourceManager:(id)arg0 monthsAssetsDataSourceManager:(id)arg1 daysAssetsDataSourceManager:(id)arg2 allPhotosAssetsDataSourceManager:(id)arg3 ;


@end


#endif