// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTERQUERYSTARTED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTERQUERYSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"

@interface PLUSSchemaPLUSContactSuggesterQueryStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int domain; // ivar: _domain
@property (nonatomic) BOOL hasDomain;
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
-(void)deleteDomain;
-(void)deleteUsoPersonQuery;
-(void)writeTo:(id)arg0 ;


@end


#endif