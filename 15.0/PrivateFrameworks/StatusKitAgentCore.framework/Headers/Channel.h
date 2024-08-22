// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHANNEL_H
#define CHANNEL_H

@class NSManagedObject, NSData, NSDate, NSSet, NSString;



@interface Channel : NSManagedObject

@property (retain, nonatomic) NSData *channelToken;
@property (retain, nonatomic) NSData *currentOutgoingRatchetState;
@property (copy, nonatomic) NSDate *dateChannelCreated;
@property (nonatomic) BOOL decomissioned;
@property (retain, nonatomic) NSSet *generatedEncryptionKeys;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *invitedUsers;
@property (nonatomic) BOOL personal;
@property (retain, nonatomic) NSSet *receivedInvitations;
@property (copy, nonatomic) NSString *statusType;


+(id)encryptionKeysKeyPath;
+(id)fetchRequest;
+(id)predicateForChannelIdentifier:(id)arg0 ;
+(id)predicateForCreationDateNotNil;
+(id)predicateForDecomissioned:(BOOL)arg0 ;
+(id)predicateForPersonal:(BOOL)arg0 ;
+(id)predicateForStatusTypeIdentifier:(id)arg0 ;
+(id)sortDescriptorForChannelIdentifierOrderedAscending:(BOOL)arg0 ;
+(id)sortDescriptorForCreationDateAscending:(BOOL)arg0 ;
+(id)sortDescriptorForPersonalOrderedAscending:(BOOL)arg0 ;
+(id)sortDescriptorForStatusTypeIdentifierOrderedAscending:(BOOL)arg0 ;


@end


#endif