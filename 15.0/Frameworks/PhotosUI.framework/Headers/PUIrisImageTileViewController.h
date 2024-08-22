// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIRISIMAGETILEVIEWCONTROLLER_H
#define PUIRISIMAGETILEVIEWCONTROLLER_H

@class NSString, PXLivePhotoViewModulator;
@protocol PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver, PUIrisImageTileViewControllerDelegate;


#import "PUImageTileViewController.h"
#import "PHLivePhotoView.h"

@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver>

 {
    ? _delegateFlags;
    id *_ppt_didEndPlayingHandler;
}


@property (readonly, nonatomic) PHLivePhotoView *_livePhotoView; // ivar: __livePhotoView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUIrisImageTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isVitalityDisabledBytransformInset; // ivar: _isVitalityDisabledBytransformInset
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator; // ivar: _livePhotoViewModulator
@property (readonly) Class superclass;


-(id)generateAssetTransitionInfo;
-(id)loadView;
-(void)_assetFocusValueDidChange;
-(void)_handleBrowsingIrisPlayer:(id)arg0 didChange:(id)arg1 ;
-(void)_updateLivePhotoViewVitalityEnabled;
-(void)_updatePlaybackGestureRecognizer;
-(void)_updatePlayerViewInteractivePlaybackAllowed;
-(void)_updateSRLCompensation;
-(void)_updateVitalityTransform;
-(void)addToTilingView:(id)arg0 ;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)assetDidChange;
-(void)assetViewModelDidChange;
-(void)livePhotoView:(id)arg0 didEndPlaybackWithStyle:(NSInteger)arg1 ;
-(void)livePhotoView:(id)arg0 willBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(void)livePhotoViewDidBeginHinting:(id)arg0 ;
-(void)livePhotoViewDidEndPlayingVitality:(id)arg0 ;
-(void)ppt_playLivePhotoWithCompletionHandler:(id)arg0 ;
-(void)removeAllAnimations;
-(void)setAssetViewModel:(id)arg0 ;
-(void)updateModulator;
-(void)updateModulatorInputs;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif