// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENREGIONMONITORCORELOCATIONDATASOURCE_H
#define ENREGIONMONITORCORELOCATIONDATASOURCE_H

@class ENRegionVisit, NSString, CLLocationManager, RTRoutineManager;
@protocol ENRegionMonitorDataSource, CLLocationManagerDelegate, ENRegionMonitorSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENRegionMonitorCoreLocationDataSource : NSObject <ENRegionMonitorDataSource, CLLocationManagerDelegate>



@property (copy, nonatomic) ENRegionVisit *cachedRegionVisit; // ivar: _cachedRegionVisit
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) RTRoutineManager *routineManager; // ivar: _routineManager
@property (readonly) Class superclass;


-(BOOL)updateRegionAllowed;
-(id)currentRegionVisit;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 routineManager:(id)arg1 ;
-(void)_processLocation:(id)arg0 ;
-(void)_processLocation:(id)arg0 locationOfInterest:(id)arg1 ;
-(void)_processLocation:(id)arg0 locationsOfInterest:(id)arg1 ;
-(void)_processVisit:(id)arg0 ;
-(void)_setup;
-(void)_updateRegionVisit:(id)arg0 ;
-(void)_updatedRegion;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 didVisit:(id)arg1 ;
-(void)processLocation:(id)arg0 locationOfInterest:(id)arg1 ;
-(void)processLocation:(id)arg0 locationsOfInterest:(id)arg1 ;
-(void)setup;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)updateRegion;
-(void)updateRegionVisit:(id)arg0 ;


@end


#endif