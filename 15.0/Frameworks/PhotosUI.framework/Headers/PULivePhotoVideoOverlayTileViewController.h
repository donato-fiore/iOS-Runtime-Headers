// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PULIVEPHOTOVIDEOOVERLAYTILEVIEWCONTROLLER_H
#define PULIVEPHOTOVIDEOOVERLAYTILEVIEWCONTROLLER_H

@class UIView, NSString, UIImpactFeedbackGenerator, PXImageModulationManager, PXLivePhotoViewModulator, NSArray, ISWrappedAVPlayer;
@protocol PUBrowsingViewModelChangeObserver, PXChangeObserver, PHLivePhotoViewDelegate, ISChangeObserver, PULivePhotoVideoOverlayTileViewControllerDelegate;


#import "PUTileViewController.h"
#import "PUBrowsingViewModel.h"
#import "PHLivePhotoView.h"
#import "PUMergedLivePhotosVideo.h"
#import "PUOneUpMergedVideoProvider.h"
#import "PUModelTileTransform.h"
#import "PUAssetReference.h"

@interface PULivePhotoVideoOverlayTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PXChangeObserver, PHLivePhotoViewDelegate, ISChangeObserver>



@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PULivePhotoVideoOverlayTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageModulationManager *imageModulationManager; // ivar: _imageModulationManager
@property (nonatomic) BOOL isPresentedForSecondScreen; // ivar: _isPresentedForSecondScreen
@property (readonly, nonatomic) PHLivePhotoView *livePhotoView; // ivar: _livePhotoView
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator; // ivar: _livePhotoViewModulator
@property (readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo; // ivar: _mergedVideo
@property (retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider; // ivar: _mergedVideoProvider
@property (retain, nonatomic) PUModelTileTransform *modelTileTransform; // ivar: _modelTileTransform
@property (retain, nonatomic) PUAssetReference *playbackAssetReference; // ivar: _playbackAssetReference
@property (readonly, nonatomic) NSArray *playbackGestureRecognizers; // ivar: _playbackGestureRecognizers
@property (readonly) Class superclass;
@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer
@property (retain, nonatomic) id *videoPlayerTimeObserver; // ivar: _videoPlayerTimeObserver
@property (nonatomic) BOOL willEndCurrentPlayback; // ivar: _willEndCurrentPlayback


-(BOOL)livePhotoView:(id)arg0 canBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(id)gestureRecognizers;
-(id)loadView;
-(void)_updateLivePhotoViewFrame;
-(void)_updateLivePhotoViewModulator;
-(void)_updateLivePhotoViewModulatorInput;
-(void)_updateLivePhotoViewPhoto;
-(void)_updateMergedVideo;
-(void)_updatePlaybackEnabled;
-(void)_updateSRLCompensation;
-(void)_videoCurrentTimeDidChange:(struct ? )arg0 ;
-(void)dealloc;
-(void)livePhotoView:(id)arg0 didEndPlaybackWithStyle:(NSInteger)arg1 ;
-(void)livePhotoView:(id)arg0 willBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif