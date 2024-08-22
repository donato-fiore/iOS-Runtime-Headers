// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCURATIONTRIPKEYASSETBROWSERDEBUGVIEWCONTROLLER_H
#define PUCURATIONTRIPKEYASSETBROWSERDEBUGVIEWCONTROLLER_H

@class NSString, PHFetchResult, NSDictionary, PHPhotosHighlight;


#import "PUPhotosAlbumViewController.h"

@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    NSString *_tripKeyAssetUUID;
    PHFetchResult *_childHighlights;
    NSDictionary *_iconicSceneScores;
}


@property (retain, nonatomic) PHPhotosHighlight *tripHighlight; // ivar: _tripHighlight


-(BOOL)updateSpec;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)_update;
-(void)viewDidLoad;


@end


#endif