// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMTASK_H
#define NLXSCHEMACDMTASK_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMTask : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasTask; // ivar: _hasTask
@property (nonatomic) BOOL hasTaskId; // ivar: _hasTaskId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) USOSchemaUSOGraph *task; // ivar: _task
@property (retain, nonatomic) SISchemaUUID *taskId; // ivar: _taskId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteScore;
-(void)deleteTask;
-(void)deleteTaskId;
-(void)writeTo:(id)arg0 ;


@end


#endif