// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXWEBCONTENTCOMPONENTVIEWFACTORY_H
#define SXWEBCONTENTCOMPONENTVIEWFACTORY_H

@class SWContainerViewController;
@protocol SXAnalyticsReportingProvider, SXWebContentConfigurationProvider, SXWebContentComponentContentRuleProvider, SXWebContentDataSourceProviding, SXWebContentComponentDeveloperSettingsProvider, SXWebContentComponentInteractionManagerFactory, SXLayoutInvalidator, SWLoadingPolicyProvider, SWNavigationManager, SWReachabilityProvider, TFResolver, SXResourceDataSourceProvider;


#import "SXComponentViewFactory.h"
#import "SXComponentExposureMonitor.h"

@interface SXWebContentComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) SXComponentExposureMonitor *componentExposureMonitor; // ivar: _componentExposureMonitor
@property (readonly, nonatomic) NSObject<SXWebContentConfigurationProvider> *configurationProvider; // ivar: _configurationProvider
@property (readonly, nonatomic) SWContainerViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) NSObject<SXWebContentComponentContentRuleProvider> *contentRuleProvider; // ivar: _contentRuleProvider
@property (readonly, nonatomic) NSObject<SXWebContentDataSourceProviding> *dataSourceProvider; // ivar: _dataSourceProvider
@property (readonly, nonatomic) NSObject<SXWebContentComponentDeveloperSettingsProvider> *developerSettingsProvider; // ivar: _developerSettingsProvider
@property (readonly, nonatomic) NSObject<SXWebContentComponentInteractionManagerFactory> *interactionManagerFactory; // ivar: _interactionManagerFactory
@property (readonly, nonatomic) NSObject<SXLayoutInvalidator> *layoutInvalidator; // ivar: _layoutInvalidator
@property (readonly, nonatomic) NSObject<SWLoadingPolicyProvider> *loadingPolicyProvider; // ivar: _loadingPolicyProvider
@property (readonly, nonatomic) NSObject<SWNavigationManager> *navigationManager; // ivar: _navigationManager
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver
@property (readonly, nonatomic) NSObject<SXResourceDataSourceProvider> *resourceDataSourceProvider; // ivar: _resourceDataSourceProvider


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithResolver:(id)arg0 DOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 containerViewController:(id)arg5 configurationProvider:(id)arg6 navigationManager:(id)arg7 analyticsReportingProvider:(id)arg8 componentExposureMonitor:(id)arg9 interactionManagerFactory:(id)arg10 reachabilityProvider:(id)arg11 resourceDataSourceProvider:(id)arg12 loadingPolicyProvider:(id)arg13 dataSourceProvider:(id)arg14 layoutInvalidator:(id)arg15 contentRuleProvider:(id)arg16 developerSettingsProvider:(id)arg17 ;
-(id)type;
-(int)role;


@end


#endif