// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCENOTEBOOKAPPSELECTIONGROUNDTRUTHGENERATED_H
#define INFERENCESCHEMAINFERENCENOTEBOOKAPPSELECTIONGROUNDTRUTHGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals.h"

@interface INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasInferenceNotebookAppSelectionTrainingAppIndependentSignals; // ivar: _hasInferenceNotebookAppSelectionTrainingAppIndependentSignals
@property (copy, nonatomic) NSArray *inferenceNotebookAppSelectionTrainingAppDependentSignals; // ivar: _inferenceNotebookAppSelectionTrainingAppDependentSignals
@property (retain, nonatomic) INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals *inferenceNotebookAppSelectionTrainingAppIndependentSignals; // ivar: _inferenceNotebookAppSelectionTrainingAppIndependentSignals
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)inferenceNotebookAppSelectionTrainingAppDependentSignalsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addInferenceNotebookAppSelectionTrainingAppDependentSignals:(id)arg0 ;
-(void)clearInferenceNotebookAppSelectionTrainingAppDependentSignals;
-(void)deleteInferenceNotebookAppSelectionTrainingAppDependentSignals;
-(void)deleteInferenceNotebookAppSelectionTrainingAppIndependentSignals;
-(void)writeTo:(id)arg0 ;


@end


#endif