// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXHANGTRACERSERVICE_H
#define MXHANGTRACERSERVICE_H

@class NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;


#import "MXService.h"

@interface MXHangTracerService : MXService

@property (retain) NSObject<OS_os_log> *MXHangTracerServiceLogHandle; // ivar: _MXHangTracerServiceLogHandle
@property (retain) NSMutableArray *hangTracerDataPaths; // ivar: _hangTracerDataPaths
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (retain) NSMutableArray *unarchivedHangTracerData; // ivar: _unarchivedHangTracerData


+(id)sharedHangTracerService;
-(BOOL)_updateService;
-(BOOL)diagnosticsAvailable;
-(BOOL)diagnosticsSupported;
-(BOOL)startService;
-(BOOL)stopService;
-(id)getDiagnosticsForClient:(id)arg0 dateString:(id)arg1 ;
-(id)init;
-(void)unarchiveHangTracerDataForDateString:(id)arg0 ;


@end


#endif