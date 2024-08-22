// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSNAVIGATIONCARDVIEWCONTROLLER_H
#define CPSNAVIGATIONCARDVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint, NSString, UIColor, NSArray, NSMutableSet;
@protocol CPSNavigationDisplaying;


#import "CPSManeuversCardView.h"
#import "CPSPausedCardView.h"
#import "CPSLayoutHelperView.h"

@interface CPSNavigationCardViewController : UIViewController <CPSNavigationDisplaying>



@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) NSLayoutConstraint *containerViewHeightConstraint; // ivar: _containerViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *containerViewTopConstraint; // ivar: _containerViewTopConstraint
@property (retain, nonatomic) CPSManeuversCardView *currentManeuversCardView; // ivar: _currentManeuversCardView
@property (retain, nonatomic) CPSPausedCardView *currentPausedCardView; // ivar: _currentPausedCardView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *guidanceBackgroundColor; // ivar: _guidanceBackgroundColor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *layoutHelperVerticalConstraints; // ivar: _layoutHelperVerticalConstraints
@property (readonly, nonatomic) CPSLayoutHelperView *layoutHelperView; // ivar: _layoutHelperView
@property (copy, nonatomic) NSString *navigatingBundleIdentifier; // ivar: _navigatingBundleIdentifier
@property (nonatomic) BOOL navigationCardHidden; // ivar: _navigationCardHidden
@property (retain, nonatomic) NSMutableSet *navigationCardHiddenRequesters; // ivar: _navigationCardHiddenRequesters
@property (nonatomic) BOOL passesLinkCheck; // ivar: _passesLinkCheck
@property (retain, nonatomic) NSLayoutConstraint *sizingViewBottomConstraint; // ivar: _sizingViewBottomConstraint
@property (readonly) Class superclass;


-(BOOL)_shouldAnimate;
-(void)_showPausedViewForReason:(NSUInteger)arg0 description:(id)arg1 pauseCardColor:(id)arg2 ;
-(void)_transitionFromViews:(id)arg0 inView:(id)arg1 ;
-(void)_updateCardBackgroundColors;
-(void)_updateHelperConstraints;
-(void)_updateLinkedCheck;
-(void)_updateNavigationCardHidden;
-(void)_updateSizingViewConstraintsForView:(id)arg0 ;
-(void)availableHeightChangedTo:(CGFloat)arg0 ;
-(void)navigator:(id)arg0 didEndTrip:(BOOL)arg1 ;
-(void)navigator:(id)arg0 pausedTripForReason:(NSUInteger)arg1 description:(id)arg2 usingColor:(id)arg3 ;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;
-(void)updateTripEstimates:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif