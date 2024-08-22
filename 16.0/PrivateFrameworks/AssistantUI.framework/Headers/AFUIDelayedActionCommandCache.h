// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUIDELAYEDACTIONCOMMANDCACHE_H
#define AFUIDELAYEDACTIONCOMMANDCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AFUIDelayedActionCommandCache : NSObject {
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}




-(id)_commandHandler;
-(id)init;
-(void)_invalidateDelayedActionTimer:(id)arg0 withKey:(id)arg1 ;
-(void)_performCommandsWithDelayedActionCommand:(id)arg0 ;
-(void)_performDelayedActionCommandTimerAction:(id)arg0 ;
-(void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)enqueueDelayedActionCommand:(id)arg0 completion:(id)arg1 ;
-(void)invalidatePendingCommands;
-(void)performDismissalCommands;


@end


#endif