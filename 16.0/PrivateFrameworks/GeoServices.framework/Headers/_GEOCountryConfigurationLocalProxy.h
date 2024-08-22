// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOCOUNTRYCONFIGURATIONLOCALPROXY_H
#define _GEOCOUNTRYCONFIGURATIONLOCALPROXY_H

@class CoreTelephonyClient, geo_isolater, CTXPCServiceSubscriptionContext, NSString;
@protocol CoreTelephonyClientDataDelegate, _GEOCountryConfigurationServerProxy, OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate, OS_dispatch_source, GEOCancellable;

#import <Foundation/Foundation.h>


@interface _GEOCountryConfigurationLocalProxy : NSObject <CoreTelephonyClientDataDelegate, _GEOCountryConfigurationServerProxy>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
    id *_countryCodeOverrideChangeListener;
    CoreTelephonyClient *_telephonyClient;
    *__CTServerConnection _telephonyServerConnection;
    geo_isolater *_currentDataContextIsolation;
    BOOL _loadedCurrentDataContext;
    CTXPCServiceSubscriptionContext *_currentDataContext;
    id<GEOCancellable> *_geoIPLookupTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkThrottlerOrScheduleUpdate:(*id)arg0 ;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)_determineCurrentCountryCode:(id)arg0 ;
-(void)_determineGeoIPCountryCode:(id)arg0 ;
-(void)_postNotificationsForOldInfo:(id)arg0 newInfo:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_scheduleUpdate:(CGFloat)arg0 ;
-(void)_updateCountryCodeWithCallbackQueue:(id)arg0 callback:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dealloc;
-(void)servingNetworkChanged:(id)arg0 ;
-(void)updateCountryCodeWithCallbackQueue:(id)arg0 callback:(id)arg1 ;


@end


#endif