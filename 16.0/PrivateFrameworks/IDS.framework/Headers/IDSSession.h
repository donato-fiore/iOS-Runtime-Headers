// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSESSION_H
#define IDSSESSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_IDSSession.h"

@interface IDSSession : NSObject {
    _IDSSession *_internal;
    os_unfair_lock_s _uniqueIDLock;
}


@property (readonly, nonatomic) NSString *destination;
@property (nonatomic) NSInteger invitationTimeOut;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isMuted;
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) int socket;
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(BOOL)sendData:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldUseSocketForTransport;
-(NSUInteger)MTUForAddressFamily:(NSUInteger)arg0 ;
-(NSUInteger)initialLinkType;
-(id)_initWithAccount:(id)arg0 destinations:(id)arg1 transportType:(NSInteger)arg2 uniqueID:(id)arg3 ;
-(id)_internal;
-(id)_streamPreferences;
-(id)description;
-(id)initWithAccount:(id)arg0 destinations:(id)arg1 options:(id)arg2 ;
-(id)initWithAccount:(id)arg0 destinations:(id)arg1 transportType:(NSInteger)arg2 ;
-(unsigned int)state;
-(void)acceptInvitation;
-(void)acceptInvitationWithData:(id)arg0 ;
-(void)cancelInvitation;
-(void)cancelInvitationWithData:(id)arg0 ;
-(void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg0 ;
-(void)dealloc;
-(void)declineInvitation;
-(void)declineInvitationWithData:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithData:(id)arg0 ;
-(void)reconnectSession;
-(void)sendAllocationRequest:(id)arg0 ;
-(void)sendInvitation;
-(void)sendInvitationWithData:(id)arg0 ;
-(void)sendInvitationWithData:(id)arg0 declineOnError:(BOOL)arg1 ;
-(void)sendInvitationWithOptions:(id)arg0 ;
-(void)sendSessionMessage:(id)arg0 ;
-(void)sendSessionMessage:(id)arg0 toDestinations:(id)arg1 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setPreferences:(id)arg0 ;
-(void)setStreamPreferences:(id)arg0 ;


@end


#endif