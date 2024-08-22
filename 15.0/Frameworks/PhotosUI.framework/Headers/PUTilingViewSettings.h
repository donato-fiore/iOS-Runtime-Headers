// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTILINGVIEWSETTINGS_H
#define PUTILINGVIEWSETTINGS_H

@class PXSettings;



@interface PUTilingViewSettings : PXSettings

@property (nonatomic) BOOL allowPaging; // ivar: _allowPaging
@property (nonatomic) BOOL allowPreheating; // ivar: _allowPreheating
@property (nonatomic) BOOL allowTileReuse; // ivar: _allowTileReuse
@property (nonatomic) BOOL allowsEdgeAntialiasing; // ivar: _allowsEdgeAntialiasing
@property (nonatomic) CGFloat animationDragCoefficient; // ivar: _animationDragCoefficient
@property (nonatomic) BOOL carryOverVelocities; // ivar: _carryOverVelocities
@property (nonatomic) CGFloat defaultAnimationDuration; // ivar: _defaultAnimationDuration
@property (nonatomic) CGFloat interactiveTransitionBackgroundDimming; // ivar: _interactiveTransitionBackgroundDimming
@property (nonatomic) BOOL rotateDisappearingTiles; // ivar: _rotateDisappearingTiles
@property (nonatomic) BOOL showSnapshottableTiles; // ivar: _showSnapshottableTiles
@property (nonatomic) BOOL showVisibleRects; // ivar: _showVisibleRects
@property (nonatomic) CGFloat springAnimationDuration; // ivar: _springAnimationDuration
@property (nonatomic) BOOL tintTiles; // ivar: _tintTiles
@property (nonatomic) CGFloat transitionChromeDelay; // ivar: _transitionChromeDelay
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration
@property (nonatomic) NSInteger transitionProgressBehavior; // ivar: _transitionProgressBehavior
@property (nonatomic) BOOL useOvershootingSpringAnimations; // ivar: _useOvershootingSpringAnimations
@property (nonatomic) BOOL useSpringAnimations; // ivar: _useSpringAnimations
@property (nonatomic) BOOL useSystemSpringAnimations; // ivar: _useSystemSpringAnimations


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif