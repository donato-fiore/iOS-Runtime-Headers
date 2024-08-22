// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKVIDEOFULLSCREENVIEWCONTROLLER_H
#define WKVIDEOFULLSCREENVIEWCONTROLLER_H

@class UIViewController;



@interface WKVideoFullScreenViewController : UIViewController {
    WeakObjCPtr<AVPlayerViewController> _avPlayerViewController;
}




-(BOOL)prefersStatusBarHidden;
-(id)initWithAVPlayerViewController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif