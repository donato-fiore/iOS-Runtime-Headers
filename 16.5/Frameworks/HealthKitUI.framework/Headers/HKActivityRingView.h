// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKACTIVITYRINGVIEW_H
#define HKACTIVITYRINGVIEW_H

@class UIView, ARUIRingsView, ARUIRenderer, HKActivitySummary;


#import "_HKShapeView.h"

@interface HKActivityRingView : UIView {
    ARUIRingsView *_ringsView;
    ARUIRenderer *_renderer;
    _HKShapeView *_maskView;
}


@property (retain, nonatomic) HKActivitySummary *activitySummary; // ivar: _activitySummary
@property (nonatomic, getter=_emptyRingAlpha, setter=_setEmptyRingAlpha:) CGFloat emptyRingAlpha; // ivar: _emptyRingAlpha
@property (nonatomic, getter=_ringInsetPercentage, setter=_setRingInsetPercentage:) CGFloat ringInsetPercentage; // ivar: _ringInsetPercentage
@property (nonatomic, getter=_shouldBypassApplicationStateChecking, setter=_setShouldBypassApplicationStateChecking:) BOOL shouldBypassApplicationStateChecking; // ivar: _shouldBypassApplicationStateChecking


-(CGFloat)_ringDiameter;
-(id)_snapshotImage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 renderer:(id)arg1 ;
-(void)_displayIconsForWheelchairUser:(BOOL)arg0 ;
-(void)_setActivityRingViewBackgroundColor:(id)arg0 ;
-(void)_setActivityRingViewBackgroundTransparent:(BOOL)arg0 ;
-(void)_setRingDiameter:(CGFloat)arg0 ringInterspacing:(CGFloat)arg1 ringThickness:(CGFloat)arg2 ;
-(void)_setUpAfterInit;
-(void)_setUpRingsView;
-(void)_updateAndInterpolateRingsViewDiameterForWidth:(CGFloat)arg0 lowerDirective:(id)arg1 higherDirective:(id)arg2 ;
-(void)_updateMaskPath;
-(void)_updateRingsViewDiameter;
-(void)_updateRingsViewDiameterLegacy;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif