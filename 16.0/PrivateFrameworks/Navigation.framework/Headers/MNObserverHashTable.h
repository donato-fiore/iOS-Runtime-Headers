// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNOBSERVERHASHTABLE_H
#define MNOBSERVERHASHTABLE_H

@class Protocol, NSHashTable, geo_isolater;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MNObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    geo_isolater *_observerLock;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly) BOOL hasObservers;


-(NSUInteger)count;
-(id)description;
-(id)initWithProtocol:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif