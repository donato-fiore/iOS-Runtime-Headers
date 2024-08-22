// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRMONITORMANAGER_H
#define SPRMONITORMANAGER_H



#import "SPRObject.h"

@interface SPRMonitorManager : SPRObject



-(BOOL)ping;
-(BOOL)start;
-(BOOL)stop;
-(BOOL)storeAuditLog:(id)arg0 error:(*id)arg1 ;
-(id)sendAuditLogsAndReturnError:(*id)arg0 ;
-(id)sendIncidentLog:(id)arg0 error:(*id)arg1 ;


@end


#endif