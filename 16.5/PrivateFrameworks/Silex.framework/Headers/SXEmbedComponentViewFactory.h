// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXEMBEDCOMPONENTVIEWFACTORY_H
#define SXEMBEDCOMPONENTVIEWFACTORY_H

@class WKWebsiteDataStore;
@protocol SXComponentActionHandler, SXAnalyticsReportingProvider, SXEmbedDataProvider, SXLayoutInvalidator, SXProxyAuthenticationHandler, SWReachabilityProvider, SXSceneStateMonitor;


#import "SXComponentViewFactory.h"
#import "SXRelatedWebViewCache.h"

@interface SXEmbedComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) WKWebsiteDataStore *dataStore; // ivar: _dataStore
@property (readonly, nonatomic) NSObject<SXEmbedDataProvider> *embedDataProvider; // ivar: _embedDataProvider
@property (readonly, nonatomic) NSObject<SXLayoutInvalidator> *layoutInvalidator; // ivar: _layoutInvalidator
@property (readonly, nonatomic) NSObject<SXProxyAuthenticationHandler> *proxyAuthenticationHandler; // ivar: _proxyAuthenticationHandler
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) SXRelatedWebViewCache *relatedWebViewCache; // ivar: _relatedWebViewCache
@property (readonly, nonatomic) NSObject<SXSceneStateMonitor> *sceneStateMonitor; // ivar: _sceneStateMonitor


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 reachabilityProvider:(id)arg4 embedDataProvider:(id)arg5 actionHandler:(id)arg6 layoutInvalidator:(id)arg7 websiteDataStore:(id)arg8 relatedWebViewCache:(id)arg9 proxyAuthenticationHandler:(id)arg10 sceneStateMonitor:(id)arg11 analyticsReportingProvider:(id)arg12 ;
-(id)type;
-(int)role;


@end


#endif