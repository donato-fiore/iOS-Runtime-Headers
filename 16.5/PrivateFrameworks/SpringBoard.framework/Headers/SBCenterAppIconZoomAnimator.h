// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCENTERAPPICONZOOMANIMATOR_H
#define SBCENTERAPPICONZOOMANIMATOR_H

@class SBCenterIconZoomAnimator, UIView, NSMutableArray, SBReversibleLayerPropertyAnimator, SBHCenterAppZoomSettings;



@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {
    UIView *_appView;
    UIView *_appZoomView;
    CGRect _destinationFrame;
    unsigned char _testCompletionCount;
}


@property (retain, nonatomic) NSMutableArray *animationCompletions; // ivar: _animationCompletions
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *appZoomAnimator; // ivar: _appZoomAnimator
@property CGFloat distantScale; // ivar: _distantScale
@property (retain, nonatomic) SBHCenterAppZoomSettings *settings;


-(CGFloat)_appZPositionForZoomFraction:(CGFloat)arg0 ;
-(CGFloat)_appZoomDelay;
-(CGFloat)_iconZoomDelay;
-(NSUInteger)_numberOfSignificantAnimations;
-(id)initWithFolderController:(id)arg0 appView:(id)arg1 ;
-(struct CGPoint )cameraPosition;
-(void)_cleanupAnimation;
-(void)_delayedForRotation;
-(void)_fadeAppForZoomFraction:(CGFloat)arg0 ;
-(void)_performAnimationToFraction:(CGFloat)arg0 withCentralAnimationSettings:(id)arg1 delay:(CGFloat)arg2 alreadyAnimating:(BOOL)arg3 sharedCompletion:(id)arg4 ;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)_translateAppForZoomFraction:(CGFloat)arg0 ;
-(void)_zoomAppForZoomFraction:(CGFloat)arg0 ;


@end


#endif