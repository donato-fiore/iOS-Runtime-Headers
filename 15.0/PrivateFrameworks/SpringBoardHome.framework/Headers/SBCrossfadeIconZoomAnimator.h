// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCROSSFADEICONZOOMANIMATOR_H
#define SBCROSSFADEICONZOOMANIMATOR_H

@class UIView;


#import "SBScaleIconZoomAnimator.h"
#import "SBHCrossfadeZoomSettings.h"

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {
    UIView *_crossfadeView;
}


@property (nonatomic) BOOL masksCorners; // ivar: _masksCorners
@property (nonatomic) BOOL performsTrueCrossfade; // ivar: _performsTrueCrossfade
@property (retain, nonatomic) SBHCrossfadeZoomSettings *settings;


-(BOOL)fadesHomeScreen;
-(CGFloat)_appSnapshotCornerRadiusForFraction:(CGFloat)arg0 ;
-(CGFloat)maxHomeScreenZoomScale;
-(NSUInteger)_numberOfSignificantAnimations;
-(id)initWithFolderController:(id)arg0 crossfadeView:(id)arg1 icon:(id)arg2 ;
-(struct CGPoint )_zoomedIconCenter;
-(struct CGRect )_zoomedFrame;
-(void)_assertCrossfadeViewSizeIfNecessary;
-(void)_cleanupAnimation;
-(void)_cleanupZoom;
-(void)_delayedForRotation;
-(void)_performAnimationToFraction:(CGFloat)arg0 withCentralAnimationSettings:(id)arg1 delay:(CGFloat)arg2 alreadyAnimating:(BOOL)arg3 sharedCompletion:(id)arg4 ;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;


@end


#endif