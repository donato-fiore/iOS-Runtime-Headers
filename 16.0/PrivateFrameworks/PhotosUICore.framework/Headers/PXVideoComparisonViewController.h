// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVIDEOCOMPARISONVIEWCONTROLLER_H
#define PXVIDEOCOMPARISONVIEWCONTROLLER_H

@class UIViewController, ISWrappedAVPlayer, UIProgressView, UILabel, UISegmentedControl, UIVisualEffectView, NSString, UIAlertAction, PHAsset, AVPlayerItem, NSError, NSURL;
@protocol UIAdaptivePresentationControllerDelegate;


#import "PXVideoPlayerView.h"
#import "PXSettings.h"

@interface PXVideoComparisonViewController : UIViewController <UIAdaptivePresentationControllerDelegate>

 {
    PXVideoPlayerView *_videoView;
    ISWrappedAVPlayer *_videoPlayer;
    UIProgressView *_progressView;
    UILabel *_statusLabel;
    UISegmentedControl *_variantSegmentedControl;
    UIVisualEffectView *_statusBackgroundView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIAlertAction *extraAlertAction; // ivar: _extraAlertAction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHAsset *inputAsset; // ivar: _inputAsset
@property (retain, nonatomic) AVPlayerItem *inputPlayerItem; // ivar: _inputPlayerItem
@property (readonly, nonatomic) NSString *inputVideoButtonsTitle;
@property (readonly, nonatomic) NSString *inputVideoDescription;
@property (retain, nonatomic) NSError *inputVideoError; // ivar: _inputVideoError
@property (retain, nonatomic) NSURL *inputVideoURL; // ivar: _inputVideoURL
@property (readonly, nonatomic) NSString *radarClassification; // ivar: _radarClassification
@property (readonly, nonatomic) NSString *radarComponentID; // ivar: _radarComponentID
@property (readonly, nonatomic) NSString *radarComponentName; // ivar: _radarComponentName
@property (readonly, nonatomic) NSString *radarComponentVersion; // ivar: _radarComponentVersion
@property (readonly, nonatomic) NSString *radarTitle; // ivar: _radarTitle
@property (readonly, nonatomic) PXSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useVariantVideoByDefaultInToggle; // ivar: _useVariantVideoByDefaultInToggle
@property (retain, nonatomic) AVPlayerItem *variantPlayerItem; // ivar: _variantPlayerItem
@property (readonly, nonatomic) NSString *variantVideoButtonsTitle;
@property (readonly, nonatomic) NSString *variantVideoDescription;
@property (retain, nonatomic) NSError *variantVideoError; // ivar: _variantVideoError
@property (nonatomic) int videoRequestID; // ivar: _videoRequestID


-(NSInteger)modalPresentationStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputAsset:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_exportInputVideo;
-(void)_exportVariantVideo;
-(void)_exportVariantVideoWithCompletionHandler:(id)arg0 ;
-(void)_fileRadar;
-(void)_handleActionButton:(id)arg0 ;
-(void)_handleRefreshButton:(id)arg0 ;
-(void)_handleResultButton:(id)arg0 ;
-(void)_handleSettingsButton:(id)arg0 ;
-(void)_handleSettingsDone:(id)arg0 ;
-(void)_handleVariantSegmentedControl:(id)arg0 ;
-(void)_hideProgressAndStatus;
-(void)_prepareInputAndVariantVideos;
-(void)_prepareVariantVideo;
-(void)_reloadInputAndVariantVideos;
-(void)_showAlertWithMessage:(id)arg0 ;
-(void)_showProgressAndStatus;
-(void)_updateDisplayedPlayerItem;
-(void)_updatePlayerItem:(id)arg0 error:(id)arg1 ;
-(void)_updateProgress:(float)arg0 status:(id)arg1 ;
-(void)invalidateInputAndVariantReferences;
// -(void)prepareVariantVideoForExportWithProgress:(id)arg0 completion:(unk)arg1  ;
// -(void)prepareVariantVideoWithProgress:(id)arg0 completion:(unk)arg1  ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif