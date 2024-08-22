// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUFLIGHTVIEW_H
#define FUFLIGHTVIEW_H

@class UIView, NSMutableArray, UIPageViewController, UIScrollView, NSLayoutConstraint, NSArray, UIVisualEffectView, TLKProminenceView, NSString, MKMapView, UIPageControl;
@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource, FUFlightInfoViewProtocol, FUFlightViewDelegate;


#import "FUPlaneTrackerAnnotationView.h"
#import "FUFLightTrack.h"

@interface FUFlightView : UIView <UIPageViewControllerDelegate, UIPageViewControllerDataSource, FUFlightInfoViewProtocol>

 {
    FUPlaneTrackerAnnotationView *_planeTracker;
    NSMutableArray *_tracks;
    FUFLightTrack *_currentTrack;
    NSMutableArray *_controllers;
    UIPageViewController *_pageViewController;
    UIScrollView *_pageViewContainer;
    BOOL _spotlightMode;
    BOOL _landscapeMode;
    NSLayoutConstraint *_pageControllerHeightConstraint;
    NSArray *_allLegs;
}


@property (weak, nonatomic) UIVisualEffectView *backBlurView; // ivar: _backBlurView
@property (weak, nonatomic) TLKProminenceView *borderLineViewLandscape; // ivar: _borderLineViewLandscape
@property (weak, nonatomic) TLKProminenceView *borderLineViewPortrait; // ivar: _borderLineViewPortrait
@property (retain, nonatomic) NSLayoutConstraint *bottomMapConstraint; // ivar: _bottomMapConstraint
@property (nonatomic) NSInteger currentFocus; // ivar: _currentFocus
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<FUFlightViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (retain) UIView *errorView; // ivar: _errorView
@property (retain, nonatomic) NSArray *flights; // ivar: _flights
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightCurrentFlightLeg; // ivar: _highlightCurrentFlightLeg
@property (nonatomic) BOOL ignoreMapUpdate; // ivar: _ignoreMapUpdate
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint1; // ivar: _lanscapeConstraint1
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint2; // ivar: _lanscapeConstraint2
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint3; // ivar: _lanscapeConstraint3
@property (retain, nonatomic) NSLayoutConstraint *leadingMapConstraint; // ivar: _leadingMapConstraint
@property (retain) UIView *loadingView; // ivar: _loadingView
@property (nonatomic) UIEdgeInsets mapInsets; // ivar: _mapInsets
@property (weak, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (weak, nonatomic) NSLayoutConstraint *pageContainerHeightConstraint; // ivar: _pageContainerHeightConstraint
@property (weak, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (weak, nonatomic) NSLayoutConstraint *portraitConstraint1; // ivar: _portraitConstraint1
@property (nonatomic) NSInteger selectedFlight; // ivar: _selectedFlight
@property (nonatomic) NSInteger selectedLeg; // ivar: _selectedLeg
@property (nonatomic) BOOL showInfoPanel; // ivar: _showInfoPanel
@property (readonly) Class superclass;


-(BOOL)hasFollowupContent:(id)arg0 ;
-(BOOL)landscapeMode;
-(BOOL)landscapeModeForTraits:(id)arg0 ;
-(BOOL)mapOnly;
-(BOOL)preservesSuperviewLayoutMargins;
-(NSUInteger)absoluteLegIndex;
-(id)allLegs;
-(id)arrivalCamera;
-(id)currentFlight;
-(id)currentLeg;
-(id)departureCamera;
-(id)flightCamera;
-(id)flightForLeg:(id)arg0 ;
-(id)infoViewControllerCreate;
-(id)mapView:(id)arg0 rendererForOverlay:(id)arg1 ;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)addTrack:(id)arg0 ;
-(void)awakeFromNib;
-(void)changeCurrentPage:(id)arg0 ;
-(void)cleanupView;
-(void)didMoveToWindow;
-(void)fitMap:(BOOL)arg0 ;
-(void)flightInfoView:(id)arg0 didUpdateFocus:(NSInteger)arg1 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)mapView:(id)arg0 regionDidChangeAnimated:(BOOL)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg0 fullyRendered:(BOOL)arg1 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)removeMapBackground;
-(void)setAbsoluteIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setupStyles;
-(void)showError;
-(void)showInfo;
-(void)showLoading;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBorderLines;
-(void)updateConstraints;
-(void)updateMapAppearance;
-(void)updateMapArcs;
-(void)updateMapCamera;
-(void)updateOrientationConstraints;
-(void)updatePageControllerScrolling;


@end


#endif