// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUAUDIOCLASSIFICATIONASSETBROWSERDEBUGVIEWCONTROLLER_H
#define PUAUDIOCLASSIFICATIONASSETBROWSERDEBUGVIEWCONTROLLER_H

@class NSString;


#import "PUPhotosAlbumViewController.h"

@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController

@property (copy, nonatomic) NSString *audioClassificationName; // ivar: _audioClassificationName


-(BOOL)_writeDiagnosticsToURL:(id)arg0 incorrectAssets:(id)arg1 ;
-(id)_cloneAsset:(id)arg0 toDirectory:(id)arg1 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg0 ;
-(void)_presentTapToRadar;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)viewDidLoad;


@end


#endif