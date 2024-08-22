// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCOUNTRYMONITORCONTROLSERVER_H
#define HDCOUNTRYMONITORCONTROLSERVER_H

@class NSString;
@protocol HKCountryMonitorControlServer;


#import "HDStandardTaskServer.h"
#import "HDPeriodicCountryMonitor.h"
#import "HDOTAFeatureAvailabilityManager.h"

@interface HDCountryMonitorControlServer : HDStandardTaskServer <HKCountryMonitorControlServer>

 {
    HDPeriodicCountryMonitor *_countryMonitor;
    HDOTAFeatureAvailabilityManager *_OTAFeatureAvailabilityManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id)arg0 ;


@end


#endif