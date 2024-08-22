// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REPREDICTEDACTIONSERVER_H
#define REPREDICTEDACTIONSERVER_H

@class NSXPCConnection, NSArray, NSDate, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REUpNextScheduler.h"
#import "REObserverStore.h"

@interface REPredictedActionServer : NSObject {
    NSXPCConnection *_connection;
    REUpNextScheduler *_scheduler;
    NSArray *_predictions;
    NSArray *_counts;
    NSDate *_firstPerformedDate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _fetchingData;
    NSDate *_lastFetchedDate;
    NSMutableArray *_fetchCompletionBlocks;
    REObserverStore *_observers;
}




+(id)sharedInstance;
-(id)init;
// -(void)_accessOrEnqueueDataRequest:(id)arg0 error:(unk)arg1  ;
-(void)_clearConnection;
-(void)_finishProcessingData;
-(void)_invalidateConnection;
-(void)_notifyObservers;
-(void)_queue_fetchPredicitions;
-(void)_queue_setupConnection;
-(void)_requestPredictions:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)fetchFirstPerformedActionDate:(id)arg0 ;
-(void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg0 actionIdentifier:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchPredictedActions:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif