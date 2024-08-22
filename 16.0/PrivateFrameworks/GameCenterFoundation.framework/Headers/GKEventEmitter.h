// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKEVENTEMITTER_H
#define GKEVENTEMITTER_H

@class NSHashTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface GKEventEmitter : NSObject

@property (retain, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (retain, nonatomic) NSMutableArray *queuedEvents; // ivar: _queuedEvents
@property (nonatomic) BOOL shouldQueue; // ivar: _shouldQueue
@property (retain, nonatomic) NSMutableArray *supportedProtocols; // ivar: _supportedProtocols


+(id)eventEmitterForProtocols:(id)arg0 ;
+(id)eventEmitterForProtocols:(id)arg0 shouldQueue:(BOOL)arg1 ;
-(BOOL)listenerRegisteredForSelector:(SEL)arg0 ;
-(id)initWithSupportedProtocols:(id)arg0 shouldQueue:(BOOL)arg1 ;
-(id)invocationForProtocol:(id)arg0 selector:(SEL)arg1 ;
-(id)methodSignatureForProtocol:(id)arg0 selector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dispatchQueuedEventsToListener:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)registerListener:(id)arg0 ;
-(void)unregisterAllListeners;
-(void)unregisterListener:(id)arg0 ;


@end


#endif