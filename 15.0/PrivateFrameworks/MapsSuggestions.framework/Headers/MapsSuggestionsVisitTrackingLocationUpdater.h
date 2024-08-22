// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSVISITTRACKINGLOCATIONUPDATER_H
#define MAPSSUGGESTIONSVISITTRACKINGLOCATIONUPDATER_H

@class CLLocation, CLVisit, NSString;
@protocol MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsObservers.h"

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate>

 {
    Queue _queue;
    id<MapsSuggestionsLocationUpdater> *_wrappedLocationUpdater;
    CLLocation *_latestLocation;
    CLVisit *_currentVisit;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
    CGFloat _distanceBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)_isDefinitelyOutsideOfVisit:(id)arg0 location:(id)arg1 allowingBuffer:(CGFloat)arg2 ;
-(id)initDecoratingLocationUpdater:(id)arg0 ;
-(id)restartLocationUpdatesForDelegate:(id)arg0 ;
-(id)startLocationUpdatesForDelegate:(id)arg0 ;
-(void)awaitQueue;
-(void)dealloc;
-(void)didEnterVisit:(id)arg0 ;
-(void)didLeaveVisit:(id)arg0 ;
-(void)didLoseLocationPermission;
-(void)didUpdateLocation:(id)arg0 ;
-(void)stopLocationUpdatesForDelegate:(id)arg0 ;


@end


#endif