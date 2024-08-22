// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMAPTEMPLATE_H
#define CPMAPTEMPLATE_H

@class NSString, UIColor, NSArray, NAFuture, NSMutableDictionary;
@protocol CPMapButtonDelegate, CPMapClientTemplateDelegate, CPBannerDelegate, CPNavigationAlertUpdating, CPBarButtonProviding, CPBannerProviding, CPMapTemplateDelegate, CPNavigationSessionProviding;


#import "CPTemplate.h"
#import "CPBarButton.h"
#import "CPNavigationAlert.h"

@interface CPMapTemplate : CPTemplate <CPMapButtonDelegate, CPMapClientTemplateDelegate, CPBannerDelegate, CPNavigationAlertUpdating, CPBarButtonProviding>



@property (nonatomic) BOOL automaticallyHidesNavigationBar; // ivar: _automaticallyHidesNavigationBar
@property (retain, nonatomic) CPBarButton *backButton;
@property (retain, nonatomic) NSObject<CPBannerProviding> *bannerProvider; // ivar: _bannerProvider
@property (readonly, nonatomic) CPNavigationAlert *currentNavigationAlert; // ivar: _currentNavigationAlert
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *guidanceBackgroundColor; // ivar: _guidanceBackgroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesButtonsWithNavigationBar; // ivar: _hidesButtonsWithNavigationBar
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *mapButtons; // ivar: _mapButtons
@property (weak, nonatomic) NSObject<CPMapTemplateDelegate> *mapDelegate; // ivar: _mapDelegate
@property (retain, nonatomic) NSObject<CPNavigationSessionProviding> *navigationSessionProvider; // ivar: _navigationSessionProvider
@property (retain, nonatomic) NAFuture *navigationSessionProviderFuture; // ivar: _navigationSessionProviderFuture
@property (readonly, nonatomic, getter=isPanningInterfaceVisible) BOOL panningInterfaceVisible;
@property (retain, nonatomic) NSMutableDictionary *postedBannerObjects; // ivar: _postedBannerObjects
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (nonatomic) NSUInteger tripEstimateStyle; // ivar: _tripEstimateStyle
@property (readonly, copy, nonatomic) NSArray *tripPreviews; // ivar: _tripPreviews


+(BOOL)supportsSecureCoding;
-(BOOL)mapButton:(id)arg0 setFocusedImage:(id)arg1 ;
-(BOOL)mapButton:(id)arg0 setHidden:(BOOL)arg1 ;
-(BOOL)mapButton:(id)arg0 setImageSet:(id)arg1 ;
-(NSInteger)_displayStyleForManeuver:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)startNavigationSessionForTrip:(id)arg0 ;
-(void)_postBannerIfNecessaryForManeuver:(id)arg0 ;
-(void)_postBannerIfNecessaryForNavigationAlert:(id)arg0 ;
-(void)_resolveTrip:(id)arg0 routeChoice:(id)arg1 completion:(id)arg2 ;
-(void)_updateBannerIfNecessaryForManeuver:(id)arg0 travelEstimates:(id)arg1 ;
-(void)_updateNavigationAlert:(id)arg0 ;
-(void)bannerDidAppearWithIdentifier:(id)arg0 ;
-(void)bannerDidDisappearWithIdentifier:(id)arg0 ;
-(void)bannerTappedWithIdentifier:(id)arg0 ;
-(void)clientNavigationAlertDidAppear:(id)arg0 ;
-(void)clientNavigationAlertDidDisappear:(id)arg0 context:(NSUInteger)arg1 ;
-(void)clientNavigationAlertWillAppear:(id)arg0 ;
-(void)clientNavigationAlertWillDisappear:(id)arg0 context:(NSUInteger)arg1 ;
-(void)clientPanBeganWithDirection:(NSInteger)arg0 ;
-(void)clientPanEndedWithDirection:(NSInteger)arg0 ;
-(void)clientPanGestureBegan;
-(void)clientPanGestureEndedWithVelocity:(struct CGPoint )arg0 ;
-(void)clientPanGestureWithDeltaPoint:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(void)clientPanViewDidAppear;
-(void)clientPanViewDidDisappear;
-(void)clientPanViewWillDisappear;
-(void)clientPanWithDirection:(NSInteger)arg0 ;
-(void)clientTripAlreadyStartedException;
-(void)clientTripCanceledByExternalNavigation;
-(void)dismissNavigationAlertAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPanningInterfaceAnimated:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)hideTripPreviews;
-(void)presentNavigationAlert:(id)arg0 animated:(BOOL)arg1 ;
-(void)previewTripIdentifier:(id)arg0 usingRouteIdentifier:(id)arg1 ;
-(void)showPanningInterfaceAnimated:(BOOL)arg0 ;
-(void)showRouteChoicesPreviewForTrip:(id)arg0 textConfiguration:(id)arg1 ;
-(void)showTripPreviews:(id)arg0 selectedTrip:(id)arg1 textConfiguration:(id)arg2 ;
-(void)showTripPreviews:(id)arg0 textConfiguration:(id)arg1 ;
-(void)startTripIdentifier:(id)arg0 usingRouteIdentifier:(id)arg1 ;
-(void)updateTravelEstimates:(id)arg0 forTrip:(id)arg1 ;
-(void)updateTravelEstimates:(id)arg0 forTrip:(id)arg1 withTimeRemainingColor:(NSUInteger)arg2 ;


@end


#endif