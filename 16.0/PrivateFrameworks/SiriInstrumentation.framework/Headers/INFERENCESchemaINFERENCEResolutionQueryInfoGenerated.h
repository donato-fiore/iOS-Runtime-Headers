// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCERESOLUTIONQUERYINFOGENERATED_H
#define INFERENCESCHEMAINFERENCERESOLUTIONQUERYINFOGENERATED_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface INFERENCESchemaINFERENCEResolutionQueryInfoGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *anonymizedRecommendedEntityIdentifiers; // ivar: _anonymizedRecommendedEntityIdentifiers
@property (nonatomic) int forcePromptType; // ivar: _forcePromptType
@property (nonatomic) BOOL hasForcePromptType;
@property (nonatomic) BOOL hasOriginalResolutionContextId; // ivar: _hasOriginalResolutionContextId
@property (nonatomic) BOOL hasQueryId; // ivar: _hasQueryId
@property (nonatomic) BOOL hasRecommenderModelVersion; // ivar: _hasRecommenderModelVersion
@property (nonatomic) BOOL hasResolutionState;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId; // ivar: _originalResolutionContextId
@property (retain, nonatomic) SISchemaUUID *queryId; // ivar: _queryId
@property (copy, nonatomic) NSString *recommenderModelVersion; // ivar: _recommenderModelVersion
@property (nonatomic) int resolutionState; // ivar: _resolutionState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)anonymizedRecommendedEntityIdentifierCount;
-(NSUInteger)hash;
-(id)anonymizedRecommendedEntityIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAnonymizedRecommendedEntityIdentifier:(id)arg0 ;
-(void)clearAnonymizedRecommendedEntityIdentifier;
-(void)deleteAnonymizedRecommendedEntityIdentifier;
-(void)deleteForcePromptType;
-(void)deleteOriginalResolutionContextId;
-(void)deleteQueryId;
-(void)deleteRecommenderModelVersion;
-(void)deleteResolutionState;
-(void)writeTo:(id)arg0 ;


@end


#endif