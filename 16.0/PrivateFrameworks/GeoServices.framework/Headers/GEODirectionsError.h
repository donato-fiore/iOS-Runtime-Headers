// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODIRECTIONSERROR_H
#define GEODIRECTIONSERROR_H

@class NSArray, NSString;
@protocol NSSecureCoding, GEOTransitRoutingIncidentMessage;

#import <Foundation/Foundation.h>

#import "GEOAlert.h"

@interface GEODirectionsError : NSObject <NSSecureCoding>

 {
    GEOAlert *_alert;
    *GEOProblemDetail _problemDetails;
    NSUInteger _problemDetailsCount;
    id<GEOTransitRoutingIncidentMessage> *_routingIncidentMessage;
}


@property (readonly, nonatomic) NSInteger firstDirectionsErrorCode;
@property (readonly, nonatomic) NSObject<GEOTransitRoutingIncidentMessage> *incidentMessage;
@property (readonly, nonatomic) NSArray *internalServerErrors; // ivar: _internalServerErrors
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedTitle;


+(BOOL)supportsSecureCoding;
-(BOOL)_errorCode:(NSInteger)arg0 toProblem:(*int)arg1 ;
-(BOOL)hasError:(NSInteger)arg0 ;
-(NSInteger)_errorCodeForProblemDetail:(struct GEOProblemDetail )arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponse:(id)arg0 ;
-(id)initWithWaypointIndex:(NSUInteger)arg0 ;
-(void)_copyProblemDetails:(struct GEOProblemDetail *)arg0 count:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif