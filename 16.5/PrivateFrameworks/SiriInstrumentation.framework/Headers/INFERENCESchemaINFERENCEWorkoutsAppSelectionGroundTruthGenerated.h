// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEWORKOUTSAPPSELECTIONGROUNDTRUTHGENERATED_H
#define INFERENCESCHEMAINFERENCEWORKOUTSAPPSELECTIONGROUNDTRUTHGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals.h"

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasInferenceWorkoutsAppSelectionTrainingIndependentSignals; // ivar: _hasInferenceWorkoutsAppSelectionTrainingIndependentSignals
@property (copy, nonatomic) NSArray *inferenceWorkoutsAppSelectionTrainingDependentSignals; // ivar: _inferenceWorkoutsAppSelectionTrainingDependentSignals
@property (retain, nonatomic) INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals *inferenceWorkoutsAppSelectionTrainingIndependentSignals; // ivar: _inferenceWorkoutsAppSelectionTrainingIndependentSignals
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)inferenceWorkoutsAppSelectionTrainingDependentSignalsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addInferenceWorkoutsAppSelectionTrainingDependentSignals:(id)arg0 ;
-(void)clearInferenceWorkoutsAppSelectionTrainingDependentSignals;
-(void)deleteInferenceWorkoutsAppSelectionTrainingDependentSignals;
-(void)deleteInferenceWorkoutsAppSelectionTrainingIndependentSignals;
-(void)writeTo:(id)arg0 ;


@end


#endif