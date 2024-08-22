// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXWEBCONTENTCOMPONENTVIEW_H
#define SXWEBCONTENTCOMPONENTVIEW_H

@class SWContainerViewController, NSString, UILabel, NFPendingPromise, UIActivityIndicatorView, NFStateMachine, UITapGestureRecognizer;
@protocol SXViewportChangeListener, SWReachabilityObserver, SXAnalyticsReporting, SXWebContentConfigurationProvider, SXWebContentDataSourceProviding, SXLayoutInvalidator, SWLoadingPolicyProvider, SWNavigationManager, SWReachabilityProvider, SXResourceDataSource;


#import "SXComponentView.h"
#import "SXWebContentComponentExposureEvent.h"
#import "SXComponentExposureMonitor.h"
#import "SXWebContentComponentInteractionManager.h"

@interface SXWebContentComponentView : SXComponentView <SXViewportChangeListener, SWReachabilityObserver>



@property (readonly, nonatomic) NSObject<SXAnalyticsReporting> *analyticsReporting; // ivar: _analyticsReporting
@property (retain, nonatomic) SXWebContentComponentExposureEvent *componentExposureEvent; // ivar: _componentExposureEvent
@property (readonly, nonatomic) SXComponentExposureMonitor *componentExposureMonitor; // ivar: _componentExposureMonitor
@property (readonly, nonatomic) NSObject<SXWebContentConfigurationProvider> *configurationProvider; // ivar: _configurationProvider
@property (readonly, nonatomic) SWContainerViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) NSObject<SXWebContentDataSourceProviding> *dataSourceProvider; // ivar: _dataSourceProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *errorLabel; // ivar: _errorLabel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXWebContentComponentInteractionManager *interactionManager; // ivar: _interactionManager
@property (retain, nonatomic) NFPendingPromise *invalidationPromise; // ivar: _invalidationPromise
@property (readonly, nonatomic) NSObject<SXLayoutInvalidator> *layoutInvalidator; // ivar: _layoutInvalidator
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (readonly, nonatomic) NSObject<SWLoadingPolicyProvider> *loadingPolicyProvider; // ivar: _loadingPolicyProvider
@property (readonly, nonatomic) NSObject<SWNavigationManager> *navigationManager; // ivar: _navigationManager
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) NSObject<SXResourceDataSource> *resourceDataSource; // ivar: _resourceDataSource
@property (readonly, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)useLightForegroundColor;
-(id)createDisabledState;
-(id)createErrorState;
-(id)createLoadingState;
-(id)createPresentationState;
-(id)createStateMachine;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 containerViewController:(id)arg4 configurationProvider:(id)arg5 navigationManager:(id)arg6 analyticsReporting:(id)arg7 componentExposureMonitor:(id)arg8 interactionManagerFactory:(id)arg9 reachabilityProvider:(id)arg10 resourceDataSource:(id)arg11 loadingPolicyProvider:(id)arg12 dataSourceProvider:(id)arg13 layoutInvalidator:(id)arg14 ;
-(void)configure;
-(void)configureComponentExposureMonitor;
-(void)configureConfigurationProvider;
-(void)configureErrorProvider;
-(void)configurePresentationManager;
-(void)configureViewController;
-(void)handleTap:(id)arg0 ;
-(void)layout;
-(void)layoutErrorView;
-(void)layoutLoadingIndicator;
-(void)layoutSubviews;
-(void)layoutWebView;
-(void)loadComponent:(id)arg0 ;
-(void)loadWebContent;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)presentWithHeight:(CGFloat)arg0 ;
-(void)reachabilityChanged:(BOOL)arg0 ;
-(void)reloadWebContent;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;


@end


#endif