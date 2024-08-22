// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI25ROOTSPLITTABBARCONTROLLER_H
#define _TTC8VIDEOSUI25ROOTSPLITTABBARCONTROLLER_H

@class UITabBarController;



@interface _TtC8VideosUI25RootSplitTabBarController : UITabBarController {
    ? splitDelegate;
    ? trackModeSwitchOnParentMoveEvents;
    ? listenForAppear;
    ? listenForDissapear;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif