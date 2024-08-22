// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUWALLPAPERPICKERINLINEVIEWCONTROLLER_H
#define HUWALLPAPERPICKERINLINEVIEWCONTROLLER_H

@class UICollectionViewController, HFWallpaper, NSString, UIDropInteraction, UICollectionViewFlowLayout, NSMutableDictionary, UIImagePickerController, NSArray, UIImage, NSIndexPath;
@protocol UICollectionViewDelegateFlowLayout, HUWallpaperPhotoCellDelegate, UIDropInteractionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HUWallpaperPickerInlineViewControllerDelegate;


#import "HUWallpaperPhotoCell.h"

@interface HUWallpaperPickerInlineViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, HUWallpaperPhotoCellDelegate, UIDropInteractionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>



@property (retain, nonatomic) HFWallpaper *customWallpaper; // ivar: _customWallpaper
@property (retain, nonatomic) HUWallpaperPhotoCell *customWallpaperCell; // ivar: _customWallpaperCell
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUWallpaperPickerInlineViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *imageCache; // ivar: _imageCache
@property (retain, nonatomic) UIImagePickerController *imagePicker; // ivar: _imagePicker
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSArray *namedWallpaperThumbnails; // ivar: _namedWallpaperThumbnails
@property (retain, nonatomic) NSArray *namedWallpapers; // ivar: _namedWallpapers
@property (readonly) NSUInteger numberOfWallpapers;
@property (nonatomic) NSUInteger numberOfWallpapersFittingInWidth; // ivar: _numberOfWallpapersFittingInWidth
@property (retain, nonatomic) UIImage *originalCustomImage; // ivar: _originalCustomImage
@property (readonly, nonatomic) CGFloat preferedHeight; // ivar: _preferedHeight
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) HFWallpaper *selectedWallpaper;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *thumbnailCache; // ivar: _thumbnailCache


+(BOOL)useWallpaperPickerCell;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)init;
-(id)thumbnailWallpaperForIndexPath:(id)arg0 ;
-(id)wallpaperForIndexPath:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )preferredContentSize;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 image:(id)arg1 wallpaper:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)updateScrolling;
-(void)viewDidLoad;
-(void)wallpaperPhotoCellDidPressDeleteButton:(id)arg0 ;


@end


#endif