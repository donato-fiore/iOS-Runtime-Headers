// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOLOCALEXTERNALREQUESTCOUNTERTICKET_H
#define _GEOLOCALEXTERNALREQUESTCOUNTERTICKET_H

@class NSDate, NSString;


#import "GEOExternalRequestCounterTicketBase.h"
#import "GEORequestCounterPersistence.h"

@interface _GEOLocalExternalRequestCounterTicket : GEOExternalRequestCounterTicketBase {
    GEORequestCounterPersistence *_persistence;
    NSDate *_startDate;
    NSString *_requestType;
    NSString *_requestSubtype;
    NSString *_source;
}




+(id)externalRequestCounterForType:(id)arg0 subtype:(id)arg1 source:(id)arg2 appId:(id)arg3 persistence:(id)arg4 ;
-(void)_incrementExternalForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 xmitBytes:(NSInteger)arg3 recvBytes:(NSInteger)arg4 usedInterfaces:(NSUInteger)arg5 requestType:(id)arg6 requestSubtype:(id)arg7 source:(id)arg8 ;


@end


#endif