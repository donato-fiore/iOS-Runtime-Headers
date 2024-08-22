// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRWAITINGROOM_H
#define XRWAITINGROOM_H

@class XRMobileAgent<XRMobileAgentOwner>, NSMutableArray, NSMutableSet;


#import "XRMobileAgentQueueStop.h"

@interface XRWaitingRoom : XRMobileAgentQueueStop {
    id *_ownerID;
    XRMobileAgent<XRMobileAgentOwner> *_visitingOwner;
    NSMutableArray *_unaffiliatedVisitorsWaiting;
    NSMutableSet *_teamMembersWaiting;
    NSMutableSet *_activeTeams;
    BOOL _abandoned;
}




+(void)initialize;
-(BOOL)_holdReceivedAgent:(id)arg0 ticket:(id)arg1 ;
-(id)initWithDispatchQueue:(id)arg0 funnelTarget:(id)arg1 ;
-(id)initWithOwner:(id)arg0 dispatchQueue:(id)arg1 ;
-(id)ownerTicketForAgent:(id)arg0 leaveWhenEmpty:(BOOL)arg1 ;
-(id)visitorTicketForAgent:(id)arg0 team:(id)arg1 ;
-(int)agentStopDiagnosticsTypeCode;
-(void)_escortAgentToExit:(id)arg0 withTicket:(id)arg1 ;
-(void)_prepareAgentToExecute:(id)arg0 withTicket:(id)arg1 ;
-(void)abandon;
-(void)setupMeetingWithOwner:(id)arg0 worker:(id)arg1 mode:(id)arg2 ;
-(void)setupMeetingWithOwner:(id)arg0 worker:(id)arg1 team:(id)arg2 mode:(id)arg3 ;
-(void)setupOwnerVisit:(id)arg0 leaveWhenEmpty:(BOOL)arg1 mode:(id)arg2 ;
-(void)setupOwnerVisit:(id)arg0 mode:(id)arg1 ;


@end


#endif