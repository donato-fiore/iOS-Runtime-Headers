// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAMANAGER_H
#define DAMANAGER_H

@class NSMutableSet, NSXPCConnection, NSString;

#import <Foundation/Foundation.h>


@interface DAManager : NSObject {
    NSMutableSet *_activeSessions;
    NSXPCConnection *_clientConnection;
    NSString *_serviceName;
}




+(BOOL)isSupported;
+(BOOL)updateHydraKey:(id)arg0 session:(id)arg1 seid:(id)arg2 encryptedSEData:(id)arg3 outError:(*id)arg4 ;
+(id)createHomeKey:(id)arg0 seid:(id)arg1 readerIdentifier:(id)arg2 readerPublicKey:(id)arg3 outError:(*id)arg4 ;
+(id)createHydraKey:(id)arg0 seid:(id)arg1 serverParameters:(id)arg2 outError:(*id)arg3 ;
+(id)getHydraEncryptionCert:(id)arg0 session:(id)arg1 seid:(id)arg2 outError:(*id)arg3 ;
+(id)sharedManager;
+(void)handleSharingMessage:(id)arg0 forInvitationIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id)arg3 ;
+(void)listKeysWithSession:(id)arg0 seid:(id)arg1 callback:(id)arg2 ;
+(void)rejectSharingInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(id)connection;
-(id)createManagementSessionWithDelegate:(id)arg0 ;
-(id)createPairingSessionWithDelegate:(id)arg0 ;
-(id)createSharingSessionWithDelegate:(id)arg0 ;
-(id)init;
-(void)registerCrossPlatformTestMessageOverIDSHandler:(id)arg0 ;
-(void)registerCrossPlatformTestMessageSendHandler:(id)arg0 ;
-(void)registerFriendSideInvitationUnusableHandler:(id)arg0 ;
-(void)registerFriendSidePasscodeRetryRequestTestHandler:(id)arg0 ;
-(void)registerFriendSideSharingTestCompletion:(id)arg0 ;
-(void)registerFriendSideSharingTestInvitationUUIDHandler:(id)arg0 ;
-(void)registerOwnerSideInvitationRequestHandler:(id)arg0 ;
-(void)registerOwnerSideSharingTestInvitations:(id)arg0 callback:(id)arg1 ;
-(void)registerSession:(id)arg0 ;
-(void)sendCrossPlatformTestData:(id)arg0 toIdsIdentifier:(id)arg1 ;
-(void)unregisterSession:(id)arg0 ;
-(void)unregisterSharingTestHandlers;


@end


#endif