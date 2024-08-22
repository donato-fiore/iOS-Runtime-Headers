// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSPANORAMAVIEWCONTROLLER_H
#define PUPHOTOSPANORAMAVIEWCONTROLLER_H

@class PHAssetCollection;


#import "PUPhotosGridViewController.h"
#import "PUSectionedGridLayout.h"
#import "PUPhotosPanoramaViewControllerSpec.h"

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController

@property (readonly, nonatomic) PUSectionedGridLayout *mainGridLayout;
@property (retain, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec; // ivar: _panoramaSpec
@property (retain, nonatomic) PHAssetCollection *userPanoAlbum; // ivar: _userPanoAlbum


-(BOOL)canBeginStackCollapseTransition;
-(BOOL)updateSpec;
-(BOOL)wantsGlobalFooter;
-(NSInteger)cellFillMode;
-(id)imageRequestOptionsForAsset:(id)arg0 pixelSize:(struct CGSize *)arg1 ;
-(id)initWithSpec:(id)arg0 ;
-(id)newGridLayout;
-(struct CGSize )maximumThumbnailRequestSize;
-(void)_configureCollectionViewGridLayout:(id)arg0 ;
-(void)_updatePhotoDecorationForCell:(id)arg0 animated:(BOOL)arg1 ;
-(void)configureGlobalFooterView:(id)arg0 ;
-(void)configureGridCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)rotatePhotoViewToHorizontalIfNeeded:(id)arg0 withAsset:(id)arg1 ;
-(void)updateLayoutMetrics;
-(void)updatePhotoViewContent:(id)arg0 withThumbnailImage:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif