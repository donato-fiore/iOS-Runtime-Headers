// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER18MONITORMANAGERMOCK_H
#define _TTC13SOFTPOSREADER18MONITORMANAGERMOCK_H



#import "SPRMonitorManager.h"

@interface _TtC13SoftPosReader18MonitorManagerMock : SPRMonitorManager



-(BOOL)ping;
-(BOOL)start;
-(BOOL)storeAuditLog:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeAuditLogWithData:(id)arg0 error:(*id)arg1 ;
-(id)sendAuditLogsAndReturnError:(*id)arg0 ;
-(id)sendIncidentLog:(id)arg0 error:(*id)arg1 ;
-(id)sendIncidentLogWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif