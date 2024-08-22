// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSMAPTEMPLATEVIEWCONTROLLER_H
#define CPSMAPTEMPLATEVIEWCONTROLLER_H

@class NSMutableSet, NSTimer, NSLayoutConstraint, NSString, BKSHIDEventDeliveryPolicyObserver, UIFocusGuide, UIColor, UITapGestureRecognizer, NSMutableDictionary, NSMutableArray, CPMapTemplate, UIView, UIPanGestureRecognizer, UIStackView, CPTripPreviewTextConfiguration, NSArray;
@protocol CARSessionObserving, CPSButtonDelegate, CPSTripInitiating, UIGestureRecognizerDelegate, CPSPanEventDelegate, CPSNavigationAlertQueueDelegate, CPSNavigationDisplaying, CARNavigationOwnershipManagerDelegate, CPSEventObserving, CPSApplicationStateObserving, CPSLayoutHelperViewDelegate, BKSHIDEventDeliveryPolicyObserving, CPMapTemplateProviding, CPSLinearFocusProviding, CPNavigationSessionProviding, UIFocusItem, CPMapClientTemplateDelegate, CPSNavigatorObserving, CPSSafeAreaDelegate;


#import "CPSBaseTemplateViewController.h"
#import "CPSApplicationStateMonitor.h"
#import "_CPSFocusHoldingButton.h"
#import "CPSNavigationAlertQueue.h"
#import "CPSNavigationCardViewController.h"
#import "CPSLayoutHelperView.h"
#import "CPSNavigationETAView.h"
#import "CPSNavigator.h"
#import "CPSPanViewController.h"
#import "CPSTripPreviewsCardView.h"

@interface CPSMapTemplateViewController : CPSBaseTemplateViewController <CARSessionObserving, CPSButtonDelegate, CPSTripInitiating, UIGestureRecognizerDelegate, CPSPanEventDelegate, CPSNavigationAlertQueueDelegate, CPSNavigationDisplaying, CARNavigationOwnershipManagerDelegate, CPSEventObserving, CPSApplicationStateObserving, CPSLayoutHelperViewDelegate, BKSHIDEventDeliveryPolicyObserving, CPMapTemplateProviding, CPSLinearFocusProviding, CPNavigationSessionProviding>



