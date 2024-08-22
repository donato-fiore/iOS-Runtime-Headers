// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSREALROUTINECONNECTOR_H
#define MAPSSUGGESTIONSREALROUTINECONNECTOR_H

@class RTRoutineManager, NSString;
@protocol MapsSuggestionsRoutineConnector;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRealRoutineConnector : NSObject <MapsSuggestionsRoutineConnector>

 {
    RTRoutineManager *_routineManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)clearAllVehicleEventsWithHandler:(id)arg0 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationsOfInterestOfType:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationsOfInterestWithinDistance:(CGFloat)arg0 ofLocation:(id)arg1 withHandler:(id)arg2 ;
-(void)fetchNextPLOIsFromLocation:(id)arg0 startDate:(id)arg1 timeInterval:(CGFloat)arg2 withHandler:(id)arg3 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg0 onDate:(id)arg1 withHandler:(id)arg2 ;
-(void)fetchRoutineModeFromLocation:(id)arg0 withHandler:(id)arg1 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)startMonitoringVehicleEventsWithHandler:(id)arg0 ;
-(void)stopMonitoringVehicleEvents;


@end


#endif