// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNDIRECTIONSRESPONSEINFO_H
#define MNDIRECTIONSRESPONSEINFO_H

@class GEODirectionsError, NSError, GEODirectionsRequest, GEODirectionsResponse, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNTraceRecordingData.h"

@interface MNDirectionsResponseInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) GEODirectionsError *directionsError; // ivar: _directionsError
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) GEODirectionsRequest *request; // ivar: _request
@property (retain, nonatomic) GEODirectionsResponse *response; // ivar: _response
@property (retain, nonatomic) NSArray *routeInfos; // ivar: _routeInfos
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData; // ivar: _traceRecordingData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif