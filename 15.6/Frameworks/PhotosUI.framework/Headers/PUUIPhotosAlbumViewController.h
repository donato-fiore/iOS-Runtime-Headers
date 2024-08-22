// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUUIPHOTOSALBUMVIEWCONTROLLER_H
#define PUUIPHOTOSALBUMVIEWCONTROLLER_H

@class UIBarButtonItem, NSArray, NSString;
@protocol PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler, PUPhotoPicker;


#import "PUPhotosAlbumViewController.h"
#import "PUUIImagePickerControllerHelper.h"
#import "PUPhotoPickerFileSizeToolbarProvider.h"
#import "PUPhotoPickerResizeTaskDescriptor.h"
#import "PUSessionInfo.h"

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController <PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler>

 {
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    PUPhotoPickerFileSizeToolbarProvider *_fileSizePickerToolbarProvider;
}


@property (nonatomic, setter=_setAlbumFilter:) int _albumFilter; // ivar: __albumFilter
@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // ivar: __imagePickerMediaTypes
@property (readonly, nonatomic, getter=isAnyAssetDownloading) BOOL anyAssetDownloading;
@property (readonly, nonatomic, getter=isAnyAssetSelected) BOOL anyAssetSelected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // ivar: _didDisappear
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets lastKnownSafeAreaInsets; // ivar: _lastKnownSafeAreaInsets
@property (nonatomic) CGFloat lastKnownWidth; // ivar: _lastKnownWidth
@property (weak, nonatomic) NSObject<PUPhotoPicker> *photoPicker; // ivar: _photoPicker
@property (readonly, nonatomic) BOOL referenceValuesDidChange;
@property (retain, nonatomic) PUPhotoPickerResizeTaskDescriptor *resizeTaskDescriptor; // ivar: _resizeTaskDescriptor
@property (readonly, nonatomic) NSArray *selectedAssets;
@property (readonly, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;


-(BOOL)canBeginStackCollapseTransition;
-(BOOL)canDragIn;
-(BOOL)canDragOut;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg0 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)shouldShowMenu;
-(BOOL)shouldShowSectionHeaders;
-(BOOL)wantsGlobalFooter;
-(CGFloat)topMarginForPhotosGlobalFooterView:(id)arg0 ;
-(id)filterPredicateForAlbum:(id)arg0 ;
-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(void)_handleImagePickerCancel:(id)arg0 ;
-(void)_handleImagePickerMultipleSelectionDone;
-(void)_handleImagePickerSelectionDone:(id)arg0 ;
-(void)_handleImagePickerSingleSelectionDone;
-(void)_scrollToBottomIfNeeded;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)handleNavigateToAsset:(id)arg0 inContainer:(id)arg1 ;
-(void)handleToggleSelectionOfItemAtIndexPath:(id)arg0 ;
-(void)loadView;
-(void)performPhotoPickerSelection;
-(void)photoPickerFileSizeToolbarProvider:(id)arg0 didSelectResizeTaskDescriptor:(id)arg1 ;
-(void)photoPickerFileSizeToolbarProvider:(id)arg0 presentSizePickerViewController:(id)arg1 ;
-(void)setAlbum:(id)arg0 existingFetchResult:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif