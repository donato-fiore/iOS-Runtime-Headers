// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODMSIRISCHEMAODMSIRICOUNTS_H
#define ODMSIRISCHEMAODMSIRICOUNTS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ODMSiriSchemaODMDynamicDimensions.h"
#import "ODMSiriSchemaODMSiriTaskCounts.h"

@interface ODMSiriSchemaODMSiriCounts : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMDynamicDimensions *dimensions; // ivar: _dimensions
@property (nonatomic) BOOL hasDimensions; // ivar: _hasDimensions
@property (nonatomic) BOOL hasTaskCounts; // ivar: _hasTaskCounts
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTaskCounts *taskCounts; // ivar: _taskCounts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDimensions;
-(void)deleteTaskCounts;
-(void)writeTo:(id)arg0 ;


@end


#endif