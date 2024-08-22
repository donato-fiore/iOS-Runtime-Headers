// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTRIMTOOLCONTROLLER_H
#define PUTRIMTOOLCONTROLLER_H

@class UIViewController, PXLivePhotoTrimScrubber, PXSlowMotionEditor, NSLayoutConstraint, PXLivePhotoTrimScrubberSpec, PLPhotoEditRenderer, UIVisualEffectView, PICompositionController, AVPlayerItem, NSString, UIView, UILabel, PLEditSource, PXFocusTimelineAction, PXFocusTimelineView, UIImage, UIButton, NSNumber, PXLivePhotoTrimScrubberSnapStripController;
@protocol PXTrimToolPlayerObserver, PXLivePhotoTrimScrubberDelegate, UIPopoverPresentationControllerDelegate, PULivePhotoKeyFrameSelectionViewControllerDelegate, PXSlowMotionEditorDelegate, PXFocusTimelineViewDelegate, PXFocusTimelineController, PUTrimToolControllerDelegate, PXTrimToolPlayerWrapper;


#import "PUTimeCodeOverlayView.h"
#import "PULivePhotoKeyFrameSelectionViewController.h"

@interface PUTrimToolController : UIViewController <PXTrimToolPlayerObserver, PXLivePhotoTrimScrubberDelegate, UIPopoverPresentationControllerDelegate, PULivePhotoKeyFrameSelectionViewControllerDelegate, PXSlowMotionEditorDelegate, PXFocusTimelineViewDelegate, PXFocusTimelineController>

 {
    PXLivePhotoTrimScrubber *_trimScrubber;
    PXSlowMotionEditor *_slomoView;
    BOOL _needsUpdateRenderForVisualChanges;
    PUTimeCodeOverlayView *_timeCodeOverlayView;
    NSLayoutConstraint *_timeCodeHorizontalConstraint;
    PXLivePhotoTrimScrubberSpec *_spec;
}


