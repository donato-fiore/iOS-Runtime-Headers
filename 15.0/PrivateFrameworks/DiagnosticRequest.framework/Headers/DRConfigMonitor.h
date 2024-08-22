// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRCONFIGMONITOR_H
#define DRCONFIGMONITOR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DRConfig.h"

@interface DRConfigMonitor : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) DRConfig *currentConfig; // ivar: _currentConfig
@property (readonly, nonatomic) id *processingBlock; // ivar: _processingBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID


-(BOOL)_markConfigUUID:(id)arg0 isRejected:(BOOL)arg1 errorOut:(*id)arg2 ;
-(BOOL)markCompletedConfigUUID:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)rejectConfigUUID:(id)arg0 errorOut:(*id)arg1 ;
-(id)currentConfigSnapshotWithErrorOut:(*id)arg0 ;
-(id)initWithTeamID:(id)arg0 targetQueue:(id)arg1 configProcessingBlock:(id)arg2 ;
-(void)_handleCurrentConfig:(id)arg0 error:(id)arg1 forceBroadcast:(BOOL)arg2 ;
-(void)_notifyClientOfConfig:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif