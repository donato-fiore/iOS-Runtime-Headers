// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOCATIONMANAGERSINGLEUPDATER_H
#define MKLOCATIONMANAGERSINGLEUPDATER_H

@class NSTimer, NSString;
@protocol MKLocationManagerObserver, MKLocationManagerOperation;

#import <Foundation/Foundation.h>

#import "MKLocationManagerSingleUpdater.h"
#import "MKLocationManager.h"

@interface MKLocationManagerSingleUpdater : NSObject <MKLocationManagerObserver, MKLocationManagerOperation>

 {
    BOOL _active;
    CGFloat _desiredAccuracy;
    MKLocationManagerSingleUpdater *_selfReference;
    MKLocationManager *_locationManager;
    NSTimer *_timeoutTimer;
    CGFloat _maxLocationAge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(id)initWithLocationManager:(id)arg0 desiredAccuracy:(CGFloat)arg1 handler:(id)arg2 ;
// -(id)initWithLocationManager:(id)arg0 desiredAccuracy:(CGFloat)arg1 handler:(id)arg2 timeout:(unk)arg3  ;
// -(id)initWithLocationManager:(id)arg0 desiredAccuracy:(CGFloat)arg1 handler:(id)arg2 timeout:(unk)arg3 maxLocationAge:(CGFloat)arg4  ;
-(id)initWithLocationManager:(id)arg0 handler:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)handleTimeout:(id)arg0 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)start;


@end


#endif