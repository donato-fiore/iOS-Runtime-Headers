// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCCONTROLLERVIEW_H
#define GCCONTROLLERVIEW_H

@class UIView;


#import "GCControllerButtonInputView.h"
#import "GCController.h"
#import "GCControllerDpadInputView.h"
#import "GCControllerThumbstickInputView.h"

@interface GCControllerView : UIView {
    UIView *_leftSide;
    UIView *_rightSide;
    UIEdgeInsets _edgeInsets;
}


@property (retain, nonatomic) GCControllerButtonInputView *buttonA; // ivar: _buttonA
@property (retain, nonatomic) GCControllerButtonInputView *buttonB; // ivar: _buttonB
@property (retain, nonatomic) GCControllerButtonInputView *buttonX; // ivar: _buttonX
@property (retain, nonatomic) GCControllerButtonInputView *buttonY; // ivar: _buttonY
@property (retain, nonatomic) GCController *controller; // ivar: _controller
@property (retain, nonatomic) GCControllerDpadInputView *dpad; // ivar: _dpad
@property (retain, nonatomic) GCControllerButtonInputView *leftShoulder; // ivar: _leftShoulder
@property (retain, nonatomic) GCControllerThumbstickInputView *leftThumbstick; // ivar: _leftThumbstick
@property (retain, nonatomic) GCControllerButtonInputView *leftTrigger; // ivar: _leftTrigger
@property (retain, nonatomic) GCControllerButtonInputView *rightShoulder; // ivar: _rightShoulder
@property (retain, nonatomic) GCControllerThumbstickInputView *rightThumbstick; // ivar: _rightThumbstick
@property (retain, nonatomic) GCControllerButtonInputView *rightTrigger; // ivar: _rightTrigger


-(id)getConfigurationForElement:(id)arg0 ;
-(id)getUIControlForName:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(void)_commonInit;
-(void)applyPadOrientation;
-(void)applyPhoneOrientation:(NSInteger)arg0 ;
-(void)assignInputElements;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ensureController;
-(void)orientationChanged;
-(void)publish;
-(void)setConfigurationForElement:(id)arg0 configuration:(id)arg1 ;
-(void)setupPositions;
-(void)setupSide:(id)arg0 thumbstick:(id)arg1 buttons:(id)arg2 ;
-(void)unpublish;


@end


#endif