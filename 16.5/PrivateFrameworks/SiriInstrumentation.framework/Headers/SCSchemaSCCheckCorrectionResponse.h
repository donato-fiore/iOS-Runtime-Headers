// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCSCHEMASCCHECKCORRECTIONRESPONSE_H
#define SCSCHEMASCCHECKCORRECTIONRESPONSE_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface SCSchemaSCCheckCorrectionResponse : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int candidateCount; // ivar: _candidateCount
@property (nonatomic) BOOL hasCandidateCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *results; // ivar: _results


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addResults:(id)arg0 ;
-(void)clearResults;
-(void)deleteCandidateCount;
-(void)deleteResults;
-(void)writeTo:(id)arg0 ;


@end


#endif