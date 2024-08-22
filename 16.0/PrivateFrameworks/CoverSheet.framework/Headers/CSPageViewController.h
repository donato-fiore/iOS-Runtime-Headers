// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPAGEVIEWCONTROLLER_H
#define CSPAGEVIEWCONTROLLER_H

@class NSString, NSSet, _UILegibilitySettings, NSArray;
@protocol CSPageViewControllerProtocol, CSCoverSheetViewControllerProtocol, UICoordinateSpace, CSCoverSheetViewPresenting;


#import "CSPresentationViewController.h"
#import "CSAppearance.h"
#import "CSBehavior.h"
#import "CSPresentation.h"
#import "CSLayoutStrategy.h"

@interface CSPageViewController : CSPresentationViewController <CSPageViewControllerProtocol>



@property (readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property (readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, nonatomic) BOOL authenticated; // ivar: _authenticated
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (weak, nonatomic) NSObject<CSCoverSheetViewControllerProtocol> *coverSheetViewController; // ivar: _coverSheetViewController
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
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (readonly, nonatomic) NSArray *viewsPreferringProminentPresentationAndDismissal;


+(BOOL)isAvailableForConfiguration;
+(Class)viewClass;
+(NSUInteger)requiredCapabilities;
-(NSInteger)requestedDismissalType;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pageView;
-(id)requestedDismissalSettings;
-(id)view;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)didTransitionToVisible:(BOOL)arg0 ;
-(void)handleAction:(id)arg0 fromSender:(id)arg1 ;
-(void)updateTransitionToVisible:(BOOL)arg0 progress:(CGFloat)arg1 mode:(NSInteger)arg2 ;
-(void)updateTransitionWhileRubberBandingInProgress:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willTransitionToVisible:(BOOL)arg0 ;


@end


#endif