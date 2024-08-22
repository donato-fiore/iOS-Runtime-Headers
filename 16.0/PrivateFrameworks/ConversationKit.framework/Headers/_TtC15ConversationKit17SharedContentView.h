// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT17SHAREDCONTENTVIEW_H
#define _TTC15CONVERSATIONKIT17SHAREDCONTENTVIEW_H

@class UIView;



@interface _TtC15ConversationKit17SharedContentView : UIView {
    ? contentView;
    ? videoView;
    ? videoOverlayView;
    ? mostRecentViewModelHash;
    ? loggingIdentifier;
    ? participantIdentifier;
    ? delegate;
    ? customCornerRadius;
    ? isScreenSharing;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif