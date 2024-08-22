// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI21SESSIONVIEWCONTROLLER_H
#define _TTC9SEYMOURUI21SESSIONVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI21SessionViewController : UIViewController {
    ? presenter;
    ? pictureInPictureSurrogate;
    ? eventHub;
    ? sessionContainer;
    ? backgroundView;
    ? instructionsView;
    ? watchDiscoveryView;
    ? continueOnWatchView;
    ? ongoingWorkoutDetectedView;
    ? bufferView;
    ? introSequenceView;
    ? introSequenceCompleted;
    ? overlayView;
    ? playerViewController;
    ? castingView;
    ? displayLink;
    ? displayPreferencesViewController;
    ? summaryViewController;
    ? activityTypeBehavior;
    ? menuGestureRecognizer;
    ? overlayConstraints;
}


@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)menuButtonTapped;
-(void)onDisplayLink;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif