// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAENGAGEDACCESSORYCONTEXT_H
#define SISCHEMAENGAGEDACCESSORYCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SISchemaEngagedAccessoryContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *accessoryBrand; // ivar: _accessoryBrand
@property (retain, nonatomic) SISchemaUUID *accessoryId; // ivar: _accessoryId
@property (copy, nonatomic) NSString *accessoryModel; // ivar: _accessoryModel
@property (nonatomic) BOOL hasAccessoryBrand; // ivar: _hasAccessoryBrand
@property (nonatomic) BOOL hasAccessoryId; // ivar: _hasAccessoryId
@property (nonatomic) BOOL hasAccessoryModel; // ivar: _hasAccessoryModel
@property (nonatomic) BOOL hasHomeKitAccessoryType;
@property (nonatomic) BOOL hasIsAudioPlaybackCapable;
@property (nonatomic) BOOL hasIsThirdPartyMusicEnabled;
@property (nonatomic) int homeKitAccessoryType; // ivar: _homeKitAccessoryType
@property (nonatomic) BOOL isAudioPlaybackCapable; // ivar: _isAudioPlaybackCapable
@property (nonatomic) BOOL isThirdPartyMusicEnabled; // ivar: _isThirdPartyMusicEnabled
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAccessoryBrand;
-(void)deleteAccessoryId;
-(void)deleteAccessoryModel;
-(void)deleteHomeKitAccessoryType;
-(void)deleteIsAudioPlaybackCapable;
-(void)deleteIsThirdPartyMusicEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif