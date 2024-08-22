// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEVIDEOPLAYONTHIRDPARTYAPPINDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEVIDEOPLAYONTHIRDPARTYAPPINDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int clientHourOfDay; // ivar: _clientHourOfDay
@property (nonatomic) NSInteger clientLanguage; // ivar: _clientLanguage
@property (nonatomic) NSInteger clientLocale; // ivar: _clientLocale
@property (nonatomic) NSInteger clientRegion; // ivar: _clientRegion
@property (nonatomic) int deviceClass; // ivar: _deviceClass
@property (nonatomic) int deviceMotionState; // ivar: _deviceMotionState
@property (nonatomic) BOOL hasClientHourOfDay;
@property (nonatomic) BOOL hasClientLanguage;
@property (nonatomic) BOOL hasClientLocale;
@property (nonatomic) BOOL hasClientRegion;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) BOOL hasDeviceMotionState;
@property (nonatomic) BOOL hasIntentType;
@property (nonatomic) BOOL hasIsDeviceLockStatus;
@property (nonatomic) BOOL hasNowPlayingState;
@property (nonatomic) int intentType; // ivar: _intentType
@property (nonatomic) BOOL isDeviceLockStatus; // ivar: _isDeviceLockStatus
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int nowPlayingState; // ivar: _nowPlayingState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteClientHourOfDay;
-(void)deleteClientLanguage;
-(void)deleteClientLocale;
-(void)deleteClientRegion;
-(void)deleteDeviceClass;
-(void)deleteDeviceMotionState;
-(void)deleteIntentType;
-(void)deleteIsDeviceLockStatus;
-(void)deleteNowPlayingState;
-(void)writeTo:(id)arg0 ;


@end


#endif