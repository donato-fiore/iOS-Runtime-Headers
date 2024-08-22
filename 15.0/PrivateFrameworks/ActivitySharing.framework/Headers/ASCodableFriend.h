// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCODABLEFRIEND_H
#define ASCODABLEFRIEND_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "ASCodableContact.h"

@interface ASCodableFriend : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *achievements; // ivar: _achievements
@property (retain, nonatomic) NSMutableArray *competitions; // ivar: _competitions
@property (retain, nonatomic) ASCodableContact *contact; // ivar: _contact
@property (readonly, nonatomic) BOOL hasContact;
@property (retain, nonatomic) NSMutableArray *snapshots; // ivar: _snapshots
@property (retain, nonatomic) NSMutableArray *workouts; // ivar: _workouts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)achievementsAtIndex:(NSUInteger)arg0 ;
-(id)competitionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)snapshotsAtIndex:(NSUInteger)arg0 ;
-(id)workoutsAtIndex:(NSUInteger)arg0 ;
-(void)addAchievements:(id)arg0 ;
-(void)addCompetitions:(id)arg0 ;
-(void)addSnapshots:(id)arg0 ;
-(void)addWorkouts:(id)arg0 ;
-(void)clearAchievements;
-(void)clearCompetitions;
-(void)clearSnapshots;
-(void)clearWorkouts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif