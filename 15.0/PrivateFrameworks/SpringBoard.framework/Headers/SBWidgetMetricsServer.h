// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWIDGETMETRICSSERVER_H
#define SBWIDGETMETRICSSERVER_H

@class FBServiceClientAuthenticator, NSMutableArray, NSString, BSServiceConnectionListener;
@protocol BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface, SBSWidgetMetricsProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBWidgetMetricsServer : NSObject <BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface>



@property (readonly, nonatomic) FBServiceClientAuthenticator *authenticator; // ivar: _authenticator
@property (readonly, copy, nonatomic) NSMutableArray *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly, weak, nonatomic) NSObject<SBSWidgetMetricsProviding> *lockScreenMetricsProvider; // ivar: _lockScreenMetricsProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<SBSWidgetMetricsProviding> *systemMetricsProvider; // ivar: _systemMetricsProvider


-(id)_metricsProviderForWidget:(id)arg0 ;
-(id)init;
-(id)initWithSystemMetricsProvider:(id)arg0 lockScreenMetricsProvider:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg0 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg0 displayContext:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)systemMetricsForWidget:(id)arg0 ;
-(void)dealloc;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif