// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXEMBEDVIDEOCOMPONENTVIEWFACTORY_H
#define SXEMBEDVIDEOCOMPONENTVIEWFACTORY_H

@class WKWebsiteDataStore;
@protocol SXComponentActionHandler, SXAnalyticsReportingProvider, SXAppStateMonitor, SXProxyAuthenticationHandler, SXSceneStateMonitor;


#import "SXComponentViewFactory.h"

@interface SXEmbedVideoComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) WKWebsiteDataStore *dataStore; // ivar: _dataStore
@property (readonly, nonatomic) NSObject<SXProxyAuthenticationHandler> *proxyAuthenticationHandler; // ivar: _proxyAuthenticationHandler
@property (readonly, nonatomic) NSObject<SXSceneStateMonitor> *sceneStateMonitor; // ivar: _sceneStateMonitor


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReportingProvider:(id)arg4 appStateMonitor:(id)arg5 sceneStateMonitor:(id)arg6 actionHandler:(id)arg7 websiteDataStore:(id)arg8 proxyAuthenticationHandler:(id)arg9 ;
-(id)type;
-(int)role;


@end


#endif