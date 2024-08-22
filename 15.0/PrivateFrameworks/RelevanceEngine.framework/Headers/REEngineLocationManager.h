// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REENGINELOCATIONMANAGER_H
#define REENGINELOCATIONMANAGER_H

@class CLLocation;
@protocol REEngineLocationManagerProperties;


#import "RERelevanceEngineSubsystem.h"
#import "RELocationManager.h"
#import "REObserverStore.h"

@interface REEngineLocationManager : RERelevanceEngineSubsystem <REEngineLocationManagerProperties>

 {
    RELocationManager *_locationManager;
    RELocationManager *_simulatedLocationManager;
    REObserverStore *_observers;
    BOOL _monitoringLocation;
}


@property (retain, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (retain) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) RELocationManager *locationManager;
@property (readonly, nonatomic) BOOL monitoringLocation;


-(BOOL)_wantsLocation;
-(id)initWithRelevanceEngine:(id)arg0 locationManager:(id)arg1 ;
-(void)_beginMonitoringLocationForManager:(id)arg0 ;
-(void)_beginTraining;
-(void)_endTraining;
-(void)_handleLocationUpdate:(id)arg0 ;
-(void)_stopMonitoringLocationForManager:(id)arg0 ;
-(void)_updateLocationStatus;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)removeObserver:(id)arg0 ;
-(void)resume;


@end


#endif