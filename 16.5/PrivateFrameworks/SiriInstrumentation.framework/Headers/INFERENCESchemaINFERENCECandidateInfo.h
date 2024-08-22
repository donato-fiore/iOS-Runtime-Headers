// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECANDIDATEINFO_H
#define INFERENCESCHEMAINFERENCECANDIDATEINFO_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECandidateInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *anonymizedEntityIdentifier; // ivar: _anonymizedEntityIdentifier
@property (nonatomic) int candidateType; // ivar: _candidateType
@property (nonatomic) BOOL hasAnonymizedEntityIdentifier; // ivar: _hasAnonymizedEntityIdentifier
@property (nonatomic) BOOL hasCandidateType;
@property (nonatomic) BOOL hasIsShownToUser;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasSearchProvider;
@property (nonatomic) BOOL isShownToUser; // ivar: _isShownToUser
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) int searchProvider; // ivar: _searchProvider


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAnonymizedEntityIdentifier;
-(void)deleteCandidateType;
-(void)deleteIsShownToUser;
-(void)deleteRank;
-(void)deleteScore;
-(void)deleteSearchProvider;
-(void)writeTo:(id)arg0 ;


@end


#endif