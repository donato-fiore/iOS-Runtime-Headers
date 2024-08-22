// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOREMOTEREQUESTCOUNTERTICKET_H
#define _GEOREMOTEREQUESTCOUNTERTICKET_H



#import "GEORequestCounterTicketBase.h"
#import "GEORequestCounterRemoteProxy.h"

@interface _GEORemoteRequestCounterTicket : GEORequestCounterTicketBase {
    GEORequestCounterRemoteProxy *_remoteProxy;
}




+(id)requestCounterTicketForType:(struct ? )arg0 appId:(id)arg1 remoteProxy:(id)arg2 ;
-(void)_incrementForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 requestType:(struct ? )arg3 result:(unsigned char)arg4 xmitBytes:(NSInteger)arg5 recvBytes:(NSInteger)arg6 usedInterfaces:(NSUInteger)arg7 ;


@end


#endif