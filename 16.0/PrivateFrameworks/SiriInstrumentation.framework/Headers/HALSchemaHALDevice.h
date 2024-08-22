// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HALSCHEMAHALDEVICE_H
#define HALSCHEMAHALDEVICE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "HALSchemaHALAlarmContext.h"
#import "HALSchemaHALMediaPlayerContext.h"
#import "HALSchemaHALTimerContext.h"
#import "HALSchemaHALVoiceTriggerContext.h"

@interface HALSchemaHALDevice : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) HALSchemaHALAlarmContext *alarmContext; // ivar: _alarmContext
@property (nonatomic) int deviceFamily; // ivar: _deviceFamily
@property (nonatomic) int deviceProximity; // ivar: _deviceProximity
@property (nonatomic) BOOL hasAlarmContext; // ivar: _hasAlarmContext
@property (nonatomic) BOOL hasDeviceFamily;
@property (nonatomic) BOOL hasDeviceProximity;
@property (nonatomic) BOOL hasMediaPlayerContext; // ivar: _hasMediaPlayerContext
@property (nonatomic) BOOL hasPowerState;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) BOOL hasSystemBuild; // ivar: _hasSystemBuild
@property (nonatomic) BOOL hasTimerContext; // ivar: _hasTimerContext
@property (nonatomic) BOOL hasVoiceTriggerContext; // ivar: _hasVoiceTriggerContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) HALSchemaHALMediaPlayerContext *mediaPlayerContext; // ivar: _mediaPlayerContext
@property (nonatomic) int powerState; // ivar: _powerState
@property (nonatomic) int siriInputLocale; // ivar: _siriInputLocale
@property (copy, nonatomic) NSString *systemBuild; // ivar: _systemBuild
@property (retain, nonatomic) HALSchemaHALTimerContext *timerContext; // ivar: _timerContext
@property (retain, nonatomic) HALSchemaHALVoiceTriggerContext *voiceTriggerContext; // ivar: _voiceTriggerContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAlarmContext;
-(void)deleteDeviceFamily;
-(void)deleteDeviceProximity;
-(void)deleteMediaPlayerContext;
-(void)deletePowerState;
-(void)deleteSiriInputLocale;
-(void)deleteSystemBuild;
-(void)deleteTimerContext;
-(void)deleteVoiceTriggerContext;
-(void)writeTo:(id)arg0 ;


@end


#endif