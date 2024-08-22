// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCURATIONTRIPKEYASSETDEBUGVIEWCONTROLLER_H
#define PUCURATIONTRIPKEYASSETDEBUGVIEWCONTROLLER_H

@class PHFetchResult;


#import "PUPhotosAlbumViewController.h"
#import "PUCurationTripKeyAssetBrowserDebugViewController.h"

@interface PUCurationTripKeyAssetDebugViewController : PUPhotosAlbumViewController {
    PUCurationTripKeyAssetBrowserDebugViewController *_assetCollectionViewController;
    PHFetchResult *_tripHighlights;
}




-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)updateSpec;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(void)_fetchHighlights;
-(void)viewDidLoad;


@end


#endif