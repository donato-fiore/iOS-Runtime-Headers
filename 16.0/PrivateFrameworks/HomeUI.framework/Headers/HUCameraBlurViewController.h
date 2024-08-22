// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERABLURVIEWCONTROLLER_H
#define HUCAMERABLURVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView;



@interface HUCameraBlurViewController : UIViewController

@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (nonatomic) BOOL showingBlur; // ivar: _showingBlur


-(BOOL)shouldShowBlurForPlaybackEngine:(id)arg0 ;
-(void)updateBlurWithPlaybackEngine:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif