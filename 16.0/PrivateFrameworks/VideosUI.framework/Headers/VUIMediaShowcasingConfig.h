// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIASHOWCASINGCONFIG_H
#define VUIMEDIASHOWCASINGCONFIG_H


#import <Foundation/Foundation.h>


@interface VUIMediaShowcasingConfig : NSObject

@property (nonatomic) CGFloat advanceToNextPageDelayDuration; // ivar: _advanceToNextPageDelayDuration
@property (nonatomic) CGFloat advanceToNextPageDelayDurationImageOnly; // ivar: _advanceToNextPageDelayDurationImageOnly
@property (nonatomic) CGFloat animationTransitionDuration; // ivar: _animationTransitionDuration
@property (nonatomic, getter=isAutoAdvanceToNextPageEnabled) BOOL autoAdvanceToNextPageEnabled; // ivar: _autoAdvanceToNextPageEnabled
@property (nonatomic) CGFloat autoSwipeAnimationDuration; // ivar: _autoSwipeAnimationDuration
@property (nonatomic) CGFloat backgroundMediaFullscreenTransitionDuration; // ivar: _backgroundMediaFullscreenTransitionDuration
@property (nonatomic) CGFloat backgroundMediaTransferAnimationDuration; // ivar: _backgroundMediaTransferAnimationDuration
@property (nonatomic) BOOL backgroundMediaTransferEnabled; // ivar: _backgroundMediaTransferEnabled
@property (nonatomic) float backgroundVolume; // ivar: _backgroundVolume
@property (nonatomic) BOOL carouselBehaviorEnabled; // ivar: _carouselBehaviorEnabled
@property (nonatomic) float foregroundVolume; // ivar: _foregroundVolume
@property (nonatomic) BOOL gradientUsesImageColor; // ivar: _gradientUsesImageColor
@property (nonatomic) CGFloat hideMuteButtonDelayDuration; // ivar: _hideMuteButtonDelayDuration
@property (nonatomic) CGFloat itemHoverDelayDuration; // ivar: _itemHoverDelayDuration
@property (nonatomic) float metadataFadeInSpeed; // ivar: _metadataFadeInSpeed
@property (nonatomic) float metadataFadeOutSpeed; // ivar: _metadataFadeOutSpeed
@property (nonatomic) float navigationBarTransitionDistance; // ivar: _navigationBarTransitionDistance
@property (nonatomic) NSUInteger numberOfVolumeIncrements; // ivar: _numberOfVolumeIncrements
@property (nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (nonatomic) float parallaxRatio; // ivar: _parallaxRatio
@property (nonatomic) CGFloat playbackDelayInterval; // ivar: _playbackDelayInterval
@property (nonatomic, getter=isRubberBandingEnabled) BOOL rubberBandingEnabled; // ivar: _rubberBandingEnabled
@property (nonatomic) BOOL shouldShowFullScreenButton; // ivar: _shouldShowFullScreenButton
@property (nonatomic) CGFloat swipingEndAnimationDuration; // ivar: _swipingEndAnimationDuration
@property (nonatomic) float titleViewTransitionDistance; // ivar: _titleViewTransitionDistance
@property (nonatomic) CGFloat volumeTransitionAnimationDuration; // ivar: _volumeTransitionAnimationDuration


-(id)init;


@end


#endif