// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKTRAVELLOOKUPMANAGER_H
#define EKTRAVELLOOKUPMANAGER_H


#import <Foundation/Foundation.h>


@interface EKTravelLookupManager : NSObject



+(id)defaultManager;
+(void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg0 withCompletionBlock:(id)arg1 ;
+(void)geocodeAddress:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_travelTimeWithStartCoordinate:(id)arg0 endCoordinate:(id)arg1 arrivalDate:(id)arg2 withRouteType:(id)arg3 completionBlock:(id)arg4 ;
-(void)_updateLocation:(id)arg0 withMapItem:(id)arg1 forRoute:(id)arg2 withCompletionBlock:(id)arg3 ;
-(void)findCoordinatesForLocation:(id)arg0 completionBlock:(id)arg1 ;
-(void)travelTimeFrom:(id)arg0 to:(id)arg1 arrivalDate:(id)arg2 withRouteType:(id)arg3 withCompletionBlock:(id)arg4 ;
-(void)travelTimeFrom:(id)arg0 to:(id)arg1 arrivalDate:(id)arg2 withRouteTypes:(id)arg3 withCompletionBlock:(id)arg4 ;


@end


#endif