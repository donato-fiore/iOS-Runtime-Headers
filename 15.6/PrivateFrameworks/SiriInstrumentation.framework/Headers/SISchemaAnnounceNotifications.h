// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAANNOUNCENOTIFICATIONS_H
#define SISCHEMAANNOUNCENOTIFICATIONS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaAnnounceNotifications : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int carPlayStatus; // ivar: _carPlayStatus
@property (nonatomic) BOOL hasCarPlayStatus;
@property (nonatomic) BOOL hasIsCarPlayMuted;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL hasIsEnabledForHeadphones;
@property (nonatomic) BOOL hasProxCardSeen;
@property (nonatomic) BOOL hasReplyWithoutConfirmation;
@property (nonatomic) BOOL isCarPlayMuted; // ivar: _isCarPlayMuted
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isEnabledForHeadphones; // ivar: _isEnabledForHeadphones
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL proxCardSeen; // ivar: _proxCardSeen
@property (nonatomic) BOOL replyWithoutConfirmation; // ivar: _replyWithoutConfirmation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCarPlayStatus;
-(void)deleteIsCarPlayMuted;
-(void)deleteIsEnabled;
-(void)deleteIsEnabledForHeadphones;
-(void)deleteProxCardSeen;
-(void)deleteReplyWithoutConfirmation;
-(void)writeTo:(id)arg0 ;


@end


#endif