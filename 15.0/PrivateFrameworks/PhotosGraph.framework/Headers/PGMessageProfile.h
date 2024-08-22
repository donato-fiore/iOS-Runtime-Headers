// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMESSAGEPROFILE_H
#define PGMESSAGEPROFILE_H

@class NSMutableDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PGManager.h"

@interface PGMessageProfile : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *addressMentionsByContactIdentifier; // ivar: _addressMentionsByContactIdentifier
@property (readonly, nonatomic) NSMutableDictionary *cnIdentifiersByChatIdentifier; // ivar: _cnIdentifiersByChatIdentifier
@property (readonly, nonatomic) NSSet *groupChatIdentifiers; // ivar: _groupChatIdentifiers
@property (retain, nonatomic) PGManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSMutableDictionary *numberOfLoveEmojisByPersonLocalIdentifier; // ivar: _numberOfLoveEmojisByPersonLocalIdentifier
@property (retain, nonatomic) NSMutableDictionary *numberOfMessagesPerChatIdentifier; // ivar: _numberOfMessagesPerChatIdentifier
@property (readonly, nonatomic) NSMutableDictionary *personalChatIdentifierByContactIdentifier; // ivar: _personalChatIdentifierByContactIdentifier
@property (readonly, nonatomic) NSSet *personalChatIdentifiers; // ivar: _personalChatIdentifiers


+(BOOL)supportsSecureCoding;
+(id)persistedMessageProfileWithManager:(id)arg0 ;
-(BOOL)persistOnDisk;
-(NSUInteger)numberOfMessageGroupChats;
-(id)_dictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupChatIdentifiers:(id)arg0 personalChatIdentifiers:(id)arg1 personsByChatIdentifier:(id)arg2 manager:(id)arg3 ;
-(id)numberOfMessagesByContactIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateContactIdentifiersAndMentionedAddressesUsingBlock:(id)arg0 ;
// -(void)enumerateMessageGroupsWithProgressBlock:(id)arg0 usingBlock:(unk)arg1  ;
// -(void)enumeratePersonLocalIdentifiersExchangingLoveEmojisWithProgressBlock:(id)arg0 usingBlock:(unk)arg1  ;
-(void)registerLoveEmoji:(NSUInteger)arg0 forPersonLocalIdentifier:(id)arg1 ;
-(void)registerMentionedLocation:(id)arg0 contactIdentifier:(id)arg1 onDate:(id)arg2 ;
-(void)registerMessageForChatIdentifier:(id)arg0 ;


@end


#endif