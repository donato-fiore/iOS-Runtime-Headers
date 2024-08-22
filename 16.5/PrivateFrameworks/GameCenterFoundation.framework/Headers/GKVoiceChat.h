// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKVOICECHAT_H
#define GKVOICECHAT_H

@class GKVoiceChatSession, NSString, NSArray;
@protocol GKVoiceChatSessionDelegate;

#import <Foundation/Foundation.h>

#import "GKSession.h"

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate>



@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) GKSession *gkSession; // ivar: _gkSession
@property (retain, nonatomic) GKVoiceChatSession *gkVoiceChatSession; // ivar: _gkVoiceChatSession
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) id *playerStateUpdateHandler; // ivar: _playerStateUpdateHandler
@property (copy, nonatomic) id *playerVoiceChatStateDidChangeHandler; // ivar: _playerVoiceChatStateDidChangeHandler
@property (retain, nonatomic) NSArray *players; // ivar: _players
@property (nonatomic) float volume;


+(BOOL)isVoIPAllowed;
-(id)initChat:(id)arg0 withSession:(id)arg1 players:(id)arg2 ;
-(id)playerIDs;
-(void)dealloc;
-(void)gkVoiceChatSession:(id)arg0 stateUpdate:(NSUInteger)arg1 forPeer:(id)arg2 ;
-(void)setMute:(BOOL)arg0 forPlayer:(id)arg1 ;
-(void)setPlayer:(id)arg0 muted:(BOOL)arg1 ;
-(void)start;
-(void)stop;


@end


#endif