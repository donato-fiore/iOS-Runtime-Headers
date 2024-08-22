// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILEVOLUMECHROMELESSBUTTONCONTROL_H
#define AVMOBILEVOLUMECHROMELESSBUTTONCONTROL_H

@class UIControl, UIImageView, UIView, NSString;
@protocol AVMobileVolumeChromlesButtonControlDelegate;


#import "AVMicaPackage.h"

@interface AVMobileVolumeChromelessButtonControl : UIControl {
    CGPoint _startPoint;
    BOOL _hasStartedPanning;
}


@property (weak) NSObject<AVMobileVolumeChromlesButtonControlDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) AVMicaPackage *micaPackage; // ivar: _micaPackage
@property (retain, nonatomic) UIView *micaPackageContainerView; // ivar: _micaPackageContainerView
@property (retain, nonatomic) NSString *volumeIconState; // ivar: _volumeIconState


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_imageNameForMicaPackageState;
-(id)init;
-(struct CGRect )hitRect;
-(struct CGSize )intrinsicContentSize;
-(void)_updateMicaPackage:(id)arg0 ;
-(void)_volumeControlButtonDidBeginPanning;
-(void)_volumeControlButtonDidEndPanning;
-(void)_volumeControlButtonPanningDidContinueWithXDelta:(CGFloat)arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif