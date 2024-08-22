// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEPRIVATIZEDHISTORYSTATS_H
#define INFERENCESCHEMAINFERENCEPRIVATIZEDHISTORYSTATS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEPrivatizedHistoryStats : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *frequencies; // ivar: _frequencies
@property (nonatomic) BOOL hasRecency;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int recency; // ivar: _recency


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(unsigned int)frequenciesAtIndex:(NSUInteger)arg0 ;
-(void)addFrequencies:(unsigned int)arg0 ;
-(void)clearFrequencies;
-(void)deleteFrequencies;
-(void)deleteRecency;
-(void)writeTo:(id)arg0 ;


@end


#endif