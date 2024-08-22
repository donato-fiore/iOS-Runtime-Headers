// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOREMOTEEXTERNALREQUESTCOUNTERTICKET_H
#define _GEOREMOTEEXTERNALREQUESTCOUNTERTICKET_H



#import "GEOExternalRequestCounterTicketBase.h"
#import "GEORequestCounterRemoteProxy.h"

@interface _GEORemoteExternalRequestCounterTicket : GEOExternalRequestCounterTicketBase {
    GEORequestCounterRemoteProxy *_remoteProxy;
}




+(id)externalRequestCounterForType:(id)arg0 subtype:(id)arg1 source:(id)arg2 appId:(id)arg3 remoteProxy:(id)arg4 ;
-(void)_incrementExternalForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 xmitBytes:(NSInteger)arg3 recvBytes:(NSInteger)arg4 usedInterfaces:(NSUInteger)arg5 requestType:(id)arg6 requestSubtype:(id)arg7 source:(id)arg8 ;


@end


#endif