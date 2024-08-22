// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCECONTACTCANDIDATESINFOGENERATED_H
#define INFERENCESCHEMAINFERENCECONTACTCANDIDATESINFOGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEContactQueryMetadata.h"
#import "SISchemaUUID.h"

@interface INFERENCESchemaINFERENCEContactCandidatesInfoGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *candidates; // ivar: _candidates
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactQueryMetadata *contactQueryMetadata; // ivar: _contactQueryMetadata
@property (nonatomic) BOOL hasContactQueryMetadata; // ivar: _hasContactQueryMetadata
@property (nonatomic) BOOL hasOntologySource;
@property (nonatomic) BOOL hasOriginalResolutionContextId; // ivar: _hasOriginalResolutionContextId
@property (nonatomic) BOOL hasQueryId; // ivar: _hasQueryId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int ontologySource; // ivar: _ontologySource
@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId; // ivar: _originalResolutionContextId
@property (retain, nonatomic) SISchemaUUID *queryId; // ivar: _queryId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)candidatesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addCandidates:(id)arg0 ;
-(void)clearCandidates;
-(void)deleteCandidates;
-(void)deleteContactQueryMetadata;
-(void)deleteOntologySource;
-(void)deleteOriginalResolutionContextId;
-(void)deleteQueryId;
-(void)writeTo:(id)arg0 ;


@end


#endif