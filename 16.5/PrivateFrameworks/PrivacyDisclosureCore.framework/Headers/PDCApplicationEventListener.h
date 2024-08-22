// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCAPPLICATIONEVENTLISTENER_H
#define PDCAPPLICATIONEVENTLISTENER_H

@class NSString;
@protocol PDCApplicationEnvironmentMonitoring, PDCConsentStore, PDCApplicationEnvironment, PDCApplicationEnvironmentMonitoringHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDCApplicationEventListener : NSObject <PDCApplicationEnvironmentMonitoring>

 {
    id<PDCConsentStore> *_consentStore;
    id<PDCApplicationEnvironment> *_applicationEnvironment;
    id<PDCApplicationEnvironmentMonitoringHandle> *_environmentMonitoringHandle;
    NSObject<OS_dispatch_queue> *_queue;
    atomic_flag _activated;
}


@property BOOL cancelled; // ivar: _cancelled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)initWithConsentStore:(id)arg0 applicationEnvironment:(id)arg1 targetQueue:(id)arg2 ;
-(void)activate;
-(void)applicationDidUninstall:(id)arg0 ;
-(void)checkForStaleConsentRecords;
-(void)invalidate;


@end


#endif