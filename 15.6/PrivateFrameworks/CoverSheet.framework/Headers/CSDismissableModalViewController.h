// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSDISMISSABLEMODALVIEWCONTROLLER_H
#define CSDISMISSABLEMODALVIEWCONTROLLER_H

@class UIScreenEdgePanGestureRecognizer, SBFBarSwipeBehavior, NSString;
@protocol CSModalHomeGestureParticipating, UIGestureRecognizerDelegate, SBFBarSwipeBehaviorDelegate, CSDismissableModalViewControllerDelegate, CSModalHomeAffordanceControlling;


#import "CSPresentationViewController.h"

@interface CSDismissableModalViewController : CSPresentationViewController <CSModalHomeGestureParticipating, UIGestureRecognizerDelegate, SBFBarSwipeBehaviorDelegate>

 {
    UIScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    SBFBarSwipeBehavior *_barSwipeBehavior;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSDismissableModalViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CSModalHomeAffordanceControlling> *homeAffordanceController; // ivar: _homeAffordanceController
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)presentationCancelsTouches;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(CGFloat)additionalEdgeSpacingForGrabberView:(id)arg0 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_configureBarSwipeBehaviorWithGrabberViewIfNecessary:(id)arg0 ;
-(void)_handleBottomEdgeGestureBegan:(id)arg0 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg0 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg0 ;
-(void)_handleBottomEdgeGestureRecognizer:(id)arg0 ;
-(void)addGrabberView:(id)arg0 ;
-(void)barSwipeBehaviorActionPerformed:(id)arg0 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif