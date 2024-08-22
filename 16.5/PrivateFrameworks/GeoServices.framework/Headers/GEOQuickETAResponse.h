// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOQUICKETARESPONSE_H
#define GEOQUICKETARESPONSE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "GEOLocation.h"
#import "GEOQuickETATransitDeparturesInfo.h"

@interface GEOQuickETAResponse : NSObject

@property (readonly, nonatomic) unsigned int baselineETASeconds; // ivar: _baselineETASeconds
@property (readonly, nonatomic) GEOLocation *destinationLocation; // ivar: _destinationLocation
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) CGFloat distanceToDepartureStop; // ivar: _distanceToDepartureStop
@property (readonly, nonatomic) unsigned int responseETASeconds; // ivar: _responseETASeconds
@property (readonly, nonatomic) NSString *routeDescription; // ivar: _routeDescription
@property (readonly, nonatomic) NSMutableArray *sortedETAs; // ivar: _sortedETAs
@property (readonly, nonatomic) GEOLocation *sourceLocation; // ivar: _sourceLocation
@property (readonly, nonatomic) GEOQuickETATransitDeparturesInfo *transitDeparturesInfo; // ivar: _transitDeparturesInfo
@property (readonly, nonatomic) CGFloat walkingDurationToDepartureStop; // ivar: _walkingDurationToDepartureStop


-(id)initWithDirectionsResponse:(id)arg0 fromRequest:(id)arg1 ;
-(id)initWithETAResult:(id)arg0 fromRequest:(id)arg1 ;


@end


#endif