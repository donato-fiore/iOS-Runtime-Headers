// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPHOTOPICKERCONTROLLER_H
#define MFPHOTOPICKERCONTROLLER_H

@class UICollectionViewController, NSMutableSet, NSString, PHCachingImageManager, PHFetchResult, NSSet, UIImagePickerController;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, MFPreferredHeightProviding, MFPhotoPickerControllerDelegate;


#import "MFPhotoPickerProgressManager.h"

@interface MFPhotoPickerController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, MFPreferredHeightProviding>

 {
    NSMutableSet *_selectedAssetIdentifiers;
    ? _flags;
}


@property (nonatomic) CGFloat availableWidth; // ivar: _availableWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHCachingImageManager *imageManager; // ivar: _imageManager
@property (retain, nonatomic) PHFetchResult *photosFetchResult; // ivar: _photosFetchResult
@property (weak, nonatomic) NSObject<MFPhotoPickerControllerDelegate> *pickerDelegate; // ivar: _pickerDelegate
@property (retain, nonatomic) MFPhotoPickerProgressManager *progressManager; // ivar: _progressManager
@property (readonly, nonatomic) NSSet *selectedAssetIdentifiers;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImagePickerController *systemImagePicker; // ivar: _systemImagePicker
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


+(id)log;
-(BOOL)_isPresentingInASheet;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_visibleCellForIndexPath:(id)arg0 collectionView:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithPhotoPickerProgressManager:(id)arg0 ;
-(void)addSelectedAssetIdentifier:(id)arg0 ;
-(void)addSelectedAssetIdentifiers:(id)arg0 ;
-(void)close:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)loadView;
-(void)removeAllSelectedAssetIdentifiers;
-(void)removeSelectedAssetIdentifier:(id)arg0 ;
-(void)showSystemImagePicker:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif