// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALNLCONTEXT_H
#define SIRINLUEXTERNALNLCONTEXT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALSystemDialogActGroup.h"

@interface SIRINLUEXTERNALNLContext : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *activeTasks; // ivar: _activeTasks
@property (retain, nonatomic) NSMutableArray *executedTasks; // ivar: _executedTasks
@property (readonly, nonatomic) BOOL hasSystemDialogActGroup;
@property (retain, nonatomic) NSMutableArray *salientEntities; // ivar: _salientEntities
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup; // ivar: _systemDialogActGroup
@property (retain, nonatomic) NSMutableArray *systemDialogActs; // ivar: _systemDialogActs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeTasksAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)executedTasksAtIndex:(NSUInteger)arg0 ;
-(id)salientEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)systemDialogActsAtIndex:(NSUInteger)arg0 ;
-(void)addActiveTasks:(id)arg0 ;
-(void)addExecutedTasks:(id)arg0 ;
-(void)addSalientEntities:(id)arg0 ;
-(void)addSystemDialogActs:(id)arg0 ;
-(void)clearActiveTasks;
-(void)clearExecutedTasks;
-(void)clearSalientEntities;
-(void)clearSystemDialogActs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif