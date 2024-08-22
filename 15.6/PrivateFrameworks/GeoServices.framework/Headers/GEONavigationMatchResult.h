// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONAVIGATIONMATCHRESULT_H
#define GEONAVIGATIONMATCHRESULT_H


#import <Foundation/Foundation.h>

#import "GEONavigationMatchInfo.h"
#import "GEOLocation.h"
#import "GEORoadMatch.h"
#import "GEORouteMatch.h"

@interface GEONavigationMatchResult : NSObject

@property (readonly, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // ivar: _detailedMatchInfo
@property (readonly, nonatomic) BOOL locationUnreliable; // ivar: _locationUnreliable
@property (readonly, nonatomic) GEOLocation *rawLocation; // ivar: _rawLocation
@property (readonly, nonatomic) GEORoadMatch *roadMatch; // ivar: _roadMatch
@property (readonly, nonatomic) GEORouteMatch *routeMatch; // ivar: _routeMatch
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)matchResultWithRawLocation:(id)arg0 ;
+(id)matchResultWithRoadMatch:(id)arg0 location:(id)arg1 ;
+(id)matchResultWithRouteMatch:(id)arg0 location:(id)arg1 ;
-(id)initWithRawLocation:(id)arg0 ;
-(id)initWithRoadMatch:(id)arg0 location:(id)arg1 ;
-(id)initWithRouteMatch:(id)arg0 location:(id)arg1 ;


@end


#endif