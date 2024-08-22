// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCOALESCABLEWORKCONTROLLER_H
#define MTCOALESCABLEWORKCONTROLLER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTCoalescableWorkManifest.h"

@interface MTCoalescableWorkController : NSObject

@property (retain, nonatomic) MTCoalescableWorkManifest *activeWorkManifest; // ivar: _activeWorkManifest
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) MTCoalescableWorkManifest *pendingWorkManifest; // ivar: _pendingWorkManifest
@property (nonatomic) unsigned int qosClass; // ivar: _qosClass
@property (nonatomic) BOOL verboseDebugLoggingEnabled; // ivar: _verboseDebugLoggingEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_uniqueGenericIdentifier;
+(id)controllerWithQosClass:(unsigned int)arg0 identifier:(id)arg1 ;
-(id)description;
-(id)initWithWorkQueue:(id)arg0 identifier:(id)arg1 ;
-(void)_onWorkQueuePerformActiveWorkBlock;
// -(void)_syncScheduleStartActiveWork:(id)arg0 completion:(unk)arg1  ;
// -(void)_syncScheduleUpdatePendingWork:(id)arg0 completion:(unk)arg1  ;
-(void)schedule:(id)arg0 ;
// -(void)schedule:(id)arg0 completion:(unk)arg1  ;


@end


#endif