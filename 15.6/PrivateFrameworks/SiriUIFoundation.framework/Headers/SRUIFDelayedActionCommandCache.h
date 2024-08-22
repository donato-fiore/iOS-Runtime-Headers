// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRUIFDELAYEDACTIONCOMMANDCACHE_H
#define SRUIFDELAYEDACTIONCOMMANDCACHE_H

@class NSMutableDictionary;
@protocol SRUIFDelayedActionCommandCacheDelegate;

#import <Foundation/Foundation.h>


@interface SRUIFDelayedActionCommandCache : NSObject {
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}


@property (weak, nonatomic) NSObject<SRUIFDelayedActionCommandCacheDelegate> *delegate; // ivar: _delegate


-(id)_commandHandler;
-(id)initWithDelegate:(id)arg0 ;
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