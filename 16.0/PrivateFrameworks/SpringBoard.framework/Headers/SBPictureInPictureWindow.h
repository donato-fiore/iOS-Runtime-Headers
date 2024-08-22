// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPICTUREINPICTUREWINDOW_H
#define SBPICTUREINPICTUREWINDOW_H

@class UIWindow;


#import "SBPIPContainerViewController.h"

@interface SBPictureInPictureWindow : UIWindow

@property (retain, nonatomic) SBPIPContainerViewController *rootViewController;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)setWindowScene:(id)arg0 ;


@end


#endif