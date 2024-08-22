// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNNAVIGATIONSERVICEDIRECTIONSREQUESTTICKET_H
#define MNNAVIGATIONSERVICEDIRECTIONSREQUESTTICKET_H

@class NSUUID, GEODirectionsRequest, GEODirectionsResponse;

#import <Foundation/Foundation.h>

#import "MNNavigationClientProxy.h"
#import "MNDirectionsRequestDetails.h"
#import "MNTraceRecordingData.h"

@interface MNNavigationServiceDirectionsRequestTicket : NSObject {
    NSUUID *_requestIdentifier;
    MNNavigationClientProxy *_proxy;
    MNDirectionsRequestDetails *_request;
}


@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest; // ivar: _directionsRequest
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse; // ivar: _directionsResponse
@property (readonly, nonatomic) MNTraceRecordingData *traceRecordingData; // ivar: _traceRecordingData


-(id)initWithProxy:(id)arg0 request:(id)arg1 ;
-(void)cancel;
-(void)submitWithHandler:(id)arg0 ;


@end


#endif