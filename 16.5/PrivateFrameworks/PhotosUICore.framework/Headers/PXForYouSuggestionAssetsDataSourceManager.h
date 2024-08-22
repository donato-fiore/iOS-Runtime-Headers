// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFORYOUSUGGESTIONASSETSDATASOURCEMANAGER_H
#define PXFORYOUSUGGESTIONASSETSDATASOURCEMANAGER_H

@class NSString, NSDictionary;
@protocol PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver;


#import "PXAssetsDataSourceManager.h"
#import "PXForYouSuggestionsAssetsDataSource.h"
#import "PXPhotosDataSource.h"
#import "PXSuggestionsDataSource.h"
#import "PXSuggestionsDataSourceManager.h"

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>



@property (readonly, nonatomic) PXForYouSuggestionsAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) NSDictionary *snapshotAssetToSuggestionMap;
@property (retain, nonatomic) PXSuggestionsDataSource *suggestionsDataSource; // ivar: _suggestionsDataSource
@property (readonly, nonatomic) PXSuggestionsDataSourceManager *suggestionsDataSourceManager; // ivar: _suggestionsDataSourceManager
@property (readonly) Class superclass;


-(id)createInitialDataSource;
-(id)initWithSuggestionsDataSourceManager:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;


@end


#endif