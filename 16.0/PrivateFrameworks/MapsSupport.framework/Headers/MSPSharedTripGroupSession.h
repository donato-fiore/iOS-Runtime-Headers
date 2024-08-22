// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPSHAREDTRIPGROUPSESSION_H
#define MSPSHAREDTRIPGROUPSESSION_H

@class NSString, NSMutableSet, IDSService, NSArray;
@protocol OS_os_transaction, MSPSharedTripGroupSessionDelegate;

#import <Foundation/Foundation.h>


@interface MSPSharedTripGroupSession : NSObject {
    BOOL _joined;
    NSString *_joinedFromHandle;
    NSString *_joinedFromAccountIdentifier;
    BOOL _initiator;
    NSString *_groupID;
    NSUInteger _nbClients;
    NSMutableSet *_liveModeParticipantIdentifiers;
    IDSService *_sharingIDSService;
    NSMutableSet *_identifiers;
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, nonatomic) NSArray *accountIdentifiers;
@property (weak, nonatomic) NSObject<MSPSharedTripGroupSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL inLiveMode;
@property (copy, nonatomic) NSString *initiatorDisplayName; // ivar: _initiatorDisplayName
@property (readonly, nonatomic) NSString *initiatorIdentifier; // ivar: _initiatorIdentifier


-(BOOL)_joinLiveModeFromHandle:(id)arg0 fromAccountID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_leaveLiveMode:(*id)arg0 ;
-(BOOL)_sendChunkMessage:(id)arg0 to:(id)arg1 packet:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(BOOL)_validParticipant:(id)arg0 ;
-(BOOL)joinLiveModeFromHandle:(id)arg0 fromAccountID:(id)arg1 error:(*id)arg2 ;
-(BOOL)leaveLiveModeForced:(*id)arg0 ;
-(BOOL)leaveLiveModeIfNeeded:(*id)arg0 ;
-(BOOL)sendChunkedMessage:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(BOOL)sendChunkedMessage:(id)arg0 to:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)sendCommand:(id)arg0 fromHandle:(id)arg1 fromAccountID:(id)arg2 error:(*id)arg3 ;
-(BOOL)sessionIsAliveAfterRemovingSharingIdentifiers:(id)arg0 ;
-(id)_currentRoutePath;
-(id)initWithService:(id)arg0 groupID:(id)arg1 initiator:(BOOL)arg2 initiatorIdentifier:(id)arg3 ;
-(void)_sharingEnded;
-(void)_sharingEndedWithError:(id)arg0 ;
-(void)addSharingWith:(id)arg0 ;
-(void)dealloc;
-(void)participantDidJoin:(id)arg0 ;
-(void)participantDidLeave:(id)arg0 ;


@end


#endif