// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKPAUDIOMESSAGEVIEW_H
#define SCKPAUDIOMESSAGEVIEW_H

@class UIView, UIButton, UIImage, UIImageView;
@protocol SCKPAudioMessageViewDelegate;



@interface SCKPAudioMessageView : UIView {
    id<SCKPAudioMessageViewDelegate> *_delegate;
    UIButton *_playButton;
    UIImage *_playImage;
    UIImage *_pauseImage;
    UIImageView *_waveformImageView;
}


@property (nonatomic) NSInteger playButtonState; // ivar: _playButtonState


-(id)initWithAudioMessageURL:(id)arg0 delegate:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_playButtonPressed:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif