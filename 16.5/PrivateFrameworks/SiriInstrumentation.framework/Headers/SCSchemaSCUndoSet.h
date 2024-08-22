// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCSCHEMASCUNDOSET_H
#define SCSCHEMASCUNDOSET_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SCSchemaSCSetUndoArgs.h"

@interface SCSchemaSCUndoSet : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSetUndoArgs; // ivar: _hasSetUndoArgs
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SCSchemaSCSetUndoArgs *setUndoArgs; // ivar: _setUndoArgs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSetUndoArgs;
-(void)writeTo:(id)arg0 ;


@end


#endif