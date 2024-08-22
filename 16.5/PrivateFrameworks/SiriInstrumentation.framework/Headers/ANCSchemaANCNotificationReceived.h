// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANCSCHEMAANCNOTIFICATIONRECEIVED_H
#define ANCSCHEMAANCNOTIFICATIONRECEIVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ANCSchemaANCBackgroundContent.h"
#import "ANCSchemaANCAudioDevice.h"
#import "SISchemaUUID.h"
#import "ANCSchemaANCAppNotificationMetadata.h"

@interface ANCSchemaANCNotificationReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int announcementCategory; // ivar: _announcementCategory
@property (nonatomic) int appCategory; // ivar: _appCategory
@property (retain, nonatomic) ANCSchemaANCBackgroundContent *backgroundContent; // ivar: _backgroundContent
@property (retain, nonatomic) ANCSchemaANCAudioDevice *connectedAudioDevice; // ivar: _connectedAudioDevice
@property (nonatomic) BOOL hasAnnouncementCategory;
@property (nonatomic) BOOL hasAppCategory;
@property (nonatomic) BOOL hasBackgroundContent; // ivar: _hasBackgroundContent
@property (nonatomic) BOOL hasConnectedAudioDevice; // ivar: _hasConnectedAudioDevice
@property (nonatomic) BOOL hasIsTimeSensitiveAnnouncement;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasNotificationMetadata; // ivar: _hasNotificationMetadata
@property (nonatomic) BOOL hasTargetPlatform;
@property (nonatomic) BOOL isTimeSensitiveAnnouncement; // ivar: _isTimeSensitiveAnnouncement
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (retain, nonatomic) ANCSchemaANCAppNotificationMetadata *notificationMetadata; // ivar: _notificationMetadata
@property (nonatomic) int targetPlatform; // ivar: _targetPlatform


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAnnouncementCategory;
-(void)deleteAppCategory;
-(void)deleteBackgroundContent;
-(void)deleteConnectedAudioDevice;
-(void)deleteIsTimeSensitiveAnnouncement;
-(void)deleteLinkId;
-(void)deleteNotificationMetadata;
-(void)deleteTargetPlatform;
-(void)writeTo:(id)arg0 ;


@end


#endif