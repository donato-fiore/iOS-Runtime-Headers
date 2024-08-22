// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPSESSION_H
#define IDSGROUPSESSION_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>

#import "_IDSGroupSession.h"

@interface IDSGroupSession : NSObject {
    _IDSGroupSession *_internal;
}


@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSSet *requiredCapabilities;
@property (readonly, nonatomic) NSSet *requiredLackOfCapabilities;
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) NSString *sessionID;


+(id)augmentNetworkParametersForSession:(id)arg0 participantID:(NSUInteger)arg1 parameters:(id)arg2 ;
+(id)augmentNetworkParametersForSessionAlias:(id)arg0 participantIDAlias:(NSUInteger)arg1 salt:(id)arg2 parameters:(id)arg3 ;
+(id)createEndpointForSessionIDAlias:(id)arg0 topic:(id)arg1 participantIDAlias:(NSUInteger)arg2 salt:(id)arg3 ;
+(id)createGroupDescriptorForSessionIDAlias:(id)arg0 topic:(id)arg1 salt:(id)arg2 ;
+(id)keyValueDeliveryForSessionID:(id)arg0 ;
+(void)augmentConnectionGroupNetworkParameters:(id)arg0 ;
+(void)requestNWConnectionWithDataBlob:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestNWConnectionforIDSGroupSessionBroadcastParameter:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)arg0 withCompletionHandler:(id)arg1 ;
-(NSUInteger)createAliasForLocalParticipantIDWithSalt:(id)arg0 ;
-(NSUInteger)createAliasForParticipantID:(NSUInteger)arg0 salt:(id)arg1 ;
-(NSUInteger)participantIDForAlias:(NSUInteger)arg0 salt:(id)arg1 ;
-(id)_internal;
-(id)_internal_sessionWithValidityCheck;
-(id)broadcastParameterForService:(id)arg0 ;
-(id)initWithAccount:(id)arg0 destinations:(id)arg1 options:(id)arg2 ;
-(id)initWithAccount:(id)arg0 options:(id)arg1 ;
-(id)keyValueDelivery;
-(id)sessionIDAliasWithSalt:(id)arg0 ;
-(id)unicastConnectorWithDataMode:(NSInteger)arg0 ;
-(id)unicastParameterForParticipantID:(NSUInteger)arg0 dataMode:(NSInteger)arg1 connectionIndex:(NSUInteger)arg2 ;
-(id)unicastParameterForParticipantIDAlias:(NSUInteger)arg0 salt:(id)arg1 dataMode:(NSInteger)arg2 connectionIndex:(NSUInteger)arg3 ;
-(unsigned int)state;
-(void)createAliasForLocalParticipantIDWithSalt:(id)arg0 completionHandler:(id)arg1 ;
-(void)createAliasForParticipantID:(NSUInteger)arg0 salt:(id)arg1 completionHandler:(id)arg2 ;
-(void)createSessionIDAliasWithSalt:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)getParticipantIDForAlias:(NSUInteger)arg0 salt:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)joinWithOptions:(id)arg0 ;
-(void)leaveGroupSession;
-(void)manageDesignatedMembers:(id)arg0 withType:(unsigned short)arg1 ;
-(void)reconnectUPlusOneSession;
-(void)registerPluginWithOptions:(id)arg0 ;
-(void)removeParticipants:(id)arg0 ;
-(void)requestActiveParticipants;
-(void)requestDataBlobForParticipantIDs:(id)arg0 ;
-(void)requestDataCryptorForTopic:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestEncryptionKeyForParticipants:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setParticipantInfo:(id)arg0 ;
-(void)setPreferences:(id)arg0 ;
-(void)unregisterPluginWithOptions:(id)arg0 ;
-(void)updateMembers:(id)arg0 withContext:(id)arg1 messagingCapabilities:(id)arg2 triggeredLocally:(BOOL)arg3 ;
-(void)updateMembers:(id)arg0 withContext:(id)arg1 triggeredLocally:(BOOL)arg2 ;
-(void)updateParticipantData:(id)arg0 withContext:(id)arg1 ;
-(void)updateParticipantType:(unsigned short)arg0 members:(id)arg1 withContext:(id)arg2 triggeredLocally:(BOOL)arg3 ;


@end


#endif