// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONGROUNDTRUTHGENERATED_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONGROUNDTRUTHGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasInferenceCommsAppSelectionTrainingAppIndependentSignals; // ivar: _hasInferenceCommsAppSelectionTrainingAppIndependentSignals
@property (copy, nonatomic) NSArray *inferenceCommsAppSelectionTrainingAppDependentSignals; // ivar: _inferenceCommsAppSelectionTrainingAppDependentSignals
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals *inferenceCommsAppSelectionTrainingAppIndependentSignals; // ivar: _inferenceCommsAppSelectionTrainingAppIndependentSignals
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)inferenceCommsAppSelectionTrainingAppDependentSignalsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addInferenceCommsAppSelectionTrainingAppDependentSignals:(id)arg0 ;
-(void)clearInferenceCommsAppSelectionTrainingAppDependentSignals;
-(void)deleteInferenceCommsAppSelectionTrainingAppDependentSignals;
-(void)deleteInferenceCommsAppSelectionTrainingAppIndependentSignals;
-(void)writeTo:(id)arg0 ;


@end


#endif