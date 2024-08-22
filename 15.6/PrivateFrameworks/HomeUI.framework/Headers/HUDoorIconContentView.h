// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDOORICONCONTENTVIEW_H
#define HUDOORICONCONTENTVIEW_H

@class UIViewPropertyAnimator, UIVisualEffectView;


#import "HUPrimaryStateIconContentView.h"
#import "HUShapeLayerView.h"
#import "HUVisualEffectContainerView.h"

@interface HUDoorIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) UIViewPropertyAnimator *doorAnimator; // ivar: _doorAnimator
@property (retain, nonatomic) UIVisualEffectView *doorContainerView; // ivar: _doorContainerView
@property (retain, nonatomic) HUShapeLayerView *doorView; // ivar: _doorView
@property (retain, nonatomic) HUVisualEffectContainerView *frameContainerView; // ivar: _frameContainerView
@property (retain, nonatomic) HUShapeLayerView *frameView; // ivar: _frameView


-(BOOL)wantsManagedVibrancyEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)managedVisualEffectViews;
-(struct CATransform3D )doorTransformForAngle:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)updateColorsForDisplayStyle:(NSUInteger)arg0 ;
-(void)updateIconFromState:(NSInteger)arg0 toState:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif