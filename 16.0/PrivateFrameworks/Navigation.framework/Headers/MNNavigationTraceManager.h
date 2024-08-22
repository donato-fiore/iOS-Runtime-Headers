// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNNAVIGATIONTRACEMANAGER_H
#define MNNAVIGATIONTRACEMANAGER_H

@class NSString, NSBundle;
@protocol MNTracePlayerObserver, GEOMotionContextProvider, MNLocationProvider, MNVirtualGarageProvider, MNLocationProviderDelegate, GEOMotionContextProviderDelegate, MNNavigationTraceManagerDelegate, MNVirtualGarageProviderDelegate;

#import <Foundation/Foundation.h>

#import "MNTracePlayer.h"
#import "MNTraceRecorder.h"

@interface MNNavigationTraceManager : NSObject <MNTracePlayerObserver, GEOMotionContextProvider, MNLocationProvider, MNVirtualGarageProvider>

 {
    BOOL _isSimulation;
}


@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNLocationProviderDelegate> *delegate; // ivar: _locationProviderDelegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) CGFloat expectedGpsUpdateInterval;
@property (readonly) NSUInteger hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (weak, nonatomic) NSObject<GEOMotionContextProviderDelegate> *motionDelegate; // ivar: _motionContextProviderDelegate
@property (nonatomic) NSInteger navigationType; // ivar: _navigationType
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeScale;
@property (weak, nonatomic) NSObject<MNNavigationTraceManagerDelegate> *traceManagerDelegate; // ivar: _traceManagerDelegate
@property (readonly, nonatomic) MNTracePlayer *tracePlayer; // ivar: _tracePlayer
@property (readonly, nonatomic) MNTraceRecorder *traceRecorder; // ivar: _traceRecorder
@property (readonly, nonatomic) NSUInteger traceVersion;
@property (readonly, nonatomic) NSUInteger vehiclesCount;
@property (weak, nonatomic) NSObject<MNVirtualGarageProviderDelegate> *virtualGarageDelegate; // ivar: _virtualGarageProviderDelegate


-(BOOL)_isNavigating;
-(NSUInteger)_startIndexForNavigation;
-(id)_defaultTraceExtension;
-(id)_defaultTraceNameForDestination:(id)arg0 isSimulation:(BOOL)arg1 ;
-(id)_tracePathForTraceName:(id)arg0 ;
-(id)_validFilenameForTraceName:(id)arg0 ;
-(void)_copyTraceToCrashReporterDirectory:(id)arg0 ;
-(void)_createSymlinkForTracePath:(id)arg0 ;
-(void)_recordEnvironmentInfo:(id)arg0 ;
-(void)_recordStylesheet:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)openForPlaybackWithTracePath:(id)arg0 ;
-(void)openForRecordingWithTraceRecordingData:(id)arg0 traceName:(id)arg1 selectedRouteIndex:(NSUInteger)arg2 isReconnecting:(BOOL)arg3 isSimulation:(BOOL)arg4 ;
-(void)openForSimulationWithRoute:(id)arg0 traceRecordingData:(id)arg1 traceNameOverride:(id)arg2 ;
-(void)resetForActiveTileGroupChanged;
-(void)startMonitoringForRegion:(id)arg0 ;
-(void)startMotionUpdates;
-(void)startUpdatingHeading;
-(void)startUpdatingLocation;
-(void)startUpdatingVehicleHeading;
-(void)startUpdatingVehicleSpeed;
-(void)startVirtualGarageUpdates;
-(void)stopMonitoringForRegion:(id)arg0 ;
-(void)stopMotionUpdates;
-(void)stopUpdatingHeading;
-(void)stopUpdatingLocation;
-(void)stopUpdatingVehicleHeading;
-(void)stopUpdatingVehicleSpeed;
-(void)stopVirtualGarageUpdates;
-(void)tracePlayer:(id)arg0 didJumpToRouteResponse:(id)arg1 request:(id)arg2 waypoints:(id)arg3 ;
-(void)tracePlayer:(id)arg0 didPlayAtTime:(CGFloat)arg1 ;
-(void)tracePlayer:(id)arg0 didReceiveLocationError:(id)arg1 ;
-(void)tracePlayer:(id)arg0 didSeekToTime:(CGFloat)arg1 fromTime:(CGFloat)arg2 location:(id)arg3 ;
-(void)tracePlayer:(id)arg0 didSeekToTransportType:(int)arg1 ;
-(void)tracePlayer:(id)arg0 didUpdateEVData:(id)arg1 ;
-(void)tracePlayer:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)tracePlayer:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)tracePlayer:(id)arg0 didUpdateMotion:(NSUInteger)arg1 exitType:(NSUInteger)arg2 confidence:(NSUInteger)arg3 ;
-(void)tracePlayer:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)tracePlayer:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)tracePlayerDidPause:(id)arg0 ;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg0 ;
-(void)tracePlayerDidResume:(id)arg0 ;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg0 ;
-(void)tracePlayerDidStart:(id)arg0 ;
-(void)tracePlayerDidStayOnRoute:(id)arg0 ;
-(void)tracePlayerDidStop:(id)arg0 ;
-(void)updatedVehicleStateWithHandler:(id)arg0 ;


@end


#endif