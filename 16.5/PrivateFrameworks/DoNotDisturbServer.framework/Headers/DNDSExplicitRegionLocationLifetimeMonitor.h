// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSEXPLICITREGIONLOCATIONLIFETIMEMONITOR_H
#define DNDSEXPLICITREGIONLOCATIONLIFETIMEMONITOR_H

@class NSMutableSet, NSArray, NSString;
@protocol DNDSLifetimeMonitor, CLLocationManagerDelegate, DNDSBackingStore, DNDSAggregateLocationLifetimeMonitor, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

#import <Foundation/Foundation.h>

#import "DNDSLocationTriggerConfiguration.h"
#import "DNDSExplicitRegionStore.h"

@interface DNDSExplicitRegionLocationLifetimeMonitor : NSObject <DNDSLifetimeMonitor, CLLocationManagerDelegate>

 {
    DNDSLocationTriggerConfiguration *_currentConfiguration;
    NSMutableSet *_enteredRegionIdentifiers;
    NSMutableSet *_enteredRegionIdentifiersPendingExit;
    DNDSExplicitRegionStore *_store;
    id<DNDSBackingStore> *_backingStore;
}


@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs; // ivar: _activeLifetimeAssertionUUIDs
@property (weak, nonatomic) NSObject<DNDSAggregateLocationLifetimeMonitor> *aggregateMonitor; // ivar: _aggregateMonitor
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_saveDataToBackingStoreWithError:(*id)arg0 ;
-(id)_queue_locationMonitorClientIdentifierForModeIdentifier:(id)arg0 region:(id)arg1 ;
-(id)initWithAggregateMonitor:(id)arg0 ;
-(void)_loadDataFromBackingStore;
-(void)_queue_invalidateAssertionOnExitFromRegion:(id)arg0 ;
-(void)_queue_refreshMonitor;
-(void)_queue_resolveEnteredRegionIdentifiersWithAssertionRegionIdentifiers:(id)arg0 ;
-(void)_queue_startMonitoringForRegion:(id)arg0 ;
-(void)_queue_stopMonitoringForRegion:(id)arg0 ;
-(void)_queue_takeAssertionOnEntryIntoRegion:(id)arg0 ;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)refreshMonitorForDate:(id)arg0 ;


@end


#endif