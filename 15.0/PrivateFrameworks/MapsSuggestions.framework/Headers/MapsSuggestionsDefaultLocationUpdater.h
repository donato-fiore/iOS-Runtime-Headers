// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSDEFAULTLOCATIONUPDATER_H
#define MAPSSUGGESTIONSDEFAULTLOCATIONUPDATER_H

@class CLLocationManager, NSString;
@protocol CLLocationManagerDelegate, MapsSuggestionsLocationUpdater;


#import "MapsSuggestionsBaseLocationUpdater.h"

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater>

 {
    CLLocationManager *_locationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)init;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)onStartImplementation;
-(void)onStopImplementation;


@end


#endif