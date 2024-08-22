// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSCHEMACAMMODELEXECUTED_H
#define CAMSCHEMACAMMODELEXECUTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAsset.h"
#import "CAMSchemaCAMModelId.h"

@interface CAMSchemaCAMModelExecuted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaAsset *asset; // ivar: _asset
@property (nonatomic) BOOL hasAsset; // ivar: _hasAsset
@property (nonatomic) BOOL hasIsShadowLog;
@property (nonatomic) BOOL hasModelId; // ivar: _hasModelId
@property (nonatomic) BOOL hasPrediction;
@property (nonatomic) BOOL hasPredictionScore;
@property (nonatomic) BOOL hasPredictionThreshold;
@property (nonatomic) BOOL isShadowLog; // ivar: _isShadowLog
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CAMSchemaCAMModelId *modelId; // ivar: _modelId
@property (nonatomic) unsigned int prediction; // ivar: _prediction
@property (nonatomic) float predictionScore; // ivar: _predictionScore
@property (nonatomic) float predictionThreshold; // ivar: _predictionThreshold


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAsset;
-(void)deleteIsShadowLog;
-(void)deleteModelId;
-(void)deletePrediction;
-(void)deletePredictionScore;
-(void)deletePredictionThreshold;
-(void)writeTo:(id)arg0 ;


@end


#endif