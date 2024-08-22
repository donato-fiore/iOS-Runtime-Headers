// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTUICONVERSATIONCONTROLLERCOORDINATOR_H
#define RTTUICONVERSATIONCONTROLLERCOORDINATOR_H

@class NSPointerArray, NSLock, NSMutableSet, NSIndexPath, RTTUtterance, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RTTUIConversationControllerCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
    NSPointerArray *_conversationControllers;
    NSLock *_realtimeSendLock;
    *__CTServerConnection _ctConnection;
    NSMutableSet *_registeredCalls;
}


@property (readonly, nonatomic) NSIndexPath *inProgressRealTimeIndexPath; // ivar: _inProgressRealTimeIndexPath
@property (readonly, nonatomic) RTTUtterance *inProgressRealTimeUtterance; // ivar: _inProgressRealTimeUtterance
@property (nonatomic) BOOL processingUtteranceBuffer; // ivar: _processingUtteranceBuffer
@property (retain, nonatomic) NSMutableArray *utteranceBuffer; // ivar: _utteranceBuffer


+(id)coordinator;
-(BOOL)realtimeTextDidChange:(id)arg0 forUtterance:(id)arg1 lastRowPath:(id)arg2 ;
-(id)conversationControllers;
-(id)init;
-(id)viewControllerForCallUUID:(id)arg0 ;
-(void)_sendNewUtteranceString:(id)arg0 atIndex:(NSUInteger)arg1 forCellPath:(id)arg2 call:(id)arg3 ;
-(void)addConversationController:(id)arg0 ;
-(void)processUtteranceQueue;
-(void)registerForCallUpdates:(id)arg0 ;
-(void)sendNewUtteranceString:(id)arg0 controller:(id)arg1 ;


@end


#endif