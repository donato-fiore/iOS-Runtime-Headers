// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSESSIONMANAGER_H
#define CPSESSIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol CPSessionManagerDelegate;

#import <Foundation/Foundation.h>


@interface CPSessionManager : NSObject {
    NSString *_selfUserCreatedSessionID;
    NSString *_activeSessionID;
    NSMutableDictionary *_sessions;
}


@property (weak, nonatomic) NSObject<CPSessionManagerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *selfAccountID; // ivar: _selfAccountID


-(id)_simpleDescription;
-(id)activeSession;
-(id)initWithAccountID:(id)arg0 ;
-(id)listReceivedSessionInvites;
-(id)selfCreatedSession:(id)arg0 inviteeAccountIDs:(id)arg1 ;
-(id)sessionInviteFor:(id)arg0 ;
-(void)_applySessionMemberStateUpdate:(id)arg0 accountID:(id)arg1 state:(unsigned char)arg2 checkGC:(BOOL)arg3 ;
-(void)_attemptGarbageCollectSession:(id)arg0 ;
-(void)applySessionMemberStateUpdate:(id)arg0 accountID:(id)arg1 state:(unsigned char)arg2 ;
-(void)receivedInviteForSession:(id)arg0 invitedByAccountID:(id)arg1 withInviteeAccountIDs:(id)arg2 ;
-(void)selfAcceptedSession:(id)arg0 ;
-(void)selfLeftSession:(id)arg0 ;
-(void)selfSentInvitesFor:(id)arg0 toInviteeAccountIDs:(id)arg1 ;


@end


#endif