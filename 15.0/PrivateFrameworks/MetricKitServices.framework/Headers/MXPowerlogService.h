// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXPOWERLOGSERVICE_H
#define MXPOWERLOGSERVICE_H

@class NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;


#import "MXService.h"

@interface MXPowerlogService : MXService

@property (retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle; // ivar: _MXPowerLogServiceLogHandle
@property (retain) NSMutableArray *powerlogDataPaths; // ivar: _powerlogDataPaths
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (retain) NSMutableArray *unarchivedPowerlogData; // ivar: _unarchivedPowerlogData


+(id)sharedPowerlogService;
-(BOOL)_updateService;
-(BOOL)metricsAvailable;
-(BOOL)metricsSupported;
-(BOOL)startService;
-(BOOL)stopService;
-(id)getMetricsForClient:(id)arg0 ;
-(id)init;
-(void)unarchivePowerlogData;


@end


#endif