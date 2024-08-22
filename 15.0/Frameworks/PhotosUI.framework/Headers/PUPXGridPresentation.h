// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXGRIDPRESENTATION_H
#define PUPXGRIDPRESENTATION_H

@class NSString;
@protocol PXGridPresentation;

#import <Foundation/Foundation.h>

#import "PUSessionInfo.h"

@interface PUPXGridPresentation : NSObject <PXGridPresentation>



@property (readonly, nonatomic, getter=_isRunningInPhotoPicker) BOOL _isRunningInPhotoPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly) Class superclass;
@property NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom


-(BOOL)_isEmpty:(id)arg0 ;
-(id)_assetCollectionToAssetsMapForAssets:(id)arg0 ;
-(id)createAlbumListViewControllerWithCollectionList:(id)arg0 ;
-(id)createAlbumListViewControllerWithConfiguration:(id)arg0 ;
-(id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)arg0 ;
-(id)createImportHistoryGridViewControllerWithCollection:(id)arg0 ;
-(id)createPanoramaViewController;
-(id)createPhotosAlbumViewControllerForAlbum:(id)arg0 withFetchResult:(id)arg1 ;
-(id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg0 anchorAtAsset:(id)arg1 inAssetCollection:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(id)createPlacesViewControllerForAssetCollection:(id)arg0 ;
-(id)createSharedAlbumListViewControllerWithConfiguration:(id)arg0 ;
-(id)createViewControllerForAssetCollection:(id)arg0 ;
-(id)createViewControllerForAssetCollection:(id)arg0 existingAssetsFetchResult:(id)arg1 ;
-(id)init;
-(id)initWithUserInterfaceIdiom:(NSInteger)arg0 ;
-(void)_customizePhotosViewConfiguationForAssetPicker:(id)arg0 assetCollection:(id)arg1 ;
-(void)createGridViewControllerWithAssets:(id)arg0 photoLibrary:(id)arg1 withTitle:(id)arg2 hideTabBar:(BOOL)arg3 gridPresentationContext:(NSInteger)arg4 containerViewController:(id)arg5 barsUpdateDelegate:(id)arg6 andCompletion:(id)arg7 ;


@end


#endif