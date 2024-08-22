// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAANNOUNCECARPLAYGLYPHSETTINGTOGGLED_H
#define SISCHEMAANNOUNCECARPLAYGLYPHSETTINGTOGGLED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaAnnounceCarPlayGlyphSettingToggled : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL announcementsMuted; // ivar: _announcementsMuted
@property (nonatomic) BOOL hasAnnouncementsMuted;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAnnouncementsMuted;
-(void)writeTo:(id)arg0 ;


@end


#endif