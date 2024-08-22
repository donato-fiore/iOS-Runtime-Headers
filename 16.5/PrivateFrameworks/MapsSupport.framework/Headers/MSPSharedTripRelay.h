// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSHAREDTRIPRELAY_H
#define MSPSHAREDTRIPRELAY_H

@class IDSService, NSString, NSMutableDictionary, NSArray;
@protocol IDSServiceDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripRelayDelegate;

#import <Foundation/Foundation.h>

#import "MSPSharedTripGroupSession.h"
#import "MSPSharedTripSharingIdentity.h"
#import "MSPSharedTripStorageController.h"

@interface MSPSharedTripRelay : NSObject <IDSServiceDelegate>

 {
    IDSService *_sharingService;
    NSString *_clientID;
    NSString *_displayName;
    MSPSharedTripGroupSession *_sharingETAGroupSession;
    NSMutableDictionary *_sharedTripGroupIDSSessions;
    NSMutableDictionary *_packetBuckets;
}


@property (readonly, nonatomic) NSArray *accountAliases;
@property (weak, nonatomic) NSObject<MSPSharedTripAvailabiltyDelegate> *availabilityDelegate; // ivar: _availabilityDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPSharedTripRelayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasValidIDSAccount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sharingHandle;
@property (readonly, nonatomic) MSPSharedTripSharingIdentity *sharingIdentity;
@property (readonly, nonatomic) NSString *sharingName;
@property (retain, nonatomic) MSPSharedTripStorageController *storageController; // ivar: _storageController
@property (readonly) Class superclass;


-(id)groupSessionForIdentifier:(id)arg0 ;
-(id)init;
-(id)removeSharingWith:(id)arg0 ;
-(id)startSharingGroupSessionWithTripIdentifer:(id)arg0 ;
-(void)_fetchDisplayName;
-(void)_handleChunk:(id)arg0 fromID:(id)arg1 receivingHandle:(id)arg2 receivingAccountIdentifier:(id)arg3 ;
-(void)_handleCommand:(id)arg0 fromID:(id)arg1 ;
-(void)_handleIncomingMessage:(id)arg0 info:(id)arg1 fromID:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4 ;
-(void)_removeFinishedSession:(id)arg0 ;
-(void)_startService;
-(void)dealloc;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 fromID:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 receivedGroupSessionParticipantUpdate:(id)arg2 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)stopSharing;


@end


#endif