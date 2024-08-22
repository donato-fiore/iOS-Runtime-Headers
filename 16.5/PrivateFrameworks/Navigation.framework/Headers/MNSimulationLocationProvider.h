// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNSIMULATIONLOCATIONPROVIDER_H
#define MNSIMULATIONLOCATIONPROVIDER_H

@class NSTimer, NSMutableArray, NSString, NSBundle;
@protocol MNLocationProvider, MNLocationProviderDelegate;

#import <Foundation/Foundation.h>

#import "MNSimulatedLocationGenerator.h"

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider>

 {
    NSTimer *_locationUpdateTimer;
    NSInteger _simulationType;
    MNSimulatedLocationGenerator *_locationGenerator;
    BOOL _simulateGeoFences;
    NSMutableArray *_monitoredGeoFences;
    NSMutableArray *_currentGeoFences;
}


@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNLocationProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) CGFloat expectedGpsUpdateInterval;
@property (readonly) NSUInteger hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (nonatomic) CGFloat speedMultiplier; // ivar: _speedMultiplier
@property (nonatomic) CGFloat speedOverride;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeScale;
@property (readonly, nonatomic) NSUInteger traceVersion;


-(id)initWithSimulationType:(NSInteger)arg0 routeInfo:(id)arg1 ;
-(id)initWithSimulationType:(NSInteger)arg0 routeInfo:(id)arg1 alternateRouteInfos:(id)arg2 ;
-(void)_resetLocationUpdateInterval;
-(void)_sendLocationUpdate:(id)arg0 ;
-(void)dealloc;
-(void)resetForActiveTileGroupChanged;
-(void)startMonitoringForRegion:(id)arg0 ;
-(void)startUpdatingHeading;
-(void)startUpdatingLocation;
-(void)startUpdatingVehicleHeading;
-(void)startUpdatingVehicleSpeed;
-(void)stopMonitoringForRegion:(id)arg0 ;
-(void)stopUpdatingHeading;
-(void)stopUpdatingLocation;
-(void)stopUpdatingVehicleHeading;
-(void)stopUpdatingVehicleSpeed;
-(void)updatePosition:(CGFloat)arg0 ;
-(void)updateWithRouteInfo:(id)arg0 ;


@end


#endif