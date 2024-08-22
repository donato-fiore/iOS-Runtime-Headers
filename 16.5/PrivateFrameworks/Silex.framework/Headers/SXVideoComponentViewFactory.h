// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIDEOCOMPONENTVIEWFACTORY_H
#define SXVIDEOCOMPONENTVIEWFACTORY_H

@protocol SXAnalyticsReportingProvider, SXAppStateMonitor, SXBookmarkManager, SXVideoAdProviderFactory, SWReachabilityProvider, SXResourceDataSourceProvider, SXSceneStateMonitor, SXScrollObserverManager;


#import "SXComponentViewFactory.h"
#import "SXVideoPlayerViewControllerManager.h"

@interface SXVideoComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<SXBookmarkManager> *bookmarkManager; // ivar: _bookmarkManager
@property (readonly, nonatomic) NSObject<SXVideoAdProviderFactory> *prerollAdFactory; // ivar: _prerollAdFactory
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) NSObject<SXResourceDataSourceProvider> *resourceDataSourceProvider; // ivar: _resourceDataSourceProvider
@property (readonly, nonatomic) NSObject<SXSceneStateMonitor> *sceneStateMonitor; // ivar: _sceneStateMonitor
@property (readonly, nonatomic) NSObject<SXScrollObserverManager> *scrollObserverManager; // ivar: _scrollObserverManager
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // ivar: _videoPlayerViewControllerManager


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReportingProvider:(id)arg4 appStateMonitor:(id)arg5 sceneStateMonitor:(id)arg6 resourceDataSourceProvider:(id)arg7 reachabilityProvider:(id)arg8 scrollObserverManager:(id)arg9 videoPlayerViewControllerManager:(id)arg10 bookmarkManager:(id)arg11 prerollAdFactory:(id)arg12 ;
-(id)type;
-(int)role;


@end


#endif