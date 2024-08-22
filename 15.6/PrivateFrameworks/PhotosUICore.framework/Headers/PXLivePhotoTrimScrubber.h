// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLIVEPHOTOTRIMSCRUBBER_H
#define PXLIVEPHOTOTRIMSCRUBBER_H

@class UIView, UIView<PXLivePhotoTrimScrubberFilmStripView>, NSArray, AVAsset, UIImage, UIImageView, AVVideoComposition;
@protocol PXLivePhotoTrimScrubberDelegate;


#import "PXLivePhotoTrimScrubberHiddenAnimationHelper.h"
#import "PXTrimScrubberLayoutHelper.h"
#import "PXLivePhotoTrimScrubberSpec.h"

@interface PXLivePhotoTrimScrubber : UIView {
    UIView *_filmstripContainerView;
    UIView<PXLivePhotoTrimScrubberFilmStripView> *_filmstripView;
    UIView *_disabledOverlayView;
    ? _delegateFlags;
    NSArray *_keyTimeSnappingControllers;
    NSArray *_startTimeSnappingControllers;
    NSArray *_endTimeSnappingControllers;
    NSArray *_focusEventSnappingControllers;
    BOOL _hasPresentedControls;
    ? _photoTrimBuffer;
    NSInteger _changeDepth;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_loupeHiddenHelper;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_trimControlHiddenHelper;
    UIView *_debugStartTimeView;
    UIView *_debugLoupeTimeView;
    UIView *_debugEndTimeView;
}


@property (nonatomic, setter=_setContentAspectRatio:) CGFloat _contentAspectRatio; // ivar: __contentAspectRatio
@property (readonly, nonatomic) UIView *_postTrimOverlayView; // ivar: _postTrimOverlayView
@property (readonly, nonatomic) UIView *_preTrimOverlayView; // ivar: _preTrimOverlayView
@property (nonatomic, setter=_setTrackingElement:) NSInteger _trackingElement; // ivar: __trackingElement
@property (nonatomic) BOOL allowZoom; // ivar: _allowZoom
@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, nonatomic, getter=isAssetDurationLoaded) BOOL assetDurationLoaded;
@property (readonly, nonatomic) NSInteger currentlyInteractingElement;
@property (weak, nonatomic) NSObject<PXLivePhotoTrimScrubberDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly, nonatomic) Class filmStripViewClass; // ivar: _filmStripViewClass
@property (copy, nonatomic) NSArray *focusEventTimes; // ivar: _focusEventTimes
@property (nonatomic) CGFloat horizontalInset; // ivar: _horizontalInset
@property (nonatomic) ? keyTime; // ivar: _keyTime
@property (retain, nonatomic) PXTrimScrubberLayoutHelper *layoutHelper; // ivar: _layoutHelper
@property (retain, nonatomic) UIView *loupePlayerView;
@property (readonly, nonatomic) CGRect loupeRect;
@property (nonatomic) ? minimumTrimLength; // ivar: _minimumTrimLength
@property (nonatomic) ? originalEndTime; // ivar: _originalEndTime
@property (nonatomic) ? originalStartTime; // ivar: _originalStartTime
@property (readonly, nonatomic) UIView *photoLoupe; // ivar: _photoLoupe
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) NSUInteger playheadStyle; // ivar: _playheadStyle
@property (nonatomic) BOOL showVideoScrubberDebugOverlay; // ivar: _showVideoScrubberDebugOverlay
@property (copy, nonatomic) NSArray *snapKeyTimes; // ivar: _snapKeyTimes
@property (copy, nonatomic) NSArray *snapTrimEndTimes; // ivar: _snapTrimEndTimes
@property (copy, nonatomic) NSArray *snapTrimStartTimes; // ivar: _snapTrimStartTimes
@property (retain, nonatomic) PXLivePhotoTrimScrubberSpec *spec; // ivar: _spec
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) ? suggestedKeyTime; // ivar: _suggestedKeyTime
@property (readonly, nonatomic) UIImageView *trimEndHandle; // ivar: _trimEndHandle
@property (nonatomic) ? trimEndTime; // ivar: _trimEndTime
@property (readonly, nonatomic) UIImageView *trimStartHandle; // ivar: _trimStartHandle
@property (nonatomic) ? trimStartTime; // ivar: _trimStartTime
@property (readonly, nonatomic) NSInteger trimStatus;
@property (nonatomic, setter=_setUntrimmedDuration:) ? untrimmedDuration; // ivar: _untrimmedDuration
@property (nonatomic) BOOL useMiniScrubber; // ivar: _useMiniScrubber
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition
@property (readonly, nonatomic) ? viewportMaxTime;
@property (readonly, nonatomic) ? viewportMinTime;


