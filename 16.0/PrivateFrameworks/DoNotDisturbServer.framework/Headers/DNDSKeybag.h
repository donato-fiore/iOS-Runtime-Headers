// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSKEYBAG_H
#define DNDSKEYBAG_H

@class NSHashTable, NSString;
@protocol DNDSKeybagStateProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDSKeybag : NSObject <DNDSKeybagStateProviding>

 {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_priorityObservers;
    BOOL _queue_priorityHasUnlockedSinceBoot;
    NSHashTable *_queue_observers;
    BOOL _queue_hasUnlockedSinceBoot;
    *_MKBEvent _mbkEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUnlockedSinceBoot;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_hasUnlockedSinceBootForObserver:(id)arg0 ;
-(BOOL)hasUnlockedSinceBootForObserver:(id)arg0 ;
-(id)init;
-(void)_beginObservingKeybag;
-(void)_queue_handleFirstUnlock;
-(void)_queue_handleKeybagStatusChanged;
-(void)addObserver:(id)arg0 ;
-(void)addPriorityObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif