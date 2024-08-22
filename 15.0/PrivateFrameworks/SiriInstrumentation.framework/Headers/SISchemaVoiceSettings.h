// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAVOICESETTINGS_H
#define SISCHEMAVOICESETTINGS_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasVoiceAccent;
@property (nonatomic) BOOL hasVoiceGender;
@property (nonatomic) BOOL hasVoiceName; // ivar: _hasVoiceName
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int voiceAccent; // ivar: _voiceAccent
@property (nonatomic) int voiceGender; // ivar: _voiceGender
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif