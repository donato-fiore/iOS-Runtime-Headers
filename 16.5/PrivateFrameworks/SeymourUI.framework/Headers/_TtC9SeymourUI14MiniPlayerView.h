// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI14MINIPLAYERVIEW_H
#define _TTC9SEYMOURUI14MINIPLAYERVIEW_H

@class UIView;



@interface _TtC9SeymourUI14MiniPlayerView : UIView {
    ? presenter;
    ? artworkView;
    ? controlsStackView;
    ? layout;
    ? metadataStackView;
    ? playPauseControl;
    ? skipForwardControl;
    ? titleLabel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)playbackControlTapped:(id)arg0 ;
-(void)tapRecognized:(id)arg0 ;


@end


#endif