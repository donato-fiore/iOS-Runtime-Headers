// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMAILUSERENGAGEMENT_H
#define AWDMAILUSERENGAGEMENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMailUserEngagement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsTopHitMessage;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) BOOL hasMessageAgeInWeeks;
@property (nonatomic) BOOL hasTopHitIndexInSpotlightList;
@property (nonatomic) BOOL hasTopHitIndexInTopHitsList;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isTopHitMessage; // ivar: _isTopHitMessage
@property (nonatomic) int mailboxType; // ivar: _mailboxType
@property (nonatomic) NSInteger messageAgeInWeeks; // ivar: _messageAgeInWeeks
@property (nonatomic) NSInteger topHitIndexInSpotlightList; // ivar: _topHitIndexInSpotlightList
@property (nonatomic) NSInteger topHitIndexInTopHitsList; // ivar: _topHitIndexInTopHitsList
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithEngagmentType:(int)arg0 ;
-(id)initWithEngagmentType:(int)arg0 isTopHit:(BOOL)arg1 ;
-(id)initWithEngagmentType:(int)arg0 message:(id)arg1 isTopHit:(BOOL)arg2 messageListIndex:(NSInteger)arg3 spotlightListIndex:(NSInteger)arg4 ;
-(id)initWithEngagmentType:(int)arg0 receivedDate:(id)arg1 mailboxType:(int)arg2 isTopHit:(BOOL)arg3 messageListIndex:(NSInteger)arg4 spotlightListIndex:(NSInteger)arg5 ;
-(id)mailboxTypeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsMailboxType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif