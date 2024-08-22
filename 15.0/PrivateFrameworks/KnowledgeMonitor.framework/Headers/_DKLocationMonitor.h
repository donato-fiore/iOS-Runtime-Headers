// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKLOCATIONMONITOR_H
#define _DKLOCATIONMONITOR_H

@class DKMonitor, CLLocationManager, RTRoutineManager, NSString;
@protocol CLLocationManagerDelegate;



@interface _DKLocationMonitor : DKMonitor <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    BOOL _locationEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)entitlements;
+(id)eventStream;
-(NSUInteger)placeTypeFromType:(NSUInteger)arg0 ;
-(NSUInteger)userSpecificPlaceTypeFromType:(NSUInteger)arg0 ;
-(id)_locationFromVisit:(id)arg0 ;
-(id)init;
-(void)_handleVisit:(id)arg0 ;
-(void)locationManager:(id)arg0 didVisit:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif