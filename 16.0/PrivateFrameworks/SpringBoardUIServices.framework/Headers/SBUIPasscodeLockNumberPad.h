// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPASSCODELOCKNUMBERPAD_H
#define SBUIPASSCODELOCKNUMBERPAD_H

@class UIView, UIColor, NSArray, NSString, UIControl<SBUIPasscodeNumberPadButton>;
@protocol SBNumberPadDelegate, CAAnimationDelegate, UIPointerInteractionDelegate, SBUIPasscodeLockNumberPadDelegate;


#import "SBNumberPadWithDelegate.h"
#import "SBUIButton.h"

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate, CAAnimationDelegate, UIPointerInteractionDelegate>

 {
    SBNumberPadWithDelegate *_numberPad;
    UIColor *_customBackgroundColor;
    BOOL _useLightStyle;
    BOOL _visible;
    BOOL _snapshotsDisabled;
}


@property (nonatomic) CGFloat ancillaryButtonOffset; // ivar: _ancillaryButtonOffset
@property (readonly, nonatomic) SBUIButton *backspaceButton; // ivar: _backspaceButton
@property (readonly, weak, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) SBUIButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIPasscodeLockNumberPadDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> *downButton; // ivar: _downButton
@property (readonly, nonatomic) SBUIButton *emergencyCallButton; // ivar: _emergencyCallButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor; // ivar: _reduceTransparencyButtonColor
@property (nonatomic) BOOL showsBackspaceButton; // ivar: _showsBackspaceButton
@property (nonatomic) BOOL showsCancelButton; // ivar: _showsCancelButton
@property (nonatomic) BOOL showsEmergencyCallButton; // ivar: _showsEmergencyCallButton
@property (readonly) Class superclass;


+(id)_buttonForCharacter:(NSInteger)arg0 withLightStyle:(BOOL)arg1 ;
+(struct CGSize )_inputButtonCircleSize;
+(struct UIEdgeInsets )_inputButtonCircleSpacing;
-(CGFloat)_distanceToTopOfFirstButton;
-(id)_fontForAncillaryButton;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_configureAdditionalButtons;
-(void)_numberPadTouchCancelled:(id)arg0 forEvent:(id)arg1 ;
-(void)_numberPadTouchDown:(id)arg0 forEvent:(id)arg1 ;
-(void)_numberPadTouchDrag:(id)arg0 forEvent:(id)arg1 ;
-(void)_numberPadTouchUp:(id)arg0 forEvent:(id)arg1 ;
-(void)_setSnapshotsDisabled:(BOOL)arg0 ;
-(void)setVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif