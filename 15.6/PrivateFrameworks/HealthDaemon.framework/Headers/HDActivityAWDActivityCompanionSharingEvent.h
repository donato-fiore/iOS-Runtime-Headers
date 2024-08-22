// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDACTIVITYAWDACTIVITYCOMPANIONSHARINGEVENT_H
#define HDACTIVITYAWDACTIVITYCOMPANIONSHARINGEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface HDActivityAWDActivityCompanionSharingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxFriendDuration;
@property (nonatomic) BOOL hasMedianFriendDuration;
@property (nonatomic) BOOL hasMinFriendDuration;
@property (nonatomic) BOOL hasNumberOfFriends;
@property (nonatomic) BOOL hasNumberOfFriendsAwaitingResponse;
@property (nonatomic) BOOL hasNumberOfFriendsHiddenFromMe;
@property (nonatomic) BOOL hasNumberOfFriendsMuted;
@property (nonatomic) BOOL hasNumberOfFriendsMyDataHidden;
@property (nonatomic) BOOL hasNumberOfFriendsPendingMyResponse;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int maxFriendDuration; // ivar: _maxFriendDuration
@property (nonatomic) int medianFriendDuration; // ivar: _medianFriendDuration
@property (nonatomic) int minFriendDuration; // ivar: _minFriendDuration
@property (nonatomic) NSInteger numberOfFriends; // ivar: _numberOfFriends
@property (nonatomic) NSInteger numberOfFriendsAwaitingResponse; // ivar: _numberOfFriendsAwaitingResponse
@property (nonatomic) NSInteger numberOfFriendsHiddenFromMe; // ivar: _numberOfFriendsHiddenFromMe
@property (nonatomic) NSInteger numberOfFriendsMuted; // ivar: _numberOfFriendsMuted
@property (nonatomic) NSInteger numberOfFriendsMyDataHidden; // ivar: _numberOfFriendsMyDataHidden
@property (nonatomic) NSInteger numberOfFriendsPendingMyResponse; // ivar: _numberOfFriendsPendingMyResponse
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)maxFriendDurationAsString:(int)arg0 ;
-(id)medianFriendDurationAsString:(int)arg0 ;
-(id)minFriendDurationAsString:(int)arg0 ;
-(int)StringAsMaxFriendDuration:(id)arg0 ;
-(int)StringAsMedianFriendDuration:(id)arg0 ;
-(int)StringAsMinFriendDuration:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif