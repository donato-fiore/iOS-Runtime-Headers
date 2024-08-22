// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTERQUERYSTARTED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTERQUERYSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"

@interface PLUSSchemaPLUSContactSuggesterQueryStarted : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasUsoPersonQuery; // ivar: _hasUsoPersonQuery
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOGraph *usoPersonQuery; // ivar: _usoPersonQuery


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteUsoPersonQuery;
-(void)writeTo:(id)arg0 ;


@end


#endif