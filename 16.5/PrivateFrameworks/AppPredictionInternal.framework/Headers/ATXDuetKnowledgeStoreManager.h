// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDUETKNOWLEDGESTOREMANAGER_H
#define ATXDUETKNOWLEDGESTOREMANAGER_H

@class NSDate;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying, OS_dispatch_source, _DKKnowledgeSaving;

#import <Foundation/Foundation.h>


@interface ATXDuetKnowledgeStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<_DKKnowledgeQuerying> *_store;
    NSDate *_lastUsedDate;
    NSObject<OS_dispatch_source> *_pressureSource;
    NSUInteger _previousPressure;
    NSObject<OS_dispatch_source> *_expirationSource;
    id<_DKKnowledgeSaving> *_savingStore;
}




+(id)sharedInstance;
-(id)init;
-(void)_clear;
-(void)_handleMemoryPressure;
-(void)dealloc;
-(void)runBlock:(id)arg0 ;
-(void)saveEventsAsynchronously:(id)arg0 responseQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif