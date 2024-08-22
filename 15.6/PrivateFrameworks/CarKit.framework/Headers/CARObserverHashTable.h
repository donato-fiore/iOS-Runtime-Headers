// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAROBSERVERHASHTABLE_H
#define CAROBSERVERHASHTABLE_H

@class Protocol, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CARObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly) BOOL hasObservers;


-(id)description;
-(id)initWithProtocol:(id)arg0 ;
-(id)initWithProtocol:(id)arg0 callbackQueue:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif