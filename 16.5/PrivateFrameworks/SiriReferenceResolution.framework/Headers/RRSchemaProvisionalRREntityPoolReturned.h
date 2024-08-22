// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMAPROVISIONALRRENTITYPOOLRETURNED_H
#define RRSCHEMAPROVISIONALRRENTITYPOOLRETURNED_H

@class SISchemaInstrumentationMessage, NSArray, NSData;



@interface RRSchemaProvisionalRREntityPoolReturned : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *candidateEntities; // ivar: _candidateEntities
@property (nonatomic) unsigned int entityCount; // ivar: _entityCount
@property (nonatomic) BOOL hasEntityCount;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)candidateEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addCandidateEntities:(id)arg0 ;
-(void)clearCandidateEntities;
-(void)writeTo:(id)arg0 ;


@end


#endif