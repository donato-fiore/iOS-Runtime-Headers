// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNHYBRIDLOCATIONPROVIDER_H
#define MNHYBRIDLOCATIONPROVIDER_H

@class NSString, NSBundle;
@protocol MNLocationProviderDelegate, MNLocationProvider;

#import <Foundation/Foundation.h>

#import "MNCoreLocationProvider.h"

@interface MNHybridLocationProvider : NSObject <MNLocationProviderDelegate, MNLocationProvider>

 {
    NSUInteger _mode;
    CGFloat _distanceFilter;
    CGFloat _nonLeechedDesiredAccuracy;
    CGFloat _effectiveAccuracy;
    MNCoreLocationProvider *_coreLocationProvider;
}


@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNLocationProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredAccuracy;
@property (nonatomic) CGFloat distanceFilter;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) CGFloat expectedGpsUpdateInterval;
@property (readonly) NSUInteger hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (nonatomic) NSUInteger mode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeScale;
@property (readonly, nonatomic) NSUInteger traceVersion;


-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg0 ;
-(id)coreLocationProvider;
-(id)init;
-(id)initWithEffectiveBundle:(id)arg0 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg0 ;
-(id)leechedLocationProvider;
-(void)_setEffectiveAccuracy:(CGFloat)arg0 ;
-(void)_sharedInit;
-(void)locationProvider:(id)arg0 didChangeCoarseMode:(BOOL)arg1 ;
-(void)locationProvider:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationProvider:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationProvider:(id)arg0 didReceiveError:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)locationProvider:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationProvider:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationProvider:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg0 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg0 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg0 ;
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


@end


#endif