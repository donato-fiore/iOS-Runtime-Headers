// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFETCHRESULTDATASOURCEMANAGER_H
#define PXFETCHRESULTDATASOURCEMANAGER_H

@class PHFetchResult, NSString, PHPhotoLibrary;
@protocol PXPhotoLibraryUIChangeObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXFetchResultDataSource.h"

@interface PXFetchResultDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    PHFetchResult *_currentFetchResult;
}


@property (readonly, nonatomic) PXFetchResultDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(id)createInitialDataSource;
-(id)initWithInitialFetchResult:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)setFetchResult:(id)arg0 changeDetails:(id)arg1 ;


@end


#endif