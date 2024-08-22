// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCOMMLIMITSPOLICYCACHE_H
#define IMCOMMLIMITSPOLICYCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMCommLimitsPolicyCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *chatIdentifierToParticipantIDsHash; // ivar: _chatIdentifierToParticipantIDsHash
@property (retain, nonatomic) NSMutableDictionary *conversationContextToParticipantIDsHash; // ivar: _conversationContextToParticipantIDsHash
@property (retain, nonatomic) NSMutableDictionary *participantIDsHashToChatIdentifier; // ivar: _participantIDsHashToChatIdentifier
@property (retain, nonatomic) NSMutableDictionary *participantIDsHashToConversationContext; // ivar: _participantIDsHashToConversationContext


-(BOOL)isFetchingCommLimitsPolicyForChat:(id)arg0 ;
-(id)chatForConversationContext:(id)arg0 ;
-(id)chatForParticipantIDsHash:(id)arg0 ;
-(id)contextForParticipantIDsHash:(id)arg0 ;
-(id)conversationContextForChat:(id)arg0 ;
-(id)init;
-(void)addSentinelContextForParticipantIDsHash:(id)arg0 ;
-(void)addTrackingForChat:(id)arg0 participantIDsHash:(id)arg1 ;
-(void)addTrackingForConversationContext:(id)arg0 forParticipantIDsHash:(id)arg1 ;
-(void)removeTrackingForChat:(id)arg0 ;


@end


#endif