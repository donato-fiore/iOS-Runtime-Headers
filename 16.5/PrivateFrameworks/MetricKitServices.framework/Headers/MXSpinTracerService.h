// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSPINTRACERSERVICE_H
#define MXSPINTRACERSERVICE_H

@class NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;


#import "MXService.h"

@interface MXSpinTracerService : MXService

@property (retain) NSObject<OS_os_log> *MXSpinTracerServiceLogHandle; // ivar: _MXSpinTracerServiceLogHandle
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (retain) NSMutableArray *spinTracerDataPaths; // ivar: _spinTracerDataPaths
@property (retain) NSMutableArray *unarchivedSpinTracerData; // ivar: _unarchivedSpinTracerData


+(id)sharedSpinTracerService;
-(BOOL)_updateService;
-(BOOL)diagnosticsAvailable;
-(BOOL)diagnosticsSupported;
-(BOOL)startService;
-(BOOL)stopService;
-(id)getDiagnosticsForClient:(id)arg0 dateString:(id)arg1 ;
-(id)init;
-(void)unarchiveSpinTracerDataForDateString:(id)arg0 ;


@end


#endif