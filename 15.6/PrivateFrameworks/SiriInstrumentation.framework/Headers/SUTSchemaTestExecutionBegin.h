// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUTSCHEMATESTEXECUTIONBEGIN_H
#define SUTSCHEMATESTEXECUTIONBEGIN_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SUTSchemaTestContext.h"

@interface SUTSchemaTestExecutionBegin : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SUTSchemaTestContext *context; // ivar: _context
@property (nonatomic) BOOL hasContext; // ivar: _hasContext
@property (nonatomic) BOOL hasShouldPersistData;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL shouldPersistData; // ivar: _shouldPersistData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContext;
-(void)deleteShouldPersistData;
-(void)writeTo:(id)arg0 ;


@end


#endif