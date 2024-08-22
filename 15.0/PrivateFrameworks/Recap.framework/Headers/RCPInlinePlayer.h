// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPINLINEPLAYER_H
#define RCPINLINEPLAYER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RCPPlayer.h"

@interface RCPInlinePlayer : NSObject

@property (nonatomic) BOOL ignoresCompletionDelay; // ivar: _ignoresCompletionDelay
@property (nonatomic) BOOL needsInitialDelay; // ivar: _needsInitialDelay
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replayQueue; // ivar: _replayQueue
@property (retain, nonatomic) RCPPlayer *underlyingPlayer; // ivar: _underlyingPlayer


+(id)sharedInstance;
+(void)playCommandString:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
// +(void)playEventActions:(id)arg0 options:(unk)arg1 completion:(id)arg2  ;
+(void)playEventStream:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(void)_callBlock:(id)arg0 ;
-(void)_doInitialDelayIfNeeded;
-(void)playCommandString:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
// -(void)playEventActions:(id)arg0 options:(unk)arg1 completion:(id)arg2  ;
-(void)playEventStream:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)prewarmForEventStream:(id)arg0 completion:(id)arg1 ;
-(void)tearDown;


@end


#endif