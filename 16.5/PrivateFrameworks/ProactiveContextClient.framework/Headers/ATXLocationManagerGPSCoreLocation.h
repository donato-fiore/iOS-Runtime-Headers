// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCATIONMANAGERGPSCORELOCATION_H
#define ATXLOCATIONMANAGERGPSCORELOCATION_H

@class CLLocationManager, NSCondition, NSMutableSet, CLRegion, NSString, CLLocation;
@protocol CLLocationManagerDelegate, ATXLocationManagerGPS, OS_dispatch_queue, ATXLocationManagerGPSDelegate;

#import <Foundation/Foundation.h>


@interface ATXLocationManagerGPSCoreLocation : NSObject <CLLocationManagerDelegate, ATXLocationManagerGPS>

 {
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_clQueue;
    NSCondition *_updateCondition;
    BOOL _locationEnabled;
    BOOL _preciseLocationEnabled;
    BOOL _updatePending;
    NSMutableSet *_locationBlocksToInvoke;
    NSCondition *_requestStateCondition;
    CLRegion *_regionRequested;
    NSInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXLocationManagerGPSDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL locationEnabled;
@property (readonly, nonatomic) BOOL preciseLocationEnabled;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)stateForRegion:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(id)_existingRegionWithIdentifierOnCLQueue:(id)arg0 ;
-(id)_init;
-(id)init;
-(id)updateLocationWithTimeout:(CGFloat)arg0 requestPreciseLocation:(BOOL)arg1 ;
-(void)_requestStateIfNeededForRegion:(id)arg0 ;
-(void)_startUpdateIfNeededWithPreciseLocation:(BOOL)arg0 ;
-(void)_updateConditionAndInvokeLocationBlocks:(id)arg0 error:(id)arg1 ;
-(void)beginMonitoringRegion:(id)arg0 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didStartMonitoringForRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)stopMonitoringRegionWithIdentifier:(id)arg0 ;
-(void)updateLocationWithCompletionHandler:(id)arg0 ;


@end


#endif