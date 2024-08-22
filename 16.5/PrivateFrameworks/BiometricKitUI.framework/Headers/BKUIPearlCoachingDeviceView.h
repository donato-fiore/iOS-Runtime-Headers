// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIPEARLCOACHINGDEVICEVIEW_H
#define BKUIPEARLCOACHINGDEVICEVIEW_H

@class UIView, UIImage, UIImageView, NSLayoutConstraint;


#import "BKUIRotationArrowAnimationLayer.h"

@interface BKUIPearlCoachingDeviceView : UIView

@property (retain, nonatomic) BKUIRotationArrowAnimationLayer *animationLayer; // ivar: _animationLayer
@property (nonatomic) BOOL animationRunning; // ivar: _animationRunning
@property (retain, nonatomic) UIImage *deviceImage; // ivar: _deviceImage
@property (retain, nonatomic) UIImageView *deviceView; // ivar: _deviceView
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (nonatomic) BOOL inSheet; // ivar: _inSheet
@property (nonatomic) BOOL isDisplayZoomEnabled; // ivar: _isDisplayZoomEnabled
@property (readonly, nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


-(id)_colorForStroke;
-(id)initWithSheetLayout:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)resetDevice;
-(void)rotateDeviceToAngle:(CGFloat)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setDeviceHidden:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)startAnimation;
-(void)stopAnimation;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif