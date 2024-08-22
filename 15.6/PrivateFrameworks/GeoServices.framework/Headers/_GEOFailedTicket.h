// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOFAILEDTICKET_H
#define _GEOFAILEDTICKET_H

@class NSError;


#import "GEOAbstractMapServiceTicket.h"

@interface _GEOFailedTicket : GEOAbstractMapServiceTicket {
    NSError *_error;
}




-(id)initWithError:(id)arg0 traits:(id)arg1 ;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;
// -(void)submitWithRefinedHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;


@end


#endif