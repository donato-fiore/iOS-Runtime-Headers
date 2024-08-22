// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RRSCHEMARRENTITYPOOLRESOLVEENDED_H
#define RRSCHEMARRENTITYPOOLRESOLVEENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int outcome; // ivar: _outcome
@property (copy, nonatomic) NSArray *queryResults; // ivar: _queryResults


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)queryResultsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addQueryResults:(id)arg0 ;
-(void)clearQueryResults;
-(void)deleteOutcome;
-(void)deleteQueryResults;
-(void)writeTo:(id)arg0 ;


@end


#endif