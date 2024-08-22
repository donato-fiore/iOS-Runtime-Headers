// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCECRRTRAININGSAMPLECOLLECTED_H
#define INFERENCESCHEMAINFERENCECRRTRAININGSAMPLECOLLECTED_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEPromptContext.h"
#import "INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext.h"
#import "INFERENCESchemaINFERENCEContactResolverConfig.h"
#import "INFERENCESchemaINFERENCETrialEnrollment.h"

@interface INFERENCESchemaINFERENCECRRTrainingSampleCollected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *anonymizedContactIdentifiers; // ivar: _anonymizedContactIdentifiers
@property (retain, nonatomic) INFERENCESchemaINFERENCEPromptContext *forcePrompt; // ivar: _forcePrompt
@property (nonatomic) BOOL hasForcePrompt; // ivar: _hasForcePrompt
@property (nonatomic) BOOL hasIntentTypeName; // ivar: _hasIntentTypeName
@property (nonatomic) BOOL hasInteractionContext; // ivar: _hasInteractionContext
@property (nonatomic) BOOL hasInteractionDurationInSecBucket;
@property (nonatomic) BOOL hasIsInteractionExecuted;
@property (nonatomic) BOOL hasIsInteractionSuccess;
@property (nonatomic) BOOL hasIsPlusContactSuggesterEnabled;
@property (nonatomic) BOOL hasModelVersion; // ivar: _hasModelVersion
@property (nonatomic) BOOL hasResolutionState;
@property (nonatomic) BOOL hasResolutionType;
@property (nonatomic) BOOL hasResolverConfig; // ivar: _hasResolverConfig
@property (nonatomic) BOOL hasTrialEnrollment; // ivar: _hasTrialEnrollment
@property (copy, nonatomic) NSString *intentTypeName; // ivar: _intentTypeName
@property (retain, nonatomic) INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext *interactionContext; // ivar: _interactionContext
@property (nonatomic) unsigned int interactionDurationInSecBucket; // ivar: _interactionDurationInSecBucket
@property (nonatomic) BOOL isInteractionExecuted; // ivar: _isInteractionExecuted
@property (nonatomic) BOOL isInteractionSuccess; // ivar: _isInteractionSuccess
@property (nonatomic) BOOL isPlusContactSuggesterEnabled; // ivar: _isPlusContactSuggesterEnabled
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *matches; // ivar: _matches
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (nonatomic) int resolutionState; // ivar: _resolutionState
@property (nonatomic) int resolutionType; // ivar: _resolutionType
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactResolverConfig *resolverConfig; // ivar: _resolverConfig
@property (retain, nonatomic) INFERENCESchemaINFERENCETrialEnrollment *trialEnrollment; // ivar: _trialEnrollment


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)anonymizedContactIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)matchesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAnonymizedContactIdentifiers:(id)arg0 ;
-(void)addMatches:(id)arg0 ;
-(void)clearAnonymizedContactIdentifiers;
-(void)clearMatches;
-(void)deleteAnonymizedContactIdentifiers;
-(void)deleteForcePrompt;
-(void)deleteIntentTypeName;
-(void)deleteInteractionContext;
-(void)deleteInteractionDurationInSecBucket;
-(void)deleteIsInteractionExecuted;
-(void)deleteIsInteractionSuccess;
-(void)deleteIsPlusContactSuggesterEnabled;
-(void)deleteMatches;
-(void)deleteModelVersion;
-(void)deleteResolutionState;
-(void)deleteResolutionType;
-(void)deleteResolverConfig;
-(void)deleteTrialEnrollment;
-(void)writeTo:(id)arg0 ;


@end


#endif