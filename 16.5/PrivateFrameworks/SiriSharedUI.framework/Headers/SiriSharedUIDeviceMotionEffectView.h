// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUIDEVICEMOTIONEFFECTVIEW_H
#define SIRISHAREDUIDEVICEMOTIONEFFECTVIEW_H

@class UIView, UIImageView, CMMotionManager, CADisplayLink;



@interface SiriSharedUIDeviceMotionEffectView : UIView {
    UIImageView *_effectImageView;
    BOOL _shouldUpdateOffsetRadians;
    BOOL _forcefullyUpdateImageViewFrame;
    CGFloat _initialOffsetRadians;
    NSInteger _cachedInterfaceOrientation;
    CMMotionManager *_motionManager;
    CADisplayLink *_displayLink;
    CGFloat _rotationIncrementalRateRadians;
}




-(BOOL)_supportsContentViewTransforms;
-(BOOL)_supportsDeviceMotion;
-(BOOL)isViewHighContrast;
-(NSInteger)_currentInterfaceOrientation;
-(NSInteger)viewAppearanceStyle;
-(id)_currentWindowScene;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cleanUpIfNeeded;
-(void)_configureDeviceMotionIfNeeded;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_motionManagerDidReceiveMotion:(id)arg0 ;
-(void)_updateEffectView;
-(void)invalidate;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateMaskingForView:(id)arg0 ;
-(void)viewWillBeUpdated;


@end


#endif