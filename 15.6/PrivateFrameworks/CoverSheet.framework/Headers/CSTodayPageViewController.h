// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSTODAYPAGEVIEWCONTROLLER_H
#define CSTODAYPAGEVIEWCONTROLLER_H

@class NSString, NSSet, _UILegibilitySettings, NSArray, SBViewControllerTransitionContext;
@protocol CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSPageViewControllerProtocol, SBUISpotlightInitiating, CSCoverSheetViewControllerProtocol, UICoordinateSpace, CSCoverSheetViewPresenting;


#import "CSPageViewController.h"
#import "CSAppearance.h"
#import "CSBehavior.h"
#import "CSTodayContentViewController.h"
#import "CSPresentation.h"
#import "CSLayoutStrategy.h"
#import "CSTodayViewController.h"

@interface CSTodayPageViewController : CSPageViewController <CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSPageViewControllerProtocol, SBUISpotlightInitiating>



@property (readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property (readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, nonatomic) BOOL authenticated;
@property (readonly, copy, nonatomic) NSSet *components;
@property (retain, nonatomic) CSTodayContentViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (weak, nonatomic) NSObject<CSCoverSheetViewControllerProtocol> *coverSheetViewController;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, copy, nonatomic) NSString *pageRole;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger presentationAltitude;
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, nonatomic) unsigned int presentationFrameRateRangeReason;
@property (readonly, nonatomic) CAFrameRateRange presentationPreferredFrameRateRange;
@property (readonly, nonatomic) NSInteger presentationPriority;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) NSInteger presentationTransition;
@property (readonly, nonatomic) NSInteger presentationType;
@property (weak, nonatomic) NSObject<CSCoverSheetViewPresenting> *presenter;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CSTodayViewController *todayViewController;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;


+(BOOL)isAvailableForConfiguration;
+(NSUInteger)requiredCapabilities;
-(BOOL)_isPortrait;
-(BOOL)_listBelowDateTime;
-(CGFloat)customListWidth;
-(CGFloat)dateTimeInsetX;
-(CGFloat)listInsetX;
-(CGFloat)minimumDateToListSpacing;
-(NSUInteger)dateTimeLayout;
-(NSUInteger)listLayout;
-(NSUInteger)listWidthStrategy;
-(id)displayLayoutElementIdentifier;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)spotlightHeaderAcquiringViewController;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)cleanupAfterSpotlightDismissal;
-(void)coronaAnimationController:(id)arg0 willAnimateCoronaTransitionWithAnimator:(id)arg1 ;
-(void)coverSheetTodayViewController:(id)arg0 contentViewsDidChange:(id)arg1 ;
-(void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg0 ;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg0 ;
-(void)updateTransitionWhileRubberBandingInProgress:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif