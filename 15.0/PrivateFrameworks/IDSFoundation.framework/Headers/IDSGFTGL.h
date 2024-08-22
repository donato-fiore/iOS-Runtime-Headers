// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSGFTGL_H
#define IDSGFTGL_H

@class NSArray, NSMutableArray, NSData;


#import "IDSGlobalLink.h"

@interface IDSGFTGL : IDSGlobalLink {
    NSArray *_remoteCandidatePairs;
    NSMutableArray *_virtualCandidatePairs;
    BOOL _allowE2E;
    BOOL _keyMaterialReady;
    NSData *_keyMaterialData;
    id *_keyMaterialSentHandler;
}




-(BOOL)_postProcessAllocbindResponse:(id)arg0 candidatePair:(id)arg1 candidatePairToken:(id)arg2 ;
-(BOOL)_processRemovedLocalAddressList:(id)arg0 ;
-(BOOL)_setupNewQRLinkIfNecessary:(id)arg0 ;
-(NSInteger)_getQRAllocateType;
-(id)_findVirtualCandidatePair:(id)arg0 ;
-(void)_destroyVirtualRelayLinksForCandidatePair:(id)arg0 ;
-(void)_disableE2E;
-(void)_discardCandidatePairsWithOption:(BOOL)arg0 ;
-(void)_discardKeyMaterialMessage:(NSInteger)arg0 ;
-(void)_enableE2E;
-(void)_notifyDefaultUnderlyingLinkChanged:(id)arg0 error:(NSInteger)arg1 ;
-(void)_processCommandRelayInterfaceInfo:(id)arg0 candidatePairToken:(id)arg1 ;
-(void)_processReceivedRemoteCandidatePairs:(id)arg0 ;
-(void)_sendConnectionDataWithRemovedAddressList:(id)arg0 ;
-(void)_sendRelayInterfaceInfo:(id)arg0 ;
-(void)_setupVirtualCandidatePairs:(id)arg0 remoteCandidatePair:(id)arg1 ;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
-(void)enableUPlusOneSessionForTransition:(BOOL)arg0 ;
-(void)invalidate;
-(void)manageDesignatedDestinations:(id)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 withType:(unsigned short)arg3 sessionStateCounter:(unsigned int)arg4 ;
-(void)receiveJoinNotificationFromAParticipant;
-(void)removeParticipantIDs:(id)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 sessionStateCounter:(unsigned int)arg3 ;
-(void)sendKeyMaterialMessageData:(id)arg0 relayGroupID:(id)arg1 destinationURIs:(id)arg2 completionHandler:(id)arg3 ;
-(void)setDefaultUnderlyingLink:(char)arg0 ;
-(void)setIsUPlusOneSession:(BOOL)arg0 ;
-(void)setTimeBase:(id)arg0 ;
-(void)startWithOptions:(id)arg0 ;
-(void)updateURIToParticipantIDs:(id)arg0 relaySessionID:(id)arg1 sessionInfo:(id)arg2 ;


@end


#endif