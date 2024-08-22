// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEWORKOUTSAPPSELECTIONTRAININGDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEWORKOUTSAPPSELECTIONTRAININGDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCECommonAppDependentSignals.h"

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingDependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentSignals *commonDependent; // ivar: _commonDependent
@property (nonatomic) BOOL hasCommonDependent; // ivar: _hasCommonDependent
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (nonatomic) BOOL hasWorkoutType;
@property (nonatomic) BOOL isIndoorWorkout; // ivar: _isIndoorWorkout
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int workoutType; // ivar: _workoutType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCommonDependent;
-(void)deleteIsIndoorWorkout;
-(void)deleteWorkoutType;
-(void)writeTo:(id)arg0 ;


@end


#endif