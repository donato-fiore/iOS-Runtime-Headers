// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXAUDIOCOMPONENTOVERLAYVIEW_H
#define SXAUDIOCOMPONENTOVERLAYVIEW_H

@class UIImageView, UIActivityIndicatorView, UIImage, UIButton;



@interface SXAudioComponentOverlayView : UIImageView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic) UIImage *audioIndicatorImage; // ivar: _audioIndicatorImage
@property (readonly, nonatomic) UIButton *playButton; // ivar: _playButton


-(id)image;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;


@end


#endif