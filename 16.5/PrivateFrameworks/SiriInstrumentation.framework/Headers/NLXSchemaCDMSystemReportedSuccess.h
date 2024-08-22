// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMSYSTEMREPORTEDSUCCESS_H
#define NLXSCHEMACDMSYSTEMREPORTEDSUCCESS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMSystemReportedSuccess : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasTask; // ivar: _hasTask
@property (nonatomic) BOOL hasTaskId; // ivar: _hasTaskId
@property (readonly, nonatomic) NSData *jsonData;
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
-(void)deleteTask;
-(void)deleteTaskId;
-(void)writeTo:(id)arg0 ;


@end


#endif