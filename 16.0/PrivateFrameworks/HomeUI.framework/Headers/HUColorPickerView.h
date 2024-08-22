// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCOLORPICKERVIEW_H
#define HUCOLORPICKERVIEW_H

@class UIView, NSString, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate, HUQuickControlInteractiveView, HUColorWheelSpace, HUQuickControlColorPickerViewInteractionDelegate;


#import "HUColorWheelView.h"
#import "HUQuickControlMagnifierView.h"
#import "HUQuickControlColorViewProfile.h"

@interface HUColorPickerView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView>



@property (nonatomic) NSUInteger colorPickerMode; // ivar: _colorPickerMode
@property (readonly, nonatomic) NSObject<HUColorWheelSpace> *colorWheelSpace;
@property (retain, nonatomic) HUColorWheelView *colorWheelView; // ivar: _colorWheelView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUQuickControlColorPickerViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) CGFloat magnifierLength; // ivar: _magnifierLength
@property (nonatomic) CGPoint magnifierLocation;
@property (retain, nonatomic) HUQuickControlMagnifierView *magnifierView; // ivar: _magnifierView
@property (nonatomic) NSUInteger mirroringAxisBias; // ivar: _mirroringAxisBias
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (nonatomic) ? selectedColor; // ivar: _selectedColor
@property (nonatomic) ? selectedColorCoordinate; // ivar: _selectedColorCoordinate
@property (readonly) Class superclass;
@property (nonatomic) CGFloat touchDownTimestamp; // ivar: _touchDownTimestamp
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;
@property (nonatomic) CGFloat wheelHoleRadius;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)_colorWheelSpaceForMode:(NSUInteger)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(void)_applyMirroringAxisBiasToColorWheelSpaceIfNecessary;
-(void)_handleGesture:(id)arg0 ;
-(void)_updateDerivedSelectedColorCoordinate;
-(void)_updateMagnifierPosition;
-(void)_updateMagnifierTransformForTouchLocation:(struct CGPoint )arg0 ;
-(void)_updateMagnifierView;
-(void)_updateMirroringAxisBiasIfNecessary;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif