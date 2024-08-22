// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCONNECTION_H
#define GKCONNECTION_H


#import <Foundation/Foundation.h>


@interface GKConnection : NSObject {
    *? _event;
    unsigned int _pid;
}


@property id *eventDelegate;
@property (nonatomic) *opaqueRTCReporting reportingAgent;


+(BOOL)isRelayEnabled;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)externalAddressForCDXSelfConnectionData:(id)arg0 ;
+(id)externalAddressForSelfConnectionData:(id)arg0 ;
-(BOOL)convertParticipantID:(id)arg0 toPeerID:(*id)arg1 ;
-(BOOL)convertPeerID:(id)arg0 toParticipantID:(*id)arg1 ;
-(id)getLocalConnectionDataForLocalGaming;
-(id)initWithParticipantID:(id)arg0 ;
-(id)networkStatistics;
-(id)networkStatisticsDictionaryForGCKStats:(*void)arg0 ;
-(struct OpaqueGCKSession *)gckSession;
-(unsigned int)gckPID;
-(void)cancelConnectParticipant:(id)arg0 ;
-(void)connect;
-(void)connectParticipantsWithConnectionData:(id)arg0 withSessionInfo:(id)arg1 ;
-(void)getLocalConnectionDataWithCompletionHandler:(id)arg0 ;
-(void)initiateRelayWithParticipant:(id)arg0 withConnectionData:(id)arg1 withRelayInfo:(id)arg2 didInitiate:(BOOL)arg3 ;
-(void)preRelease;
-(void)setParticipantID:(id)arg0 forPeerID:(id)arg1 ;
-(void)updateRelayWithParticipant:(id)arg0 withConnectionData:(id)arg1 withRelayInfo:(id)arg2 didInitiate:(BOOL)arg3 ;


@end


#endif