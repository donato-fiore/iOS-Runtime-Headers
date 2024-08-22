// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUUIALBUMLISTVIEWCONTROLLER_H
#define PUUIALBUMLISTVIEWCONTROLLER_H

@class UIBarButtonItem, NSArray, NSString;
@protocol PUPhotoPickerServicesConsumer, PUPhotoPicker;


#import "PUAlbumListViewController.h"
#import "PUUIImagePickerControllerHelper.h"

@interface PUUIAlbumListViewController : PUAlbumListViewController <PUPhotoPickerServicesConsumer>

 {
    UIBarButtonItem *_imagePickerCancelButton;
    BOOL _collectionsFetchResultIsValid;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
}


@property (nonatomic, setter=_setImagePickerAssetTypes:) NSUInteger _imagePickerAssetTypes; // ivar: __imagePickerAssetTypes
@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // ivar: __imagePickerMediaTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUPhotoPicker> *photoPicker; // ivar: _photoPicker
@property (readonly) Class superclass;


-(BOOL)canShowAvatarViews;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)shouldAllowEmailInAlbumSubtitle;
-(BOOL)shouldHideEmptyCollections;
-(BOOL)shouldShowAllPhotosItem;
-(NSUInteger)filteringAssetTypes;
-(id)_imagePickerControllerHelper;
-(id)assetsFilterPredicate;
-(id)init;
-(id)newGridViewControllerForAllPhotos;
-(id)newGridViewControllerForAssetCollection:(id)arg0 ;
-(id)newGridViewControllerForFolder:(id)arg0 ;
-(void)_handleImagePickerCancel:(id)arg0 ;
-(void)_invalidateCollectionsFetchResult;
-(void)_updateCollectionsFetchResultIfNeeded;
-(void)loadView;
-(void)updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif