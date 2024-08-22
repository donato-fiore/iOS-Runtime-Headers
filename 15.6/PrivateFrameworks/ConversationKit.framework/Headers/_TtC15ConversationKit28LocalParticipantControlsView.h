// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT28LOCALPARTICIPANTCONTROLSVIEW_H
#define _TTC15CONVERSATIONKIT28LOCALPARTICIPANTCONTROLSVIEW_H

@class UIView, UIControl;



@interface _TtC15ConversationKit28LocalParticipantControlsView : UIView {
    ? constraintsForStyle;
    ? currentConstraints;
    ? delegate;
    ? controlsLayoutGuide;
    ? style;
    ? capabilities;
    ? effectsSelected;
    ? blurEnabled;
    ? cinematicFramingIsEnabled;
    ? isDisabled;
}


@property (nonatomic, readonly) UIControl *cameraBlurButton; // ivar: cameraBlurButton
@property (nonatomic, readonly) UIControl *cameraFlipButton; // ivar: cameraFlipButton
@property (nonatomic, readonly) UIControl *cinematicFramingButton; // ivar: cinematicFramingButton
@property (nonatomic, readonly) UIControl *collapseButton; // ivar: collapseButton
@property (nonatomic, readonly) UIControl *effectsButton; // ivar: effectsButton
@property (nonatomic, readonly) UIControl *rotateButton; // ivar: rotateButton


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)handleCameraBlurTapped;
-(void)handleCameraFlipTapped;
-(void)handleCinematicFramingTapped;
-(void)handleCollapseButtonTapped;
-(void)handleEffectsTapped;
-(void)handleRotateButtonTapped;
-(void)layoutSubviews;


@end


#endif