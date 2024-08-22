// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSDASHBOARDGUIDANCEVIEWCONTROLLER_H
#define CPSDASHBOARDGUIDANCEVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, CPDashboardButton, UIView, NSLayoutConstraint;
@protocol CPSButtonDelegate, CPSNavigationDisplaying, CPDashboardClientInterface;


#import "CPSDashboardManeuversCardView.h"
#import "CPSPausedCardView.h"

@interface CPSDashboardGuidanceViewController : UIViewController <CPSButtonDelegate, CPSNavigationDisplaying>



@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (retain, nonatomic) NSArray *dashboardButtons; // ivar: _dashboardButtons
@property (retain, nonatomic) NSObject<CPDashboardClientInterface> *dashboardClient; // ivar: _dashboardClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPDashboardButton *fakeDashboardButton; // ivar: _fakeDashboardButton
@property (nonatomic) BOOL fakesDashboardSupport; // ivar: _fakesDashboardSupport
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPSDashboardManeuversCardView *maneuversCardView; // ivar: _maneuversCardView
@property (retain, nonatomic) CPSPausedCardView *pausedCardView; // ivar: _pausedCardView
@property (retain, nonatomic) UIView *shortcutButtonsContainerView; // ivar: _shortcutButtonsContainerView
@property (retain, nonatomic) NSLayoutConstraint *shortcutButtonsContainerViewLeadingConstraint; // ivar: _shortcutButtonsContainerViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *shortcutButtonsContainerViewTrailingConstraint; // ivar: _shortcutButtonsContainerViewTrailingConstraint
@property (retain, nonatomic) NSArray *spacingGuides; // ivar: _spacingGuides
@property (readonly) Class superclass;


-(void)_animateShortcutContainerViewIn;
-(void)_animateShortcutContainerViewOut;
-(void)_focusHighlightColorChanged:(id)arg0 ;
-(void)_launchApp:(id)arg0 ;
-(void)_setContentReady;
-(void)_setupFakeButtonIfNecessary;
-(void)_transitionFromViews:(id)arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(void)didSelectButton:(id)arg0 ;
-(void)navigator:(id)arg0 didEndTrip:(BOOL)arg1 ;
-(void)navigator:(id)arg0 pausedTripForReason:(NSUInteger)arg1 description:(id)arg2 usingColor:(id)arg3 ;
-(void)setShortCutButtons:(id)arg0 ;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif