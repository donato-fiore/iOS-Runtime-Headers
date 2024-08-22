// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDLOCATIONDATACOLLECTOR_H
#define HDLOCATIONDATACOLLECTOR_H

@class NSUUID, HKWorkoutRoute, HDAssertion, NSString, CMElevation;
@protocol HDLocationManagerObserver, HDSampleSaving, OS_dispatch_queue, HDLocationEventDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDLocationDataCollector : NSObject <HDLocationManagerObserver>

 {
    HDProfile *_profile;
    NSUUID *_workoutUUID;
    NSUInteger _activityType;
    CGFloat _desiredAccuracy;
    id<HDSampleSaving> *_sampleSavingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _state;
    int _lastStatus;
    HKWorkoutRoute *_route;
    BOOL _didSaveLocationData;
    CGFloat _lastPausedTime;
    NSUInteger _elevationGain;
    HDAssertion *_locationUpdatingAssertion;
    NSUInteger _validLocationsCount;
    NSUInteger _skippedLocationsCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDLocationEventDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CMElevation *elevation; // ivar: _elevation
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger state;
@property (readonly) Class superclass;


-(BOOL)isElevationAvailable;
-(BOOL)locationServicesEnabled;
-(id)createCMElevation;
-(id)initWithProfile:(id)arg0 sampleSavingDelegate:(id)arg1 configuration:(id)arg2 workoutUUID:(id)arg3 ;
-(id)workoutLocationManager;
-(int)authorizationStatus;
-(void)_queue_savedLocationData;
-(void)dealloc;
-(void)healthLocationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)healthLocationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)healthLocationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)pauseUpdates;
-(void)resumeUpdates;
-(void)startUpdates;
-(void)stopUpdates;
-(void)stopUpdatesAndDiscardData;


@end


#endif