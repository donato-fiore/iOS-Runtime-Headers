// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEMUSICAPPSELECTIONGROUNDTRUTHGENERATED_H
#define INFERENCESCHEMAINFERENCEMUSICAPPSELECTIONGROUNDTRUTHGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEMusicTrainingIndependentSignals.h"

@interface INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasInferenceMusicTrainingIndependentSignals; // ivar: _hasInferenceMusicTrainingIndependentSignals
@property (copy, nonatomic) NSArray *inferenceMusicTrainingDependentSignals; // ivar: _inferenceMusicTrainingDependentSignals
@property (retain, nonatomic) INFERENCESchemaINFERENCEMusicTrainingIndependentSignals *inferenceMusicTrainingIndependentSignals; // ivar: _inferenceMusicTrainingIndependentSignals
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)inferenceMusicTrainingDependentSignalsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addInferenceMusicTrainingDependentSignals:(id)arg0 ;
-(void)clearInferenceMusicTrainingDependentSignals;
-(void)deleteInferenceMusicTrainingDependentSignals;
-(void)deleteInferenceMusicTrainingIndependentSignals;
-(void)writeTo:(id)arg0 ;


@end


#endif