@property (nonatomic) BOOL applicationIsFrontmost; // ivar: _applicationIsFrontmost
@property (weak, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // ivar: _applicationStateMonitor
@property (retain, nonatomic) NSMutableSet *autoHideDisabledReasons; // ivar: _autoHideDisabledReasons
@property (retain, nonatomic) NSTimer *autoHideTimer; // ivar: _autoHideTimer
@property (nonatomic) BOOL autoHidesNavigationBar; // ivar: _autoHidesNavigationBar
@property (retain, nonatomic) NSLayoutConstraint *cardWidthConstraint; // ivar: _cardWidthConstraint
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL demoAutoHideTimerDisabled; // ivar: _demoAutoHideTimerDisabled
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL etaViewHidden; // ivar: _etaViewHidden
@property (retain, nonatomic) NSMutableSet *etaViewHiddenRequesters; // ivar: _etaViewHiddenRequesters
@property (retain, nonatomic) BKSHIDEventDeliveryPolicyObserver *eventDeliveryPolicyObserver; // ivar: _eventDeliveryPolicyObserver
@property (retain, nonatomic) UIFocusGuide *focusHolderLeftFocusGuide; // ivar: _focusHolderLeftFocusGuide
@property (retain, nonatomic) UIFocusGuide *focusHolderRightFocusGuide; // ivar: _focusHolderRightFocusGuide
@property (retain, nonatomic) _CPSFocusHoldingButton *focusHoldingButton; // ivar: _focusHoldingButton
@property (retain, nonatomic) UIColor *guidanceBackgroundColor; // ivar: _guidanceBackgroundColor
@property (nonatomic) BOOL hasSetTripEstimateStyle; // ivar: _hasSetTripEstimateStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITapGestureRecognizer *hideTapGestureRecognizer; // ivar: _hideTapGestureRecognizer
@property (nonatomic) BOOL hidesButtonsWithNavigationBar; // ivar: _hidesButtonsWithNavigationBar
@property (weak, nonatomic) NSObject<UIFocusItem> *itemFocusedBeforeNavAlert; // ivar: _itemFocusedBeforeNavAlert
@property (weak, nonatomic) NSObject<UIFocusItem> *lastFocusedItem; // ivar: _lastFocusedItem
@property (nonatomic) CGPoint lastPanGesturePoint; // ivar: _lastPanGesturePoint
@property (retain, nonatomic) NSMutableDictionary *lastTravelEstimatesByTrip; // ivar: _lastTravelEstimatesByTrip
@property (retain, nonatomic) NSMutableArray *mapButtons; // ivar: _mapButtons
@property (readonly, nonatomic) CPMapTemplate *mapTemplate;
@property (readonly, weak, nonatomic) NSObject<CPMapClientTemplateDelegate> *mapTemplateDelegate;
@property (nonatomic) NSUInteger maximumMapButtonCount; // ivar: _maximumMapButtonCount
@property (retain, nonatomic) UITapGestureRecognizer *navBarHideTapGestureRecognizer; // ivar: _navBarHideTapGestureRecognizer
@property (retain, nonatomic) NSLayoutConstraint *navigationAlertBottomConstraint; // ivar: _navigationAlertBottomConstraint
@property (retain, nonatomic) CPSNavigationAlertQueue *navigationAlertQueue; // ivar: _navigationAlertQueue
@property (retain, nonatomic) CPSNavigationCardViewController *navigationCardViewController; // ivar: _navigationCardViewController
@property (retain, nonatomic) CPSLayoutHelperView *navigationCardViewLayoutHelperView; // ivar: _navigationCardViewLayoutHelperView
@property (retain, nonatomic) NSLayoutConstraint *navigationCardViewLayoutViewBottomConstraint; // ivar: _navigationCardViewLayoutViewBottomConstraint
@property (retain, nonatomic) CPSNavigationETAView *navigationETAView; // ivar: _navigationETAView
@property (retain, nonatomic) NSLayoutConstraint *navigationETAViewBottomConstraint; // ivar: _navigationETAViewBottomConstraint
@property (retain, nonatomic) CPSNavigator *navigator; // ivar: _navigator
@property (weak, nonatomic) NSObject<CPSNavigatorObserving> *navigatorObserver; // ivar: _navigatorObserver
@property (retain, nonatomic) NSLayoutConstraint *panContainerLeftConstraint; // ivar: _panContainerLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *panContainerRightConstraint; // ivar: _panContainerRightConstraint
@property (retain, nonatomic) UIView *panContainerView; // ivar: _panContainerView
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) CPSPanViewController *panViewController; // ivar: _panViewController
@property (nonatomic) BOOL previewOnlyRouteChoices; // ivar: _previewOnlyRouteChoices
@property (nonatomic) NSUInteger previewSelectedIndex; // ivar: _previewSelectedIndex
@property (retain, nonatomic) CPSTripPreviewsCardView *previewsView; // ivar: _previewsView
@property (nonatomic) BOOL rightHandDrive; // ivar: _rightHandDrive
@property (weak, nonatomic) NSObject<CPSSafeAreaDelegate> *safeAreaDelegate; // ivar: _safeAreaDelegate
@property (nonatomic) BOOL shouldRestoreFocusToNavigationBar; // ivar: _shouldRestoreFocusToNavigationBar
@property (readonly) Class superclass;
@property (retain, nonatomic) UIStackView *trailingBottomStackView; // ivar: _trailingBottomStackView
@property (nonatomic) NSUInteger tripEstimateStyle; // ivar: _tripEstimateStyle
@property (retain, nonatomic) CPTripPreviewTextConfiguration *tripPreviewTextConfiguration; // ivar: _tripPreviewTextConfiguration
@property (copy, nonatomic) NSArray *tripPreviews; // ivar: _tripPreviews
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(BOOL)_isAutoHideEnabled;
-(BOOL)canAnimateNavigationAlert;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)shouldForwardEventForWindow:(id)arg0 eventType:(NSInteger)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_widthForNavigationAlert;
-(id)_buttonForIdentifier:(id)arg0 ;
-(id)_buttons;
-(id)_linearFocusItems;
-(id)_tripDidBegin:(id)arg0 withEstimates:(id)arg1 forIdentifier:(id)arg2 ;
-(id)initWithMapTemplate:(id)arg0 templateDelegate:(id)arg1 safeAreaDelegate:(id)arg2 applicationStateMonitor:(id)arg3 templateEnvironment:(id)arg4 ;
-(id)preferredFocusEnvironments;
-(struct UIEdgeInsets )_cardViewEdgeInsets;
-(struct UIEdgeInsets )_navBarInsets;
-(struct UIEdgeInsets )_navigationAlertInsets;
-(struct UIEdgeInsets )_previewEdgeInsets;
-(void)_addPanControllerAsChild;
-(void)_calculateAndUpdateCardWidthConstraint;
-(void)_checkNavigationCardHelperViewForETAFit;
-(void)_createNavigationCardViewController;
-(void)_createNavigationCardViewLayoutHelperView;
-(void)_handleFocusHolderSelect;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_hideBar:(id)arg0 ;
-(void)_nightModeChanged:(id)arg0 ;
-(void)_performAlertSizingForAlert:(id)arg0 animated:(BOOL)arg1 ;
-(void)_reloadPreviewsView;
-(void)_removePanController;
-(void)_setAutoHideDisabled:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)_setButtonsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setETAViewHidden:(BOOL)arg0 forRequester:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setFocusHoldersEnabled:(BOOL)arg0 ;
-(void)_setMaximumVisibleMapButtons:(NSUInteger)arg0 ;
-(void)_setNavigationAlertView:(id)arg0 visible:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setPanInterfaceVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_showBarAnimated:(BOOL)arg0 allowFocusDeferral:(BOOL)arg1 ;
-(void)_updateETAViewHidden;
-(void)_updateInterestingArea;
-(void)_updateMapButtonVisibility;
-(void)_updateMapButtonsWithButtons:(id)arg0 ;
-(void)_updatePanGestureForHiFiTouch;
-(void)_updateSafeArea;
-(void)_viewDidLoad;
-(void)applicationStateMonitor:(id)arg0 didBecomeActive:(BOOL)arg1 ;
-(void)dealloc;
-(void)didChangeLayout:(id)arg0 ;
-(void)didSelectButton:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)dismissNavigationAlertAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)hostPanInterfaceVisible:(id)arg0 ;
-(void)hostSetMapButton:(id)arg0 imageSet:(id)arg1 ;
-(void)hostSetMapButtons:(id)arg0 ;
-(void)hostSetPanInterfaceVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)hostStartNavigationSessionForTrip:(id)arg0 reply:(id)arg1 ;
-(void)hostUpdateTravelEstimates:(id)arg0 forTripIdentifier:(id)arg1 ;
-(void)invalidate;
-(void)navigationAlertQueue:(id)arg0 shouldDisplayAlertView:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationAlertQueue:(id)arg0 shouldRemoveAlertView:(id)arg1 animated:(BOOL)arg2 dismissalContext:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)navigationOwnershipChangedToOwner:(NSUInteger)arg0 ;
-(void)navigator:(id)arg0 didEndTrip:(BOOL)arg1 ;
-(void)navigator:(id)arg0 pausedTripForReason:(NSUInteger)arg1 description:(id)arg2 usingColor:(id)arg3 ;
-(void)observerDeliveryPolicyDidChange:(id)arg0 ;
-(void)panBeganWithDirection:(NSInteger)arg0 ;
-(void)panEndedWithDirection:(NSInteger)arg0 ;
-(void)panWithDirection:(NSInteger)arg0 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)setControl:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setHostAutoHidesNavigationBar:(BOOL)arg0 ;
-(void)setHostGuidanceBackgroundColor:(id)arg0 ;
-(void)setHostHidesButtonsWithNavigationBar:(BOOL)arg0 ;
-(void)setHostTripEstimateStyle:(NSUInteger)arg0 ;
-(void)setHostTripPreviews:(id)arg0 textConfiguration:(id)arg1 previewOnlyRouteChoices:(BOOL)arg2 selectedIndex:(NSUInteger)arg3 ;
-(void)setMapButton:(id)arg0 focusedImage:(id)arg1 ;
-(void)setMapButton:(id)arg0 hidden:(BOOL)arg1 ;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)showNavigationAlert:(id)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)tripView:(id)arg0 selectedTrip:(id)arg1 routeChoice:(id)arg2 ;
-(void)tripView:(id)arg0 startedTrip:(id)arg1 routeChoice:(id)arg2 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;
-(void)updateNavigationAlert:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif