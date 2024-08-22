// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMEDIACONTROLSVIEWCONTROLLER_H
#define MPMEDIACONTROLSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, MPMediaControlsViewControllerDelegate;


#import "MPMediaControlsConfiguration.h"
#import "MPMediaControls.h"

@interface MPMediaControlsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPMediaControlsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didDismissHandler; // ivar: _didDismissHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPMediaControls *mediaControls; // ivar: _mediaControls
@property (readonly) Class superclass;


-(BOOL)prefersStatusBarHidden;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_createMediaControlsIfNeeded;
-(void)_present;
-(void)animateTransition:(id)arg0 ;
-(void)dismiss;
-(void)prepareRemoteViewController;
-(void)setOverrideRouteSharingPolicy:(NSUInteger)arg0 routingContextUID:(id)arg1 ;
-(void)startPrewarming;
-(void)stopPrewarming;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif