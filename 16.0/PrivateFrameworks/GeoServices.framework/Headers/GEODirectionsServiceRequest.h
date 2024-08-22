// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODIRECTIONSSERVICEREQUEST_H
#define GEODIRECTIONSSERVICEREQUEST_H


#import <Foundation/Foundation.h>

#import "GEODirectionsRequest.h"
#import "GEODirectionsRequester.h"

@interface GEODirectionsServiceRequest : NSObject {
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsRequester *_directionsRequester;
    BOOL _isCancelled;
}




-(id)initWithDirectionsRequest:(id)arg0 directionsRequester:(id)arg1 ;
-(void)cancel;


@end


#endif