// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSTRIPGALLERYCOMPONENTVIEWFACTORY_H
#define SXSTRIPGALLERYCOMPONENTVIEWFACTORY_H

@protocol SXAnalyticsReportingProvider, SXAppStateMonitor, SXFullscreenCanvasControllerFactory, SXImageViewFactory, SXMediaSharingPolicyProvider;


#import "SXComponentViewFactory.h"

@interface SXStripGalleryComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<SXFullscreenCanvasControllerFactory> *canvasControllerFactory; // ivar: _canvasControllerFactory
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReportingProvider:(id)arg4 appStateMonitor:(id)arg5 mediaSharingPolicyProvider:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 ;
-(id)type;
-(int)role;


@end


#endif