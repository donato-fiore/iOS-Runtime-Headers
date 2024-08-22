// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PENCILEDUCATIONVIEWCONTROLLER_H
#define PENCILEDUCATIONVIEWCONTROLLER_H

@class UIViewController, NSDate, UIView, NSString, UISegmentedControl, NSMutableArray;
@protocol PKScribbleInteractionDelegate, PencilEducationElementViewControllerDelegate, PencilEducationViewControllerDelegate;


#import "PencilEducationElementViewController.h"

@interface PencilEducationViewController : UIViewController <PKScribbleInteractionDelegate, PencilEducationElementViewControllerDelegate>



@property (nonatomic) NSUInteger animationBeginRequestIndex; // ivar: _animationBeginRequestIndex
@property (retain, nonatomic) NSDate *appearDate; // ivar: _appearDate
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PencilEducationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // ivar: _didDisappear
@property (nonatomic) BOOL didRunInitialAppearActions; // ivar: _didRunInitialAppearActions
@property (retain, nonatomic) PencilEducationElementViewController *displayedController; // ivar: _displayedController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAnimating;
@property (nonatomic) NSUInteger pendingTransitionIndex; // ivar: _pendingTransitionIndex
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (nonatomic) BOOL setupComplete; // ivar: _setupComplete
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *viewControllers; // ivar: _viewControllers


+(id)localizedTitle;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldBeginAnimationForElementController:(id)arg0 ;
-(CGFloat)calculateFittingHeightByTemporarilyAdjustingFrameForWidth:(CGFloat)arg0 ;
-(id)traitCollection;
-(void)_configureViewControllersIfNecessary;
-(void)addControllerToContainer:(id)arg0 ;
-(void)beginAnimationIfNecessaryForElementController:(id)arg0 delay:(CGFloat)arg1 ;
-(void)cancelScheduledAnimations;
-(void)dealloc;
-(void)doneButtonPressed:(id)arg0 ;
-(void)elementControllerDidAppear:(id)arg0 ;
-(void)elementControllerWillReplay:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)segmentedControlDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif