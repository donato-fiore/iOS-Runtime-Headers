// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCODABLEBULLETIN_H
#define ASCODABLEBULLETIN_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface ASCodableBulletin : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *achievementData; // ivar: _achievementData
@property (nonatomic) NSInteger competitionStage; // ivar: _competitionStage
@property (retain, nonatomic) NSData *friendListData; // ivar: _friendListData
@property (retain, nonatomic) NSString *friendUUID; // ivar: _friendUUID
@property (readonly, nonatomic) BOOL hasAchievementData;
@property (nonatomic) BOOL hasCompetitionStage;
@property (readonly, nonatomic) BOOL hasFriendListData;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (readonly, nonatomic) BOOL hasSnapshotData;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasWorkoutData;
@property (retain, nonatomic) NSData *snapshotData; // ivar: _snapshotData
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSData *workoutData; // ivar: _workoutData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif