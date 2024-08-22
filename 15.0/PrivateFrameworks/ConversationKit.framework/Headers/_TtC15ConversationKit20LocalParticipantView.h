// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT20LOCALPARTICIPANTVIEW_H
#define _TTC15CONVERSATIONKIT20LOCALPARTICIPANTVIEW_H

@class UIView, UIControl;


#import "_TtC15ConversationKit28LocalParticipantControlsView.h"

@interface _TtC15ConversationKit20LocalParticipantView : UIView {
    ? participantView;
    ? $__lazy_storage_$_controlsView;
    ? constraintsForStyle;
    ? currentConstraints;
    ? delegate;
    ? dragEnabled;
    ? blurEnabled;
    ? controlsAreHidden;
    ? topControlsAlpha;
    ? supportsRotation;
    ? supportsCameraBlur;
    ? isInRoster;
}


@property (nonatomic, readonly) UIControl *cameraBlurButton; // ivar: cameraBlurButton
@property (nonatomic, readonly) UIControl *collapseButton; // ivar: collapseButton
@property (nonatomic, retain) _TtC15ConversationKit28LocalParticipantControlsView *controlsView;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)toggleCameraBlur;
-(void)toggleExpandCollapse;


@end


#endif