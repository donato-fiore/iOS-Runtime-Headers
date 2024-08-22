// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT18INCALLCONTROLSVIEW_H
#define _TTC15CONVERSATIONKIT18INCALLCONTROLSVIEW_H

@class UIView;



@interface _TtC15ConversationKit18InCallControlsView : UIView {
    ? dataSource;
    ? effectsButton;
    ? muteButton;
    ? flipCameraButton;
    ? joinLeaveButton;
    ? screenShareButton;
    ? audioRouteButton;
    ? toggleCameraButton;
    ? toggleCinematicFramingButton;
    ? buttonsByRow;
    ? joinLeaveConfiguration;
    ? buttonLabelWidthConstraints;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif