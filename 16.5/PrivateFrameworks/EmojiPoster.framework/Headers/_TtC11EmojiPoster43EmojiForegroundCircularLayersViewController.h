// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER43EMOJIFOREGROUNDCIRCULARLAYERSVIEWCONTROLLER_H
#define _TTC11EMOJIPOSTER43EMOJIFOREGROUNDCIRCULARLAYERSVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11EmojiPoster43EmojiForegroundCircularLayersViewController : UIViewController {
    ? logger;
    ? emojiRenderer;
    ? configuration;
    ? layoutProvider;
    ? emojiSize;
    ? emojiImageViews;
    ? emojiImages;
    ? wakeProgress;
    ? unlockProgress;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif