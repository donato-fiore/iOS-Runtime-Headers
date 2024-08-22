// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTURNBASEDEVENTHANDLER_H
#define GKTURNBASEDEVENTHANDLER_H

@protocol GKTurnBasedEventHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GKTurnBasedEventHandler : NSObject

@property (weak, nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didBecomeActive; // ivar: _didBecomeActive
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue; // ivar: _lookForEventQueue


+(id)sharedTurnBasedEventHandler;
-(id)init;
-(void)callTurnEventForMatch:(id)arg0 userTapped:(BOOL)arg1 ;
-(void)lookForEvent;


@end


#endif