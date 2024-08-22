// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCURATIONACTIONASSETBROWSERVIEWCONTROLLER_H
#define PUCURATIONACTIONASSETBROWSERVIEWCONTROLLER_H

@class NSMutableArray, PHPhotoLibrary;


#import "PUPhotosAlbumViewController.h"
#import "PUCurationTraitContainer.h"

@interface PUCurationActionAssetBrowserViewController : PUPhotosAlbumViewController

@property (retain, nonatomic) NSMutableArray *assetContainers; // ivar: _assetContainers
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PUCurationTraitContainer *traitContainer; // ivar: _traitContainer


-(CGFloat)globalHeaderHeight;
-(id)_globalHeaderTitle;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)_update;
-(void)configureGlobalHeaderView:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif