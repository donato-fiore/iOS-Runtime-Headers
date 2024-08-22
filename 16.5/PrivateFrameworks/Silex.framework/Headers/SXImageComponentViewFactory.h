// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXIMAGECOMPONENTVIEWFACTORY_H
#define SXIMAGECOMPONENTVIEWFACTORY_H

@protocol SXAnalyticsReportingProvider, SXAppStateMonitor, SXImageViewFactory, SXMediaSharingPolicyProvider;


#import "SXComponentViewFactory.h"

@interface SXImageComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReportingProvider:(id)arg4 appStateMonitor:(id)arg5 imageViewFactory:(id)arg6 mediaSharingPolicyProvider:(id)arg7 ;
-(id)type;
-(int)role;


@end


#endif