// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNSTARTNAVIGATIONDETAILS_H
#define MNSTARTNAVIGATIONDETAILS_H

@class GEODirectionsRequest, GEODirectionsResponse, NSString, GEORouteAttributes, NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNStartNavigationReconnectionDetails.h"
#import "MNLocation.h"
#import "MNTraceRecordingData.h"

@interface MNStartNavigationDetails : NSObject <NSCopying, NSSecureCoding>

 {
    MNStartNavigationReconnectionDetails *_reconnectionDetails;
}


@property (retain, nonatomic) GEODirectionsRequest *directionsRequest; // ivar: _directionsRequest
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse; // ivar: _directionsResponse
@property (readonly, nonatomic) NSString *fullDescription;
@property (nonatomic) NSUInteger guidanceType; // ivar: _guidanceType
@property (retain, nonatomic) MNLocation *initialUserLocation; // ivar: _initialUserLocation
@property (nonatomic) BOOL isReconnecting;
@property (nonatomic) BOOL isResumingMultipointRoute; // ivar: _isResumingMultipointRoute
@property (nonatomic) NSInteger navigationType; // ivar: _navigationType
@property (retain, nonatomic) MNStartNavigationReconnectionDetails *reconnectionDetails;
@property (copy, nonatomic) NSString *requestingAppIdentifier; // ivar: _requestingAppIdentifier
@property (retain, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (retain, nonatomic) NSArray *routes; // ivar: _routes
@property (nonatomic) NSUInteger selectedRouteIndex; // ivar: _selectedRouteIndex
@property (nonatomic) NSInteger simulationType; // ivar: _simulationType
@property (copy, nonatomic) NSString *tracePlaybackPath; // ivar: _tracePlaybackPath
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData; // ivar: _traceRecordingData
@property (copy, nonatomic) NSString *traceRecordingNameOverride; // ivar: _traceRecordingNameOverride
@property (retain, nonatomic) NSDictionary *traffic; // ivar: _traffic


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif