// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTVOUTWINDOW_H
#define PLTVOUTWINDOW_H

@class UIWindow, UIView;



@interface PLTVOutWindow : UIWindow {
    UIView *_backgroundView;
    UIView *_videoView;
}




-(BOOL)_setupTargetScreen:(id)arg0 ;
-(BOOL)setVideoView:(id)arg0 ;
-(id)init;
-(id)videoView;
-(void)dealloc;


@end


#endif