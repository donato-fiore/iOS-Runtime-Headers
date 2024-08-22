// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAANALYTICSMANAGER_H
#define TAANALYTICSMANAGER_H

@class NSString;
@protocol TATrackingAvoidanceServiceObserver, TAPersistenceManagerObserver;

#import <Foundation/Foundation.h>

#import "TAAnalyticsManagerSettings.h"

@interface TAAnalyticsManager : NSObject <TATrackingAvoidanceServiceObserver, TAPersistenceManagerObserver>

 {
    TAAnalyticsManagerSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_convertDetection:(id)arg0 service:(id)arg1 ;
+(id)_convertScanRequest:(id)arg0 service:(id)arg1 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)_submitEvent:(id)arg0 content:(id)arg1 ;
-(void)didReadFromURL:(id)arg0 bytes:(NSUInteger)arg1 ;
-(void)didWriteToURL:(id)arg0 bytes:(NSUInteger)arg1 ;
-(void)trackingAvoidanceService:(id)arg0 didFindSuspiciousDevices:(id)arg1 ;
-(void)trackingAvoidanceService:(id)arg0 didStageSuspiciousDevices:(id)arg1 ;
-(void)trackingAvoidanceService:(id)arg0 didUpdateSuspiciousDevices:(id)arg1 ;
-(void)trackingAvoidanceService:(id)arg0 requestingAdditionalInformation:(id)arg1 ;


@end


#endif