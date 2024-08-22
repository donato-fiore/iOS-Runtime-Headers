// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMAPROVISIONALRRENTITYPOOLRESOLVEENDED_H
#define RRSCHEMAPROVISIONALRRENTITYPOOLRESOLVEENDED_H

@class SISchemaInstrumentationMessage, NSData, NSArray;



@interface RRSchemaProvisionalRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int outcome; // ivar: _outcome
@property (copy, nonatomic) NSArray *queryResults; // ivar: _queryResults


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)queryResultsAtIndex:(NSUInteger)arg0 ;
-(void)addQueryResults:(id)arg0 ;
-(void)clearQueryResults;
-(void)writeTo:(id)arg0 ;


@end


#endif