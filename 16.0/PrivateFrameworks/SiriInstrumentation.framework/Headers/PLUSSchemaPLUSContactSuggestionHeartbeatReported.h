// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTIONHEARTBEATREPORTED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTIONHEARTBEATREPORTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSContactSuggestionHeartbeatReported : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *suggestionSummaries; // ivar: _suggestionSummaries


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suggestionSummariesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addSuggestionSummaries:(id)arg0 ;
-(void)clearSuggestionSummaries;
-(void)deleteSuggestionSummaries;
-(void)writeTo:(id)arg0 ;


@end


#endif