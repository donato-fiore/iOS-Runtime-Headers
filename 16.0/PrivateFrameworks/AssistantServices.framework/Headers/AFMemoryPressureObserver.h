// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMEMORYPRESSUREOBSERVER_H
#define AFMEMORYPRESSUREOBSERVER_H

@class NSHashTable, NSString;
@protocol AFInvalidating, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AFMemoryPressureObserver : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSUInteger _memoryPressureFlags;
    NSHashTable *_listeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedObserver;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)_addListener:(id)arg0 ;
-(void)_handleMemoryPressureWithFlags:(NSUInteger)arg0 ;
-(void)_removeAllListeners;
-(void)_removeListener:(id)arg0 ;
-(void)_startObservingMemoryPressureWithOptions:(NSUInteger)arg0 ;
-(void)_stopObservingMemoryPressure;
-(void)addListener:(id)arg0 ;
-(void)dealloc;
-(void)getCurrentConditionWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)removeAllListeners;
-(void)removeListener:(id)arg0 ;


@end


#endif