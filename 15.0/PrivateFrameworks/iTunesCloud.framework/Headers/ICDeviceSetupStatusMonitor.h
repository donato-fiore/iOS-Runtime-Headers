// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDEVICESETUPSTATUSMONITOR_H
#define ICDEVICESETUPSTATUSMONITOR_H

@class NSMutableArray, NSString;
@protocol ICNanoPairedDeviceStatusObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingBuddyCompleteBlocks;
    NSMutableArray *_pendingSetupCompleteBlocks;
    BOOL _setupAssistantRunning;
    int _setupAssistantFinishedNotifyToken;
    int _setupAssistantLaunchedNotifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDeviceSetupComplete) BOOL deviceSetupComplete;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isSetupAssistantRunning) BOOL setupAssistantRunning;
@property (readonly) Class superclass;


+(id)sharedMonitor;
-(id)_init;
-(void)_runAllPendingBlocksOfType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)nanoPairedDeviceStatusMonitor:(id)arg0 didChangeClientSyncState:(NSUInteger)arg1 ;
-(void)performBlockAfterBuddySetup:(id)arg0 ;
-(void)performBlockAfterDeviceSetup:(id)arg0 ;


@end


#endif