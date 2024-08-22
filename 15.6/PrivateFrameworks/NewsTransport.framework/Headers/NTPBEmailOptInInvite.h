// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBEMAILOPTININVITE_H
#define NTPBEMAILOPTININVITE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBEmailOptInInvite : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int emailOptInInviteLocation; // ivar: _emailOptInInviteLocation
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasEmailOptInInviteLocation;
@property (nonatomic) BOOL hasNewsletterSubscriptionType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int newsletterSubscriptionType; // ivar: _newsletterSubscriptionType
@property (retain, nonatomic) NSString *parentFeedId; // ivar: _parentFeedId
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (nonatomic) int userAction; // ivar: _userAction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parentFeedTypeAsString:(int)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif