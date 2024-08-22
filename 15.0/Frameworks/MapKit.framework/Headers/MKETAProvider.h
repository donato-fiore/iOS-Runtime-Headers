// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKETAPROVIDER_H
#define MKETAPROVIDER_H

@class NSNumber, NSString, NSTimer, GEOAutomobileOptions, CLLocation, GEOCyclingOptions, NSHashTable, NSLock, GEOTransitOptions;
@protocol MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding, MKETAProviderDelegate, GEOTransitLineItem, _MKPlaceItem;

#import <Foundation/Foundation.h>

#import "_MKQuickRouteManager.h"
#import "MKMapItem.h"

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding>

 {
    _MKQuickRouteManager *_quickRouteManager;
    NSNumber *_lastTransportTypeFound;
    MKMapItem *_nearestStationItem;
    BOOL _distanceOrETAIsSuppressed;
    BOOL _distanceOrETAWasFound;
    NSString *_distanceTextItem;
    NSString *_rawDistanceString;
    NSUInteger _etaTransportType;
    CGFloat _etaTravelTime;
    BOOL _active;
    BOOL _paused;
    BOOL _inactiveInBackground;
    NSTimer *_refreshTimer;
}


@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKETAProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *distanceString;
@property (readonly, nonatomic) NSUInteger etaTransportType;
@property (readonly, nonatomic) CGFloat etaTravelTime;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitLineItem> *lineItem; // ivar: _lineItem
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSLock *observersLock; // ivar: _observersLock
@property (readonly, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (readonly, nonatomic) NSString *rawDistanceString;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions
@property (readonly, nonatomic) NSNumber *transportTypePreferenceNumber;


-(BOOL)_areDistanceAndETAInformationAvailable;
-(BOOL)_shouldUpdateETAForMapView:(id)arg0 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(id)currentMapItem;
-(id)initWithLineItem:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithPlaceItem:(id)arg0 ;
-(void)_cancelTimer;
-(void)_commonInit;
-(void)_configureETAForMapItem:(id)arg0 ;
-(void)_didEnterBackground;
-(void)_locationManagerApprovalDidChange:(id)arg0 ;
-(void)_notifyETAAllObservers;
-(void)_notifyLocationAllObservers;
-(void)_refreshTimer;
-(void)_startTimer;
-(void)_updateETA;
-(void)_updateETADisplayWithTransportType:(NSUInteger)arg0 travelTime:(CGFloat)arg1 distance:(CGFloat)arg2 ;
-(void)_updateETAHandler:(id)arg0 ;
-(void)_willEnterForeground;
-(void)addObserver:(id)arg0 ;
-(void)cancel;
-(void)configureWithNearestStationMapItem:(id)arg0 ;
-(void)dealloc;
-(void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D )arg0 destinationCoordinate:(struct CLLocationCoordinate2D )arg1 handler:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)pause;
-(void)quickRouteManager:(id)arg0 didUpdateETA:(id)arg1 error:(id)arg2 animated:(BOOL)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)restart;
-(void)start;


@end


#endif