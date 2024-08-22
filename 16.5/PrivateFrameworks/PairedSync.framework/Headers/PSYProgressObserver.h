// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSYPROGRESSOBSERVER_H
#define PSYPROGRESSOBSERVER_H

@class NSMutableSet, NSDictionary, NSString;
@protocol PSYSyncSessionObserverDelegate, OS_dispatch_queue, PSYProgressObserverDelegate;

#import <Foundation/Foundation.h>

#import "PSYSyncSessionObserver.h"
#import "PSYSyncSession.h"

@interface PSYProgressObserver : NSObject <PSYSyncSessionObserverDelegate>

 {
    PSYSyncSessionObserver *_syncSessionObserver;
    PSYSyncSession *_currentSyncSession;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_completedInitialSyncPairingIDs;
}


@property (readonly, copy, nonatomic) NSDictionary *activityErrors;
@property (readonly, nonatomic) NSString *activityLabel;
@property (readonly, nonatomic) CGFloat activityProgress;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSYProgressObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger progressObserverState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat totalProgress;


-(BOOL)_shouldHandleSyncSession:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_updateState;
-(void)supportsMigrationSync;
-(void)syncSessionObserver:(id)arg0 didInvalidateSyncSession:(id)arg1 ;
-(void)syncSessionObserver:(id)arg0 didReceiveUpdate:(id)arg1 ;
-(void)syncSessionObserver:(id)arg0 receivedSyncSession:(id)arg1 ;


@end


#endif