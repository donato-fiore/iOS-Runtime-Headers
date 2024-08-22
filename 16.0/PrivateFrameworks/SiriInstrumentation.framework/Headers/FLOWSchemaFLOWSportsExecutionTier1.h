// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWSPORTSEXECUTIONTIER1_H
#define FLOWSCHEMAFLOWSPORTSEXECUTIONTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWSportsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *athleteEntities; // ivar: _athleteEntities
@property (copy, nonatomic) NSArray *eventEntities; // ivar: _eventEntities
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *leagues; // ivar: _leagues
@property (copy, nonatomic) NSArray *sportNames; // ivar: _sportNames
@property (copy, nonatomic) NSArray *teamEntities; // ivar: _teamEntities


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)leagueCount;
-(NSUInteger)sportNameCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)athleteEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)eventEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)leagueAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)teamEntitiesAtIndex:(NSUInteger)arg0 ;
-(int)sportNameAtIndex:(NSUInteger)arg0 ;
-(void)addAthleteEntities:(id)arg0 ;
-(void)addEventEntities:(id)arg0 ;
-(void)addLeague:(id)arg0 ;
-(void)addSportName:(int)arg0 ;
-(void)addTeamEntities:(id)arg0 ;
-(void)clearAthleteEntities;
-(void)clearEventEntities;
-(void)clearLeague;
-(void)clearSportName;
-(void)clearTeamEntities;
-(void)deleteAthleteEntities;
-(void)deleteEventEntities;
-(void)deleteLeague;
-(void)deleteSportName;
-(void)deleteTeamEntities;
-(void)writeTo:(id)arg0 ;


@end


#endif