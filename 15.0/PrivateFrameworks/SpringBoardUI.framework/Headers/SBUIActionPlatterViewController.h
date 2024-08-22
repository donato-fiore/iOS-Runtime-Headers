// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIACTIONPLATTERVIEWCONTROLLER_H
#define SBUIACTIONPLATTERVIEWCONTROLLER_H

@class UIViewController, UIStackView, UIView, UISelectionFeedbackGenerator, NSArray, NSString, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate, SBUIActionPlatterViewControllerDelegate;



@interface SBUIActionPlatterViewController : UIViewController <UIGestureRecognizerDelegate>

 {
    ? _delegateRespondsTo;
    UIStackView *_stackView;
    UIView *_keylinesContainerView;
    UISelectionFeedbackGenerator *_feedbackRetargetBehavior;
}


@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIActionPlatterViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger imagePosition; // ivar: _imagePosition
@property (nonatomic) BOOL reversesActions; // ivar: _reversesActions
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger systemInteractionStartIndex; // ivar: _systemInteractionStartIndex


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithActions:(id)arg0 gestureRecognizer:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_handleLongPressGestureRecognizer:(id)arg0 ;
-(void)_updateKeylineViews;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif