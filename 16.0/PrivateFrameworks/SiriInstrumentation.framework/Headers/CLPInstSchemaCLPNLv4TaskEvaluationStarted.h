// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPINSTSCHEMACLPNLV4TASKEVALUATIONSTARTED_H
#define CLPINSTSCHEMACLPNLV4TASKEVALUATIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAsset.h"

@interface CLPInstSchemaCLPNLv4TaskEvaluationStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int evaluationEnvironment; // ivar: _evaluationEnvironment
@property (nonatomic) int evaluationType; // ivar: _evaluationType
@property (nonatomic) int experimentType; // ivar: _experimentType
@property (nonatomic) BOOL hasEvaluationEnvironment;
@property (nonatomic) BOOL hasEvaluationType;
@property (nonatomic) BOOL hasExperimentType;
@property (nonatomic) BOOL hasIsDebugTask;
@property (nonatomic) BOOL hasNlv4AssetVersion; // ivar: _hasNlv4AssetVersion
@property (nonatomic) BOOL hasNlv4AssetVersionOverride; // ivar: _hasNlv4AssetVersionOverride
@property (nonatomic) BOOL hasRecipeType;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) BOOL hasSyntheticDatasetVersion; // ivar: _hasSyntheticDatasetVersion
@property (nonatomic) BOOL isDebugTask; // ivar: _isDebugTask
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersion; // ivar: _nlv4AssetVersion
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersionOverride; // ivar: _nlv4AssetVersionOverride
@property (nonatomic) int recipeType; // ivar: _recipeType
@property (nonatomic) unsigned int sampleCount; // ivar: _sampleCount
@property (retain, nonatomic) SISchemaAsset *syntheticDatasetVersion; // ivar: _syntheticDatasetVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEvaluationEnvironment;
-(void)deleteEvaluationType;
-(void)deleteExperimentType;
-(void)deleteIsDebugTask;
-(void)deleteNlv4AssetVersion;
-(void)deleteNlv4AssetVersionOverride;
-(void)deleteRecipeType;
-(void)deleteSampleCount;
-(void)deleteSyntheticDatasetVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif