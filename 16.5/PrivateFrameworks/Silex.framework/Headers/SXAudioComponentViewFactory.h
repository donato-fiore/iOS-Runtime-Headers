// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXAUDIOCOMPONENTVIEWFACTORY_H
#define SXAUDIOCOMPONENTVIEWFACTORY_H

@protocol SXAnalyticsReportingProvider, SXAppStateMonitor, SXHost, SXResourceDataSourceProvider;


#import "SXComponentViewFactory.h"

@interface SXAudioComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly, nonatomic) NSObject<SXResourceDataSourceProvider> *resourceDataSourceProvider; // ivar: _resourceDataSourceProvider


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReportingProvider:(id)arg4 appStateMonitor:(id)arg5 resourceDataSourceProvider:(id)arg6 host:(id)arg7 ;
-(id)type;
-(int)role;


@end


#endif