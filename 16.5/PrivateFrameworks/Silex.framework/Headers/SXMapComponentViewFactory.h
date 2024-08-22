// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMAPCOMPONENTVIEWFACTORY_H
#define SXMAPCOMPONENTVIEWFACTORY_H

@protocol SXAnalyticsReportingProvider, SXAppStateMonitor, SXDocumentTitleProviding;


#import "SXComponentViewFactory.h"

@interface SXMapComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<SXDocumentTitleProviding> *documentTitleProvider; // ivar: _documentTitleProvider


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReportingProvider:(id)arg4 appStateMonitor:(id)arg5 documentTitleProvider:(id)arg6 ;
-(id)type;
-(int)role;


@end


#endif