// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDAPPMONITOR_H
#define FPDAPPMONITOR_H

@class NSDictionary, FPAppRegistry;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDServer.h"

@interface FPDAppMonitor : NSObject {
    NSDictionary *_defaultProviderByAppBundleID;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _didChangeProvidersToken;
    int _didChangeDefaultProviderToken;
}


@property (readonly, copy, nonatomic) FPAppRegistry *appRegistry; // ivar: _appRegistry
@property (getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (readonly, weak, nonatomic) FPDServer *server; // ivar: _server


-(id)_appMetadataIfMonitoringIsNeeded:(id)arg0 ;
-(id)_updateDefaultProviderDomainID;
-(id)initWithServer:(id)arg0 ;
-(int)_registerForNotification:(id)arg0 handler:(id)arg1 ;
-(void)_didChangeDefaultSaveLocationInUserDefaults;
-(void)_didChangeListOfProviders;
-(void)_didChangeLocale:(id)arg0 ;
-(void)_didRegisterApps:(id)arg0 ;
-(void)_didUnregisterApps:(id)arg0 ;
-(void)_populateListOfMonitoredApps;
-(void)_updateDefaultProviderByAppBundleID;
-(void)dumpStateTo:(id)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif