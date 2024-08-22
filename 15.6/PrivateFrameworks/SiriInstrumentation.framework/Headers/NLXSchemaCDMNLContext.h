// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMNLCONTEXT_H
#define NLXSCHEMACDMNLCONTEXT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMNLContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeTasks; // ivar: _activeTasks
@property (copy, nonatomic) NSArray *executedTasks; // ivar: _executedTasks
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *salientEntities; // ivar: _salientEntities
@property (copy, nonatomic) NSArray *systemDialogActs; // ivar: _systemDialogActs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeTasksAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)executedTasksAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)salientEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)systemDialogActsAtIndex:(NSUInteger)arg0 ;
-(void)addActiveTasks:(id)arg0 ;
-(void)addExecutedTasks:(id)arg0 ;
-(void)addSalientEntities:(id)arg0 ;
-(void)addSystemDialogActs:(id)arg0 ;
-(void)clearActiveTasks;
-(void)clearExecutedTasks;
-(void)clearSalientEntities;
-(void)clearSystemDialogActs;
-(void)deleteActiveTasks;
-(void)deleteExecutedTasks;
-(void)deleteSalientEntities;
-(void)deleteSystemDialogActs;
-(void)writeTo:(id)arg0 ;


@end


#endif