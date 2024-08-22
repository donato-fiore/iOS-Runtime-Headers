// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APCARPLAYPOLICYMONITOR_H
#define APCARPLAYPOLICYMONITOR_H

@class CRVehiclePolicyMonitor, NSString;
@protocol CRVehiclePolicyMonitoring, OS_dispatch_queue, APCarPlayPolicyMonitorDelegate;

#import <Foundation/Foundation.h>


@interface APCarPlayPolicyMonitor : NSObject <CRVehiclePolicyMonitoring>

 {
    NSObject<OS_dispatch_queue> *_queue;
    *OpaqueFigCFWeakReferenceHolder _weakEndpoint;
    *OpaqueFigEndpoint _observedEndpoint;
    CRVehiclePolicyMonitor *_monitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<APCarPlayPolicyMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEndpoint:(struct OpaqueFigEndpoint *)arg0 ;
-(void)dealloc;
-(void)endpointAuthenticationSucceeded;
-(void)willDisableVehicleTrackedByMonitor:(id)arg0 ;
-(void)willEnableVehicleTrackedByMonitor:(id)arg0 ;


@end


#endif