+(id)_createSnappingControllersForKeytimes:(id)arg0 ;
+(id)createSnappingControllerWithSnappingTarget:(CGFloat)arg0 ;
+(id)trimEndHighlightedImage;
+(id)trimEndHighlightedImageMini;
+(id)trimEndImage;
+(id)trimEndImageMini;
+(id)trimStartHighlightedImage;
+(id)trimStartHighlightedImageMini;
+(id)trimStartImage;
+(id)trimStartImageMini;
-(BOOL)isValidKeyTime:(struct ? )arg0 ;
-(BOOL)tryZoomAtTime:(struct ? )arg0 ;
-(CGFloat)_offsetForTime:(struct ? )arg0 ;
-(CGFloat)horizontalOffsetForTime:(struct ? )arg0 ;
-(CGFloat)offsetForTime:(struct ? )arg0 ;
-(id)_snapTimesForElement:(NSInteger)arg0 ;
-(id)_snappingControllersForElement:(NSInteger)arg0 ;
-(id)initWithFilmStripViewClass:(Class)arg0 spec:(id)arg1 ;
-(struct ? )_clampTimeToViewportIfZoomed:(struct ? )arg0 ;
-(struct ? )_timeAtLocation:(struct CGPoint )arg0 forElement:(NSInteger)arg1 ;
-(struct ? )timeAtPoint:(struct CGPoint )arg0 ;
-(struct ? )timeForElement:(NSInteger)arg0 ;
-(struct CGRect )_disabledOverlayFrame;
-(struct CGRect )_keyHandleRect;
-(struct CGRect )backingAlignedRectForRect:(struct CGRect )arg0 ;
-(void)_PXLivePhotoTrimScrubber_commonInit;
-(void)_animateChanges:(id)arg0 ;
-(void)_newScrubberLayoutSubviews;
-(void)_presentControlsIfNeeded;
-(void)_releaseAVObjects;
-(void)_setTrimControlsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setupZoom;
-(void)_trimHandleDidReachBounds;
-(void)_updateEndTimeSnappingControllers;
-(void)_updateFocusEventSnappingControllers;
-(void)_updateKeyTimeSnappingControllers;
-(void)_updateSpecDependentUI;
-(void)_updateStartTimeSnappingControllers;
-(void)_updateTrimHandles;
-(void)_updateZoomState:(BOOL)arg0 ;
-(void)_zoomAtTime:(struct ? )arg0 ;
-(void)_zoomAtTrackedElement;
-(void)_zoomDelayed;
-(void)handleBeginTrackingAtLocation:(struct CGPoint )arg0 ;
-(void)handleChangeTrackingAtLocation:(struct CGPoint )arg0 withVelocity:(struct CGPoint )arg1 ;
-(void)handleEndTracking:(BOOL)arg0 ;
-(void)handleLongPressWithElement:(NSInteger)arg0 ;
-(void)handleSetKeyTime:(struct ? )arg0 ;
-(void)handleTapWithElement:(NSInteger)arg0 ;
-(void)impactOccured;
-(void)layoutSubviews;
-(void)performAnimatedChanges:(id)arg0 ;
-(void)prepareForImpact;
-(void)unzoom;


@end


#endif