@property (retain, nonatomic, setter=_setRenderer:) PLPhotoEditRenderer *_renderer; // ivar: __renderer
@property (nonatomic) ? adjustedStillFrameTime;
@property (retain, nonatomic) UIVisualEffectView *auxilaryContainerView; // ivar: _auxilaryContainerView
@property (retain, nonatomic) NSLayoutConstraint *auxilaryContainerViewHeightConstraint; // ivar: _auxilaryContainerViewHeightConstraint
@property (nonatomic) ? cachedFrameDuration; // ivar: _cachedFrameDuration
@property (nonatomic) CGFloat cachedFrameRate; // ivar: _cachedFrameRate
@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, nonatomic) ? currentStillFrameTime;
@property (retain, nonatomic) AVPlayerItem *currentVideoPlayerItem; // ivar: _currentVideoPlayerItem
@property (readonly, nonatomic) NSInteger currentlyInteractingElement;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *debugEndOffsetView; // ivar: _debugEndOffsetView
@property (retain, nonatomic) UIView *debugEndRectView; // ivar: _debugEndRectView
@property (retain, nonatomic) UILabel *debugOriginalTimeLabel; // ivar: _debugOriginalTimeLabel
@property (nonatomic) ? debugPlayerTime; // ivar: _debugPlayerTime
@property (retain, nonatomic) UILabel *debugPlayerTimeLabel; // ivar: _debugPlayerTimeLabel
@property (retain, nonatomic) UIView *debugStartOffsetView; // ivar: _debugStartOffsetView
@property (retain, nonatomic) UIView *debugStartRectView; // ivar: _debugStartRectView
@property (retain, nonatomic) UILabel *debugTimeCodeLabel; // ivar: _debugTimeCodeLabel
@property (retain, nonatomic) UILabel *debugTrimToolPlayheadStyleLabel; // ivar: _debugTrimToolPlayheadStyleLabel
@property (retain, nonatomic) UILabel *debugTrimToolStateLabel; // ivar: _debugTrimToolStateLabel
@property (weak, nonatomic) NSObject<PUTrimToolControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (retain, nonatomic) PXFocusTimelineAction *focusTimelineAction; // ivar: _focusTimelineAction
@property (retain, nonatomic) PXFocusTimelineView *focusTimelineView; // ivar: _focusTimelineView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger internalState; // ivar: _internalState
@property (readonly, nonatomic, getter=isPortraitVideo) BOOL isPortraitVideo; // ivar: _isPortraitVideo
@property (weak, nonatomic) PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker; // ivar: _livePhotoKeyFramePicker
@property (nonatomic) BOOL objectTrackingShouldStop; // ivar: _objectTrackingShouldStop
@property (nonatomic) ? originalEndTime; // ivar: _originalEndTime
@property (nonatomic) ? originalStartTime; // ivar: _originalStartTime
@property (retain, nonatomic) PLEditSource *overcaptureEditSource; // ivar: _overcaptureEditSource
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) BOOL playButtonEnabled; // ivar: _playButtonEnabled
@property (readonly, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (readonly, nonatomic) NSObject<PXTrimToolPlayerWrapper> *playerWrapper; // ivar: _playerWrapper
@property (nonatomic) NSUInteger playheadStyle; // ivar: _playheadStyle
@property (nonatomic) ? playheadTime;
@property (nonatomic) BOOL portraitVideoEnabled; // ivar: _portraitVideoEnabled
@property (retain, nonatomic) NSLayoutConstraint *scrubberContainerToAuxiliaryContainerConstraint; // ivar: _scrubberContainerToAuxiliaryContainerConstraint
@property (readonly, nonatomic) CGFloat scrubberHeight;
@property (retain, nonatomic) UIVisualEffectView *scrubberPlayButtonContainerView; // ivar: _scrubberPlayButtonContainerView
@property (nonatomic) BOOL slomoDraggingStartHandle; // ivar: _slomoDraggingStartHandle
@property (readonly, nonatomic, getter=isSlomoEnabled) BOOL slomoEnabled; // ivar: _slomoEnabled
@property (retain, nonatomic) NSNumber *slomoTimeForPlayheadUpdate; // ivar: _slomoTimeForPlayheadUpdate
@property (retain, nonatomic) PXLivePhotoTrimScrubberSnapStripController *snapStripController; // ivar: _snapStripController
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) ? suggestedKeyFrameTime; // ivar: _suggestedKeyFrameTime
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *trimScrubberTimelineOverlayButton; // ivar: _trimScrubberTimelineOverlayButton
@property (retain, nonatomic) UIView *trimScrubberTimelineOverlayView; // ivar: _trimScrubberTimelineOverlayView
@property (nonatomic) ? unadjustedAssetDuration; // ivar: _unadjustedAssetDuration
@property (nonatomic) ? unadjustedStillImageTime; // ivar: _unadjustedStillImageTime


