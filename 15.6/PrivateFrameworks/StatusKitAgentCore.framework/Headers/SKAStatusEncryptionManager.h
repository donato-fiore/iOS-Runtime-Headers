// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKASTATUSENCRYPTIONMANAGER_H
#define SKASTATUSENCRYPTIONMANAGER_H

@class NSString;
@protocol SKAStatusEncryptionManaging, SKADatabaseManaging, SKAInvitationManaging;

#import <Foundation/Foundation.h>


@interface SKAStatusEncryptionManager : NSObject <SKAStatusEncryptionManaging>



@property (readonly, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SKAInvitationManaging> *invitationManager; // ivar: _invitationManager
@property (readonly) Class superclass;


+(id)logger;
-(id)_decryptPayload:(id)arg0 withRatchetIndex:(unsigned short)arg1 signatureData:(id)arg2 channel:(id)arg3 ;
-(id)_decryptPayloadData:(id)arg0 withIncomingRatchet:(id)arg1 withRatchetIndex:(unsigned short)arg2 signatureData:(id)arg3 ;
-(id)_deserializeBinaryPlistDictionaryData:(id)arg0 ;
-(id)_encryptPayload:(id)arg0 channel:(id)arg1 ;
-(id)_mostRecentIncomingRatchetForChannel:(id)arg0 ;
-(id)_serializeDictionaryAsBinaryPlist:(id)arg0 ;
-(id)decryptStatusPayloadFromStatusEnvelopeData:(id)arg0 channel:(id)arg1 ;
-(id)encodeStatusPayload:(id)arg0 statusUniqueIdentifier:(id)arg1 dateCreated:(id)arg2 currentServerTime:(id)arg3 channel:(id)arg4 ;
-(id)encryptionValidationTokenForChannel:(id)arg0 ;
-(id)extractEnvelopeFromStatusEnvelopeData:(id)arg0 ;
-(id)initWithDatabaseManager:(id)arg0 invitationManager:(id)arg1 ;


@end


#endif