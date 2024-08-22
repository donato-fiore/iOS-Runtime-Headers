// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXPOSTERFRAMEVIEW_H
#define SXPOSTERFRAMEVIEW_H

@class UIImageView, SVVideoPlayButton;



@interface SXPosterFrameView : UIImageView

@property (retain, nonatomic) SVVideoPlayButton *playButton; // ivar: _playButton


-(BOOL)accessibilityIgnoresInvertColors;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif