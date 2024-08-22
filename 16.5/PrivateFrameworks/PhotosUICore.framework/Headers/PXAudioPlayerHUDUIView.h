// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXAUDIOPLAYERHUDUIVIEW_H
#define PXAUDIOPLAYERHUDUIVIEW_H

@class UIView, UILabel, CADisplayLink;


#import "PXAudioPlayer.h"

@interface PXAudioPlayerHUDUIView : UIView {
    UILabel *_trackLabel;
    CADisplayLink *_displayLink;
}


@property (retain, nonatomic) PXAudioPlayer *audioPlayer; // ivar: _audioPlayer


-(id)initWithFrame:(struct CGRect )arg0 audioPlayer:(id)arg1 ;
-(void)_handleDisplayLink:(id)arg0 ;
-(void)_updateDisplayLink;
-(void)_updateInfoText;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif