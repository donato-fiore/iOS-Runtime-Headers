// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAMULTIUSERSETUP_H
#define SISCHEMAMULTIUSERSETUP_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaMultiUserSetup : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNumGuestsAccepted;
@property (nonatomic) BOOL hasNumParticipantsWithTrust;
@property (nonatomic) BOOL hasNumUsersWhoSyncedRecognizeMyVoice;
@property (nonatomic) BOOL hasNumUsersWithRecognizeMyVoiceEnabled;
@property (nonatomic) BOOL hasNumVoiceProfilesAvailable;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numGuestsAccepted; // ivar: _numGuestsAccepted
@property (nonatomic) unsigned int numParticipantsWithTrust; // ivar: _numParticipantsWithTrust
@property (nonatomic) unsigned int numUsersWhoSyncedRecognizeMyVoice; // ivar: _numUsersWhoSyncedRecognizeMyVoice
@property (nonatomic) unsigned int numUsersWithRecognizeMyVoiceEnabled; // ivar: _numUsersWithRecognizeMyVoiceEnabled
@property (nonatomic) unsigned int numVoiceProfilesAvailable; // ivar: _numVoiceProfilesAvailable


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteNumGuestsAccepted;
-(void)deleteNumParticipantsWithTrust;
-(void)deleteNumUsersWhoSyncedRecognizeMyVoice;
-(void)deleteNumUsersWithRecognizeMyVoiceEnabled;
-(void)deleteNumVoiceProfilesAvailable;
-(void)writeTo:(id)arg0 ;


@end


#endif