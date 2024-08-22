// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSGROUPSESSIONPARTICIPANTUPDATE_H
#define IDSGROUPSESSIONPARTICIPANTUPDATE_H

@class NSData, NSUUID, NSArray, NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionParticipantUpdate : NSObject

@property (readonly, nonatomic) NSData *clientContextData; // ivar: _clientContextData
@property (readonly, nonatomic) BOOL fromServer; // ivar: _fromServer
@property (readonly, nonatomic) NSUUID *groupUUID; // ivar: _groupUUID
@property (readonly, nonatomic) BOOL isInitiator; // ivar: _isInitiator
@property (readonly, nonatomic) NSArray *members; // ivar: _members
@property (readonly, nonatomic) NSData *participantData; // ivar: _participantData
@property (readonly, nonatomic) NSString *participantDestinationID; // ivar: _participantDestinationID
@property (readonly, nonatomic) NSDictionary *participantIDs; // ivar: _participantIDs
@property (readonly, nonatomic) NSUInteger participantIdentifier; // ivar: _participantIdentifier
@property (readonly, nonatomic) NSUInteger participantUpdateSubtype; // ivar: _participantUpdateSubtype
@property (readonly, nonatomic) NSUInteger participantUpdateType; // ivar: _participantUpdateType
@property (readonly, nonatomic) NSUUID *relaySessionID; // ivar: _relaySessionID
@property (readonly, nonatomic) NSDate *serverDate; // ivar: _serverDate


-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithGroupUUID:(id)arg0 isInitiator:(BOOL)arg1 participantIdentifier:(NSUInteger)arg2 participantDestinationID:(id)arg3 participantUpdateType:(NSUInteger)arg4 participantUpdateSubtype:(NSUInteger)arg5 fromServer:(BOOL)arg6 serverDate:(id)arg7 participantData:(id)arg8 clientContextData:(id)arg9 members:(id)arg10 participantIDs:(id)arg11 relaySessionID:(id)arg12 ;


@end


#endif