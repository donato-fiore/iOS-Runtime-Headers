// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAENABLEDSTATUS_H
#define SISCHEMAENABLEDSTATUS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAdaptiveVolumeUserPreferences.h"
#import "SISchemaAnnounceEnabledStatus.h"

@interface SISchemaEnabledStatus : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaAdaptiveVolumeUserPreferences *adaptiveVolumeUserPreferences; // ivar: _adaptiveVolumeUserPreferences
@property (retain, nonatomic) SISchemaAnnounceEnabledStatus *announceEnabledStatus; // ivar: _announceEnabledStatus
@property (nonatomic) BOOL assistantEnabled; // ivar: _assistantEnabled
@property (nonatomic) BOOL assistantOnLockscreen; // ivar: _assistantOnLockscreen
@property (nonatomic) int dataSharingOptInStatus; // ivar: _dataSharingOptInStatus
@property (nonatomic) BOOL dictationEnabled; // ivar: _dictationEnabled
@property (copy, nonatomic) NSArray *gradingOptInStateChanges; // ivar: _gradingOptInStateChanges
@property (nonatomic) BOOL hardwareButtonEnabled; // ivar: _hardwareButtonEnabled
@property (nonatomic) BOOL hasAdaptiveVolumeUserPreferences; // ivar: _hasAdaptiveVolumeUserPreferences
@property (nonatomic) BOOL hasAnnounceEnabledStatus; // ivar: _hasAnnounceEnabledStatus
@property (nonatomic) BOOL hasAssistantEnabled;
@property (nonatomic) BOOL hasAssistantOnLockscreen;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (nonatomic) BOOL hasDictationEnabled;
@property (nonatomic) BOOL hasHardwareButtonEnabled;
@property (nonatomic) BOOL hasHasHomekitHome;
@property (nonatomic) BOOL hasHeySiriEnabled;
@property (nonatomic) BOOL hasHomekitHome; // ivar: _hasHomekitHome
@property (nonatomic) BOOL hasIsAdaptiveVolumeEnabled;
@property (nonatomic) BOOL hasIsPreciseLocationEnabled;
@property (nonatomic) BOOL hasIsRemoteDarwinHeySiriEnabled;
@property (nonatomic) BOOL hasRaiseToSpeakEnabled;
@property (nonatomic) BOOL hasShortcutsAvailable;
@property (nonatomic) BOOL hasSpokenNotificationsEnabled;
@property (nonatomic) BOOL hasTypeToSiriEnabled;
@property (nonatomic) BOOL hasVoiceFeedback;
@property (nonatomic) BOOL heySiriEnabled; // ivar: _heySiriEnabled
@property (nonatomic) BOOL isAdaptiveVolumeEnabled; // ivar: _isAdaptiveVolumeEnabled
@property (nonatomic) BOOL isPreciseLocationEnabled; // ivar: _isPreciseLocationEnabled
@property (nonatomic) BOOL isRemoteDarwinHeySiriEnabled; // ivar: _isRemoteDarwinHeySiriEnabled
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL raiseToSpeakEnabled; // ivar: _raiseToSpeakEnabled
@property (nonatomic) int shortcutsAvailable; // ivar: _shortcutsAvailable
@property (nonatomic) BOOL spokenNotificationsEnabled; // ivar: _spokenNotificationsEnabled
@property (nonatomic) BOOL typeToSiriEnabled; // ivar: _typeToSiriEnabled
@property (nonatomic) int voiceFeedback; // ivar: _voiceFeedback


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)gradingOptInStateChangesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addGradingOptInStateChanges:(id)arg0 ;
-(void)clearGradingOptInStateChanges;
-(void)deleteAdaptiveVolumeUserPreferences;
-(void)deleteAnnounceEnabledStatus;
-(void)deleteAssistantEnabled;
-(void)deleteAssistantOnLockscreen;
-(void)deleteDataSharingOptInStatus;
-(void)deleteDictationEnabled;
-(void)deleteGradingOptInStateChanges;
-(void)deleteHardwareButtonEnabled;
-(void)deleteHasHomekitHome;
-(void)deleteHeySiriEnabled;
-(void)deleteIsAdaptiveVolumeEnabled;
-(void)deleteIsPreciseLocationEnabled;
-(void)deleteIsRemoteDarwinHeySiriEnabled;
-(void)deleteRaiseToSpeakEnabled;
-(void)deleteShortcutsAvailable;
-(void)deleteSpokenNotificationsEnabled;
-(void)deleteTypeToSiriEnabled;
-(void)deleteVoiceFeedback;
-(void)writeTo:(id)arg0 ;


@end


#endif