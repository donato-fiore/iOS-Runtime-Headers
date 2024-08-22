// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESDEVICESTATE_H
#define POMMESSCHEMAPOMMESDEVICESTATE_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESDeviceState : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *companionName; // ivar: _companionName
@property (nonatomic) BOOL hasCompanionName; // ivar: _hasCompanionName
@property (nonatomic) BOOL hasIsCarDoNotDisturbModeEnabled;
@property (nonatomic) BOOL hasIsCarPlayEnabled;
@property (nonatomic) BOOL hasIsEyesFreeEnabled;
@property (nonatomic) BOOL hasIsLockedWithPasscode;
@property (nonatomic) BOOL hasIsMultiUserDevice;
@property (nonatomic) BOOL hasIsTextToSpeechEnabled;
@property (nonatomic) BOOL hasIsVoiceTriggerEnabled;
@property (nonatomic) BOOL isCarDoNotDisturbModeEnabled; // ivar: _isCarDoNotDisturbModeEnabled
@property (nonatomic) BOOL isCarPlayEnabled; // ivar: _isCarPlayEnabled
@property (nonatomic) BOOL isEyesFreeEnabled; // ivar: _isEyesFreeEnabled
@property (nonatomic) BOOL isLockedWithPasscode; // ivar: _isLockedWithPasscode
@property (nonatomic) BOOL isMultiUserDevice; // ivar: _isMultiUserDevice
@property (nonatomic) BOOL isTextToSpeechEnabled; // ivar: _isTextToSpeechEnabled
@property (nonatomic) BOOL isVoiceTriggerEnabled; // ivar: _isVoiceTriggerEnabled
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCompanionName;
-(void)deleteIsCarDoNotDisturbModeEnabled;
-(void)deleteIsCarPlayEnabled;
-(void)deleteIsEyesFreeEnabled;
-(void)deleteIsLockedWithPasscode;
-(void)deleteIsMultiUserDevice;
-(void)deleteIsTextToSpeechEnabled;
-(void)deleteIsVoiceTriggerEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif