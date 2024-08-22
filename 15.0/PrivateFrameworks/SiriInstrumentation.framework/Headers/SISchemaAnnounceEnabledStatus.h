// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAANNOUNCEENABLEDSTATUS_H
#define SISCHEMAANNOUNCEENABLEDSTATUS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAnnounceNotifications.h"

@interface SISchemaAnnounceEnabledStatus : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL announceCallsEnabled; // ivar: _announceCallsEnabled
@property (nonatomic) BOOL announceMessagesEnabled; // ivar: _announceMessagesEnabled
@property (retain, nonatomic) SISchemaAnnounceNotifications *announceNotifications; // ivar: _announceNotifications
@property (nonatomic) BOOL hasAnnounceCallsEnabled;
@property (nonatomic) BOOL hasAnnounceMessagesEnabled;
@property (nonatomic) BOOL hasAnnounceNotifications; // ivar: _hasAnnounceNotifications
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif