// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHARINGIDSMANAGER_H
#define PKSHARINGIDSMANAGER_H

@class NSHashTable, NSMutableDictionary, IDSService, NSString, NSArray;
@protocol IDSServiceDelegate, OS_dispatch_queue, PKSharingIDSManagerDataSource;

#import <Foundation/Foundation.h>


@interface PKSharingIDSManager : NSObject <IDSServiceDelegate>

 {
    NSHashTable *_delegates;
    os_unfair_lock_s _delegatesLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_sharingDestinations;
    IDSService *_service;
}


@property (weak, nonatomic) NSObject<PKSharingIDSManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canPerformIDSMessageForSharingGroup:(NSUInteger)arg0 handleUserDetails:(id)arg1 currentUserDetails:(id)arg2 error:(*id)arg3 ;
-(id)_handlerConfigurationForInvitation:(id)arg0 forHandle:(id)arg1 ;
-(id)_idsIDForHandle:(id)arg0 ;
-(id)_primaryAppleIDSharingDestination:(id)arg0 ;
-(id)_sanitizedHande:(id)arg0 ;
-(id)_sanitizedHandleWithFromID:(id)arg0 ;
-(id)init;
-(id)initWithIDSService:(id)arg0 ;
-(id)initWithTargetQueue:(id)arg0 ;
-(void)_cloudStoreZoneShareInvitationRequestInvitationData:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_cloudStoreZoneShareInvitationRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_cloudStoreZoneShareInvitationRequestRemoved:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_cloudStoreZoneShareInvitationResponseReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_deviceSharingCapabilitiesRequestResultReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_deviceSharingCapabiltiesRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_registerListeners;
-(void)_remoteRegistrationRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_remoteRegistrationRequestResultReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_sendCloudStoreInvitationRequest:(id)arg0 handleUserDetails:(id)arg1 currentUserDetails:(id)arg2 type:(unsigned short)arg3 completion:(id)arg4 ;
-(void)_sendMessageWithProtobuf:(id)arg0 destination:(id)arg1 handleUserDetails:(id)arg2 currentUserDetails:(id)arg3 completion:(id)arg4 ;
-(void)_sharingDestinationForHandles:(id)arg0 completion:(id)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)removeCloudStoreZoneInvitation:(id)arg0 forHandle:(id)arg1 completion:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
-(void)requestCloudStoreZoneInvitationData:(id)arg0 forHandle:(id)arg1 completion:(id)arg2 ;
-(void)sendCloudStoreZoneInvitation:(id)arg0 forHandle:(id)arg1 invitationError:(id)arg2 completion:(id)arg3 ;
-(void)sendCloudStoreZoneInvitationResponse:(id)arg0 completion:(id)arg1 ;
-(void)sendDeviceSharingCapabilitiesRequestForHandle:(id)arg0 completion:(id)arg1 ;
-(void)sendRemoteRegistrationRequest:(id)arg0 forHandle:(id)arg1 completion:(id)arg2 ;
-(void)sendRemoteRegistrationRequestResult:(NSUInteger)arg0 forHandle:(id)arg1 completion:(id)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif