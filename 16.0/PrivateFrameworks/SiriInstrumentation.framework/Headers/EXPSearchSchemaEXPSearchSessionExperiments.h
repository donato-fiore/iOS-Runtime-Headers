// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPSEARCHSCHEMAEXPSEARCHSESSIONEXPERIMENTS_H
#define EXPSEARCHSCHEMAEXPSEARCHSESSIONEXPERIMENTS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface EXPSearchSchemaEXPSearchSessionExperiments : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeExperiments; // ivar: _activeExperiments
@property (nonatomic) BOOL hasSearchSessionId; // ivar: _hasSearchSessionId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *searchSessionId; // ivar: _searchSessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeExperimentsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addActiveExperiments:(id)arg0 ;
-(void)clearActiveExperiments;
-(void)deleteActiveExperiments;
-(void)deleteSearchSessionId;
-(void)writeTo:(id)arg0 ;


@end


#endif