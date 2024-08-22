// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSCRUBBERSETTINGS_H
#define PUSCRUBBERSETTINGS_H

@class PXSettings;



@interface PUScrubberSettings : PXSettings

@property (nonatomic) CGFloat baseVideoWidth; // ivar: _baseVideoWidth
@property (nonatomic) NSInteger chromeShownPlaybackIndicator; // ivar: _chromeShownPlaybackIndicator
@property (nonatomic) CGFloat decelerationTargetExpansionDistance; // ivar: _decelerationTargetExpansionDistance
@property (nonatomic) NSInteger defaultPlaybackIndicator; // ivar: _defaultPlaybackIndicator
@property (nonatomic) BOOL dynamicSeekTolerance; // ivar: _dynamicSeekTolerance
@property (nonatomic) CGFloat filmstripAspectRatio; // ivar: _filmstripAspectRatio
@property (nonatomic) NSInteger initialPlaybackIndicator; // ivar: _initialPlaybackIndicator
@property (nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGFloat interSectionSpacing; // ivar: _interSectionSpacing
@property (nonatomic) NSUInteger interactiveLoupeBehavior; // ivar: _interactiveLoupeBehavior
@property (nonatomic) CGFloat maxAspectRatio; // ivar: _maxAspectRatio
@property (nonatomic) CGFloat minVideoDuration; // ivar: _minVideoDuration
@property (nonatomic) NSInteger playingPlaybackIndicator; // ivar: _playingPlaybackIndicator
@property (nonatomic) NSUInteger previewInteractiveLoupeBehavior; // ivar: _previewInteractiveLoupeBehavior
@property (nonatomic) NSInteger scrubbingPlaybackIndicator; // ivar: _scrubbingPlaybackIndicator
@property (nonatomic) CGFloat settleAnimationDuration; // ivar: _settleAnimationDuration
@property (nonatomic) CGFloat settleRequiredDecelerationDistance; // ivar: _settleRequiredDecelerationDistance
@property (nonatomic) CGFloat slitAspectRatio; // ivar: _slitAspectRatio
@property (nonatomic) CGFloat smoothingAnimationDuration; // ivar: _smoothingAnimationDuration
@property (nonatomic) CGFloat tapAnimationDuration; // ivar: _tapAnimationDuration
@property (nonatomic) CGFloat topOutset; // ivar: _topOutset
@property (nonatomic) BOOL usePreviewScrubberMargins; // ivar: _usePreviewScrubberMargins
@property (nonatomic) BOOL useSmoothingAnimation; // ivar: _useSmoothingAnimation
@property (nonatomic) BOOL useTrianglePositionIndicator; // ivar: _useTrianglePositionIndicator
@property (nonatomic) CGFloat verticalMargin; // ivar: _verticalMargin


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif