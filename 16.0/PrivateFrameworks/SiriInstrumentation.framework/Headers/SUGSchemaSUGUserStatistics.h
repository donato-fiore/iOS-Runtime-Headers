// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUGSCHEMASUGUSERSTATISTICS_H
#define SUGSCHEMASUGUSERSTATISTICS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SUGSchemaSUGAggregateCounts.h"

@interface SUGSchemaSUGUserStatistics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsTwoByThreeUser;
@property (nonatomic) BOOL hasTotalPreviousSuggestionsShown; // ivar: _hasTotalPreviousSuggestionsShown
@property (nonatomic) BOOL hasTotalSiriHelpRequests; // ivar: _hasTotalSiriHelpRequests
@property (nonatomic) BOOL hasTotalSiriRequests; // ivar: _hasTotalSiriRequests
@property (nonatomic) BOOL hasTotalUniqueSiriEventTypes; // ivar: _hasTotalUniqueSiriEventTypes
@property (nonatomic) BOOL isTwoByThreeUser; // ivar: _isTwoByThreeUser
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalPreviousSuggestionsShown; // ivar: _totalPreviousSuggestionsShown
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalSiriHelpRequests; // ivar: _totalSiriHelpRequests
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalSiriRequests; // ivar: _totalSiriRequests
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalUniqueSiriEventTypes; // ivar: _totalUniqueSiriEventTypes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsTwoByThreeUser;
-(void)deleteTotalPreviousSuggestionsShown;
-(void)deleteTotalSiriHelpRequests;
-(void)deleteTotalSiriRequests;
-(void)deleteTotalUniqueSiriEventTypes;
-(void)writeTo:(id)arg0 ;


@end


#endif