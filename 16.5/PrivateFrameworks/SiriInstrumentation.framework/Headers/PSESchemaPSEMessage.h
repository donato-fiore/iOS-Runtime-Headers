// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSEMESSAGE_H
#define PSESCHEMAPSEMESSAGE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PSESchemaPSEMessage : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int contactMatch; // ivar: _contactMatch
@property (nonatomic) BOOL hasContactMatch;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) BOOL hasMessageUserFollowupAction;
@property (nonatomic) BOOL hasUserFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) BOOL hasUserInitiatedFollowup; // ivar: _hasUserInitiatedFollowup
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int messageUserFollowupAction; // ivar: _messageUserFollowupAction
@property (nonatomic) CGFloat userFollowupEventDonationTimeInSecondsSince2001; // ivar: _userFollowupEventDonationTimeInSecondsSince2001


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContactMatch;
-(void)deleteHasUserInitiatedFollowup;
-(void)deleteMessageUserFollowupAction;
-(void)deleteUserFollowupEventDonationTimeInSecondsSince2001;
-(void)writeTo:(id)arg0 ;


@end


#endif