-(BOOL)_allowsKeyFrameCreation;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(BOOL)slowMotionEditorRequestForceZoom:(id)arg0 ;
-(BOOL)trimScrubber:(id)arg0 canBeginInteractivelyEditingElement:(NSInteger)arg1 ;
-(CGFloat)_frameRate;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)_currentVideoAsset;
-(id)_slomoMapperForCurrentConfiguration;
-(id)currentEditSource;
-(id)initWithPlayerWrapper:(id)arg0 ;
-(id)initWithPlayerWrapper:(id)arg0 playButtonEnabled:(BOOL)arg1 slomoEnabled:(BOOL)arg2 ;
-(id)initWithPlayerWrapper:(id)arg0 playButtonEnabled:(BOOL)arg1 slomoEnabled:(BOOL)arg2 portraitVideoEnabled:(BOOL)arg3 ;
-(struct ? )_currentPlayerScaledTimeFromOriginalTime:(struct ? )arg0 ;
-(struct ? )_frameDuration;
-(struct ? )_originalTimeFromCurrentPlayerScaledTime:(struct ? )arg0 ;
-(struct CGRect )_presentationRectFromLoupeRect;
-(void)_createRendererIfNeeded;
-(void)_handlePlayPauseButton:(id)arg0 ;
-(void)_handleScrubberTimelineOverlayButton:(id)arg0 ;
-(void)_hideScrubberTimelineOverlay;
-(void)_livePhotoKeyFramePickerDidDismiss:(id)arg0 ;
-(void)_resetScrubberToStillPhotoFrame;
-(void)_seekToTimeForElement:(NSInteger)arg0 exact:(BOOL)arg1 ;
-(void)_seekToTimeForElement:(NSInteger)arg0 exact:(BOOL)arg1 forceSeek:(BOOL)arg2 ;
-(void)_showKeyFrameSelection;
-(void)_updateCompositionController;
-(void)_updateDebugPlayerTimeLabel;
-(void)_updateDebugPlayheadStyleLabel;
-(void)_updateDebugTimeCodeLabel;
-(void)_updateDebugTrimToolStateLabel;
-(void)_updatePlayPauseButton;
-(void)_updatePlayerItem;
-(void)_updatePlayerWrapperTimeObserver;
-(void)_updatePlayerWrapperTrim;
-(void)_updatePlayheadStyle;
-(void)_updatePublicState;
-(void)_updateScrubberContents;
-(void)_updateScrubberPresentedPlayhead;
-(void)_updateScrubberTimelineOverlayButtonOffset;
-(void)_updateScrubberTimes;
-(void)_updateSnappingDots;
-(void)_updateTimeCodeOverlay;
-(void)compositonDidUpdateForPlayerWrapper:(id)arg0 ;
-(void)didUpdateFocusEventsWithTimes:(id)arg0 ;
-(void)enableFocusTimeline:(BOOL)arg0 ;
-(void)focusTimeline:(id)arg0 presentAction:(id)arg1 locationInTimeline:(struct CGPoint )arg2 ;
-(void)focusTimeline:(id)arg0 updateTrackingProgressShouldStop:(*BOOL)arg1 ;
-(void)hideFocusTimelineActions:(id)arg0 ;
-(void)livePhotoRenderDidChange:(BOOL)arg0 ;
-(void)objectTrackingFinishedWithSuccess:(BOOL)arg0 ;
-(void)objectTrackingStartedAtTime:(struct ? )arg0 ;
-(void)pause;
-(void)play;
-(void)playerStatusChangedForPlayerWrapper:(id)arg0 ;
-(void)playerWrapper:(id)arg0 timeChanged:(struct ? )arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)releaseAVObjects;
-(void)resetTimeline;
-(void)showFocusTimeline:(BOOL)arg0 ;
-(void)slowMotionEditorDidBeginEditing:(id)arg0 withStartHandle:(BOOL)arg1 ;
-(void)slowMotionEditorDidEndEditing:(id)arg0 ;
-(void)slowMotionEditorEndValueChanged:(id)arg0 ;
-(void)slowMotionEditorRequestForceUnzoom:(id)arg0 ;
-(void)slowMotionEditorStartValueChanged:(id)arg0 ;
-(void)stepByCount:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)trimScrubber:(id)arg0 debugEndOffset:(struct CGRect )arg1 ;
-(void)trimScrubber:(id)arg0 debugEndRect:(struct CGRect )arg1 ;
-(void)trimScrubber:(id)arg0 debugStartOffset:(struct CGRect )arg1 ;
-(void)trimScrubber:(id)arg0 debugStartRect:(struct CGRect )arg1 ;
-(void)trimScrubber:(id)arg0 didBeginInteractivelyEditingElement:(NSInteger)arg1 ;
-(void)trimScrubber:(id)arg0 didChangeLoupeRect:(struct CGRect )arg1 ;
-(void)trimScrubber:(id)arg0 didChangeTimeForElement:(NSInteger)arg1 ;
-(void)trimScrubber:(id)arg0 didEndInteractivelyEditingElement:(NSInteger)arg1 successful:(BOOL)arg2 ;
-(void)trimScrubber:(id)arg0 didTapElement:(NSInteger)arg1 ;
-(void)trimScrubber:(id)arg0 didTapTimelineAtTime:(struct ? )arg1 ;
-(void)trimScrubber:(id)arg0 didZoomToMinimumValue:(CGFloat)arg1 maximumValue:(CGFloat)arg2 ;
-(void)trimScrubberAssetDurationDidChange:(id)arg0 ;
-(void)trimScrubberDidLayoutSubviews:(id)arg0 ;
-(void)trimScrubberDidUnzoom:(id)arg0 ;
-(void)updateFocusTimeline;
-(void)updateFocusTimelineWithEvent:(struct ? )arg0 userInitiated:(BOOL)arg1 shouldAnimate:(BOOL)arg2 ;
-(void)updateFocusTimelineWithTimeRange:(struct ? )arg0 ;
-(void)updateObjectTrackingProgressAtTime:(struct ? )arg0 shouldStop:(*BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)userDidRequestToMakeKeyPhoto:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif