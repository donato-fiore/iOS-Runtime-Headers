// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNDIRECTIONSREQUESTDETAILS_H
#define MNDIRECTIONSREQUESTDETAILS_H

@class GEOCommonOptions, GEOMapRegion, GEOLocation, GEODirectionsRequestFeedback, GEOResumeRouteHandle, GEORouteAttributes, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNDirectionsRequestDetails : NSObject <NSSecureCoding>



@property (retain, nonatomic) GEOCommonOptions *commonOptions; // ivar: _commonOptions
@property (retain, nonatomic) GEOMapRegion *currentMapRegion; // ivar: _currentMapRegion
@property (retain, nonatomic) GEOLocation *currentUserLocation; // ivar: _currentUserLocation
@property (retain, nonatomic) GEODirectionsRequestFeedback *directionsRequestFeedback; // ivar: _directionsRequestFeedback
@property (nonatomic) BOOL isResumingMultipointRoute; // ivar: _isResumingMultipointRoute
@property (nonatomic) NSUInteger maxRouteCount; // ivar: _maxRouteCount
@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle; // ivar: _resumeRouteHandle
@property (retain, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (retain, nonatomic) NSString *tracePath; // ivar: _tracePath
@property (retain, nonatomic) NSArray *waypoints; // ivar: _waypoints


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTracePath:(id)arg0 ;
-(id)initWithWaypoints:(id)arg0 routeAttributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif