// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUISIRIEDUCATIONVIEWCONTROLLER_H
#define VTUISIRIEDUCATIONVIEWCONTROLLER_H

@class OBWelcomeController, AVPlayerViewController, AVPlayerLooper, AVPlayer;
@protocol VTUISiriEducationViewControllerDelegate;


#import "VTUIStyle.h"

@interface VTUISiriEducationViewController : OBWelcomeController {
    VTUIStyle *_style;
    id<VTUISiriEducationViewControllerDelegate> *_delegate;
    AVPlayerViewController *_playerViewController;
    AVPlayerLooper *_playerLooper;
    AVPlayer *_player;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 style:(id)arg2 delegate:(id)arg3 ;
-(void)_continueButtonPressed;
-(void)_fadeInSubViews;
-(void)_setupContinueButton;
-(void)_setupImageContainerViewForTraitCollection:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif