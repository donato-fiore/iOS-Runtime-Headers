// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLGEOCODERINTERNAL_H
#define CLGEOCODERINTERNAL_H

@class CLSilo;
@protocol GEOMapServiceTicket, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLGeocoderInternal : NSObject {
    id *_geocodeCompletionHandler;
    id<GEOMapServiceTicket> *_ticket;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain) CLSilo *responseSilo; // ivar: _responseSilo


-(id)init;
-(void)dealloc;


@end


#endif