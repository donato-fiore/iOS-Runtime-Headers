// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSUNTILEXITLOCATIONLIFETIMEMONITOR_H
#define DNDSUNTILEXITLOCATIONLIFETIMEMONITOR_H

@class CLRegion, NSArray, NSString;
@protocol DNDSLifetimeMonitor, CLLocationManagerDelegate, DNDSBackingStore, DNDSAggregateLocationLifetimeMonitor, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

#import <Foundation/Foundation.h>

#import "DNDSUntilExitRegionStore.h"

@interface DNDSUntilExitLocationLifetimeMonitor : NSObject <DNDSLifetimeMonitor, CLLocationManagerDelegate>

 {
    CLRegion *_currentRegion;
    BOOL _regionEntered;
    BOOL _hasActiveLifetimes;
    DNDSUntilExitRegionStore *_store;
    id<DNDSBackingStore> *_backingStore;
}


@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs; // ivar: _activeLifetimeAssertionUUIDs
@property (weak, nonatomic) NSObject<DNDSAggregateLocationLifetimeMonitor> *aggregateMonitor; // ivar: _aggregateMonitor
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCurrentRegion;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_saveDataToBackingStoreWithError:(*id)arg0 ;
-(id)initWithAggregateMonitor:(id)arg0 ;
-(void)_loadDataFromBackingStore;
-(void)_queue_beginMonitoringCurrentLocation;
-(void)_queue_geofenceLocation:(id)arg0 ;
-(void)_queue_geofenceRegion:(id)arg0 ;
-(void)_queue_refreshMonitor;
-(void)_queue_sendExpiryEventForAllLocationAssertions;
-(void)_queue_stopMonitoringCurrentLocation;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)refreshMonitorForDate:(id)arg0 ;


@end


#endif