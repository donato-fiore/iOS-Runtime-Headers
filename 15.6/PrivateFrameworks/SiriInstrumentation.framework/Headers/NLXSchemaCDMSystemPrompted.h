// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMSYSTEMPROMPTED_H
#define NLXSCHEMACDMSYSTEMPROMPTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMSystemPrompted : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasTarget; // ivar: _hasTarget
@property (nonatomic) BOOL hasTaskId; // ivar: _hasTaskId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOGraph *target; // ivar: _target
@property (retain, nonatomic) SISchemaUUID *taskId; // ivar: _taskId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteTarget;
-(void)deleteTaskId;
-(void)writeTo:(id)arg0 ;


@end


#endif