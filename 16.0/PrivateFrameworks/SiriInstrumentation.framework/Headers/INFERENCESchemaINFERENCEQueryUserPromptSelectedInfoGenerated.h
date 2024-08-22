// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEQUERYUSERPROMPTSELECTEDINFOGENERATED_H
#define INFERENCESCHEMAINFERENCEQUERYUSERPROMPTSELECTEDINFOGENERATED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *anonymizedSelectedEntityIdentifier; // ivar: _anonymizedSelectedEntityIdentifier
@property (nonatomic) int confirmationResolution; // ivar: _confirmationResolution
@property (nonatomic) int disambiguationResolution; // ivar: _disambiguationResolution
@property (nonatomic) BOOL hasAnonymizedSelectedEntityIdentifier; // ivar: _hasAnonymizedSelectedEntityIdentifier
@property (nonatomic) BOOL hasConfirmationResolution; // ivar: _hasConfirmationResolution
@property (nonatomic) BOOL hasDisambiguationResolution; // ivar: _hasDisambiguationResolution
@property (nonatomic) BOOL hasOriginalResolutionContextId; // ivar: _hasOriginalResolutionContextId
@property (nonatomic) BOOL hasQueryId; // ivar: _hasQueryId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId; // ivar: _originalResolutionContextId
@property (retain, nonatomic) SISchemaUUID *queryId; // ivar: _queryId
@property (readonly, nonatomic) NSUInteger whichResolutiontype; // ivar: _whichResolutiontype


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAnonymizedSelectedEntityIdentifier;
-(void)deleteConfirmationResolution;
-(void)deleteDisambiguationResolution;
-(void)deleteOriginalResolutionContextId;
-(void)deleteQueryId;
-(void)writeTo:(id)arg0 ;


@end


#endif