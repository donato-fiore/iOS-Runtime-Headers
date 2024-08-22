// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEWORKOUTSAPPSELECTIONTRAININGINDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEWORKOUTSAPPSELECTIONTRAININGINDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCECommonAppIndependentSignals.h"

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent; // ivar: _commonIndependent
@property (nonatomic) int deviceMotionState; // ivar: _deviceMotionState
@property (nonatomic) BOOL hasCommonIndependent; // ivar: _hasCommonIndependent
@property (nonatomic) BOOL hasDeviceMotionState;
@property (nonatomic) BOOL hasIsDeviceLockStatus;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (nonatomic) BOOL hasIsMobileDataOn;
@property (nonatomic) BOOL hasIsWifiOn;
@property (nonatomic) BOOL hasNowPlayingState;
@property (nonatomic) BOOL hasWorkoutType;
@property (nonatomic) BOOL isDeviceLockStatus; // ivar: _isDeviceLockStatus
@property (nonatomic) BOOL isIndoorWorkout; // ivar: _isIndoorWorkout
@property (nonatomic) BOOL isMobileDataOn; // ivar: _isMobileDataOn
@property (nonatomic) BOOL isWifiOn; // ivar: _isWifiOn
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int nowPlayingState; // ivar: _nowPlayingState
@property (nonatomic) int workoutType; // ivar: _workoutType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCommonIndependent;
-(void)deleteDeviceMotionState;
-(void)deleteIsDeviceLockStatus;
-(void)deleteIsIndoorWorkout;
-(void)deleteIsMobileDataOn;
-(void)deleteIsWifiOn;
-(void)deleteNowPlayingState;
-(void)deleteWorkoutType;
-(void)writeTo:(id)arg0 ;


@end


#endif