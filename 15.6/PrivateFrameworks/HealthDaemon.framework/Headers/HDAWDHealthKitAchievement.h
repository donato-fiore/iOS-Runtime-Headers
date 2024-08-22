// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAWDHEALTHKITACHIEVEMENT_H
#define HDAWDHEALTHKITACHIEVEMENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDAWDHealthKitAchievement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int achievementType; // ivar: _achievementType
@property (nonatomic) NSInteger completedDate; // ivar: _completedDate
@property (retain, nonatomic) NSString *definitionIdentifier; // ivar: _definitionIdentifier
@property (nonatomic) BOOL hasAchievementType;
@property (nonatomic) BOOL hasCompletedDate;
@property (readonly, nonatomic) BOOL hasDefinitionIdentifier;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) NSInteger value; // ivar: _value
@property (nonatomic) int workoutActivityType; // ivar: _workoutActivityType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)achievementTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)workoutActivityTypeAsString:(int)arg0 ;
-(int)StringAsAchievementType:(id)arg0 ;
-(int)StringAsWorkoutActivityType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif