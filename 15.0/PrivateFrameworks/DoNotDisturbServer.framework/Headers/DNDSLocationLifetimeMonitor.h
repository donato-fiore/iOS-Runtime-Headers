// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSLOCATIONLIFETIMEMONITOR_H
#define DNDSLOCATIONLIFETIMEMONITOR_H

@class NSArray, NSString, CLLocationManager;
@protocol CLLocationManagerDelegate, DNDSAggregateLocationLifetimeMonitor, DNDSMeDeviceServiceListener, DNDSLifetimeMonitor, DNDSLocationLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DNDSMeDeviceService.h"
#import "DNDSUntilExitLocationLifetimeMonitor.h"
#import "DNDSExplicitRegionLocationLifetimeMonitor.h"

@interface DNDSLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSAggregateLocationLifetimeMonitor, DNDSMeDeviceServiceListener, DNDSLifetimeMonitor>

 {
    DNDSMeDeviceService *_meDeviceService;
    DNDSUntilExitLocationLifetimeMonitor *_untilExitMonitor;
    DNDSExplicitRegionLocationLifetimeMonitor *_explicitRegionMonitor;
    NSArray *_children;
}


@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (readonly, nonatomic) NSUInteger availableRegions;
@property (weak, nonatomic) NSObject<DNDSLocationLifetimeMonitorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithMeDeviceService:(id)arg0 ;
-(void)_queue_refreshMonitorForDate:(id)arg0 ;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)meDeviceService:(id)arg0 didReceiveMeDeviceStateUpdate:(id)arg1 ;
-(void)refreshMonitorForDate:(id)arg0 ;


@end


#endif