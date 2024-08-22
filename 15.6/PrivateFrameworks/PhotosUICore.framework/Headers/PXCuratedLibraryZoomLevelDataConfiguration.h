// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYZOOMLEVELDATACONFIGURATION_H
#define PXCURATEDLIBRARYZOOMLEVELDATACONFIGURATION_H

@class NSString, PHPhotoLibrary;
@protocol PXPhotosDataSourceProvider;

#import <Foundation/Foundation.h>

#import "PXAssetsDataSourceManager.h"

@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject <PXPhotosDataSourceProvider>

 {
    PXAssetsDataSourceManager *_assetsDataSourceManager;
}


@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel


-(id)createInitialPhotosDataSourceForDataSourceManager:(id)arg0 ;
-(id)init;
-(id)initWithZoomLevel:(NSInteger)arg0 ;
-(id)initWithZoomLevel:(NSInteger)arg0 assetsDataSourceManager:(id)arg1 ;


@end


#endif