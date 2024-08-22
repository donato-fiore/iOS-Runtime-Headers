// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXREPORTCRASHSERVICE_H
#define MXREPORTCRASHSERVICE_H

@class NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;


#import "MXService.h"

@interface MXReportCrashService : MXService

@property (retain) NSObject<OS_os_log> *MXReportCrashServiceLogHandle; // ivar: _MXReportCrashServiceLogHandle
@property (retain) NSMutableArray *reportCrashDataPaths; // ivar: _reportCrashDataPaths
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (retain) NSMutableArray *unarchivedReportCrashData; // ivar: _unarchivedReportCrashData


+(id)sharedReportCrashService;
-(BOOL)_updateService;
-(BOOL)diagnosticsAvailable;
-(BOOL)diagnosticsSupported;
-(BOOL)startService;
-(BOOL)stopService;
-(id)getDiagnosticsForClient:(id)arg0 dateString:(id)arg1 ;
-(id)init;
-(void)unarchiveReportCrashDataForDateString:(id)arg0 ;


@end


#endif