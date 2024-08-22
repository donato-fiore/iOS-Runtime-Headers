// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCDAEMONXPCEVENTHANDLER_H
#define VCDAEMONXPCEVENTHANDLER_H

@class NSMapTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCDaemonXPCEventHandler : NSObject

@property (readonly, nonatomic) NSMapTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSArray *streams; // ivar: _streams


-(id)initWithStreams:(id)arg0 ;
-(id)initWithStreams:(id)arg0 queue:(id)arg1 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 ;
-(void)handleEvent:(id)arg0 fromStream:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 ;
-(void)resume;


@end


#endif