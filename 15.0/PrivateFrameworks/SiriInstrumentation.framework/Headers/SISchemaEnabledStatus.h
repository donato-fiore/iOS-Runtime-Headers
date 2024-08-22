// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAENABLEDSTATUS_H
#define SISCHEMAENABLEDSTATUS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAnnounceEnabledStatus.h"

@interface SISchemaEnabledStatus : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaAnnounceEnabledStatus *announceEnabledStatus; // ivar: _announceEnabledStatus
@property (nonatomic) BOOL assistantEnabled; // ivar: _assistantEnabled
@property (nonatomic) BOOL assistantOnLockscreen; // ivar: _assistantOnLockscreen
@property (nonatomic) int dataSharingOptInStatus; // ivar: _dataSharingOptInStatus
@property (nonatomic) BOOL dictationEnabled; // ivar: _dictationEnabled
@property (nonatomic) BOOL hardwareButtonEnabled; // ivar: _hardwareButtonEnabled
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
@property (nonatomic) BOOL hasRaiseToSpeakEnabled;
@property (nonatomic) BOOL hasShortcutsAvailable;
@property (nonatomic) BOOL hasSpokenNotificationsEnabled;
@property (nonatomic) BOOL hasTypeToSiriEnabled;
@property (nonatomic) BOOL hasVoiceFeedback;
@property (nonatomic) BOOL heySiriEnabled; // ivar: _heySiriEnabled
@property (nonatomic) BOOL isAdaptiveVolumeEnabled; // ivar: _isAdaptiveVolumeEnabled
@property (nonatomic) BOOL isPreciseLocationEnabled; // ivar: _isPreciseLocationEnabled
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL raiseToSpeakEnabled; // ivar: _raiseToSpeakEnabled
@property (nonatomic) int shortcutsAvailable; // ivar: _shortcutsAvailable
@property (nonatomic) BOOL spokenNotificationsEnabled; // ivar: _spokenNotificationsEnabled
@property (nonatomic) BOOL typeToSiriEnabled; // ivar: _typeToSiriEnabled
@property (nonatomic) int voiceFeedback; // ivar: _voiceFeedback


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif