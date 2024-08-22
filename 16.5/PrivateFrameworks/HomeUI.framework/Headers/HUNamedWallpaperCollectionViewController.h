// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNAMEDWALLPAPERCOLLECTIONVIEWCONTROLLER_H
#define HUNAMEDWALLPAPERCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSMutableDictionary, NSArray;
@protocol HUNamedWallpaperCollectionViewControllerDelegate;



@interface HUNamedWallpaperCollectionViewController : UICollectionViewController

@property (readonly, nonatomic) NSInteger collectionType; // ivar: _collectionType
@property (readonly, weak, nonatomic) NSObject<HUNamedWallpaperCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) NSMutableDictionary *wallpaperImageCache; // ivar: _wallpaperImageCache
@property (retain, nonatomic) NSMutableDictionary *wallpaperThumbnailCache; // ivar: _wallpaperThumbnailCache
@property (retain, nonatomic) NSArray *wallpaperThumbnails; // ivar: _wallpaperThumbnails
@property (retain, nonatomic) NSArray *wallpapers; // ivar: _wallpapers


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCollectionType:(NSInteger)arg0 horizontalInset:(CGFloat)arg1 delegate:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif