// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI32SESSIONVIDEOPLAYERVIEWCONTROLLER_H
#define _TTC9SEYMOURUI32SESSIONVIDEOPLAYERVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI32SessionVideoPlayerViewController : UIViewController {
    ? presenter;
    ? transportBarControlsCoordinator;
    ? airplayAndSettingsControlsView;
    ? settingsControlItem;
    ? gymKitResumeMachineView;
    ? settingsPopoverSourceView;
    ? overlayView;
    ? playbackViewController;
    ? tapGestureRecognizer;
    ? videoBoundsObserver;
    ? _requiresLinearPlayback;
}


@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif