// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKROUTEETAFETCHER_H
#define _MKROUTEETAFETCHER_H

@class GEOAutomobileOptions, GEOCyclingOptions, NSMutableDictionary, GEOTransitOptions;

#import <Foundation/Foundation.h>

#import "MKDirections.h"
#import "MKMapItem.h"

@interface _MKRouteETAFetcher : NSObject {
    CLLocationCoordinate2D _lastUpdatedETAOriginCoordinate;
    CGFloat _lastUpdatedETATime;
    CGFloat _lastRequestTime;
    MKDirections *_inProgressETAUpdate;
    BOOL _lastETAUpdateHadError;
    CGFloat _staleDistance;
    CGFloat _staleTimeInterval;
    BOOL _optionsHaveChangedSinceLastUpdate;
}


@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, nonatomic) CLLocationCoordinate2D destinationCoordinate;
@property (readonly, nonatomic) NSMutableDictionary *etaResults; // ivar: _etaResults
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) CLLocationCoordinate2D originCoordinate;
@property (retain, nonatomic) MKMapItem *originMapItem; // ivar: _originMapItem
@property (copy, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions


-(BOOL)isUsingCurrentLocationForOrigin;
-(BOOL)isValidETA:(id)arg0 ;
-(BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(struct CLLocationCoordinate2D )arg0 ;
-(id)init;
-(id)routeETAForTransportType:(NSUInteger)arg0 ;
-(void)_didUpdateETAResult;
-(void)_resetState;
-(void)dealloc;
-(void)expireETAsIfNoLongerValid;
-(void)invalidateETAForTransportType:(NSUInteger)arg0 ;
-(void)requestNewETAForTransportType:(NSUInteger)arg0 additionalTransportTypes:(id)arg1 completion:(id)arg2 ;


@end


#endif