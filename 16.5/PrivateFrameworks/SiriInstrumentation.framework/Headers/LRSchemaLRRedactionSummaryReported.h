// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRSCHEMALRREDACTIONSUMMARYREPORTED_H
#define LRSCHEMALRREDACTIONSUMMARYREPORTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface LRSchemaLRRedactionSummaryReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHasRedactedEvents;
@property (nonatomic) BOOL hasRedactedEvents; // ivar: _hasRedactedEvents
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *redactionWindows; // ivar: _redactionWindows


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)redactionWindowsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addRedactionWindows:(id)arg0 ;
-(void)clearRedactionWindows;
-(void)deleteHasRedactedEvents;
-(void)deleteRedactionWindows;
-(void)writeTo:(id)arg0 ;


@end


#endif