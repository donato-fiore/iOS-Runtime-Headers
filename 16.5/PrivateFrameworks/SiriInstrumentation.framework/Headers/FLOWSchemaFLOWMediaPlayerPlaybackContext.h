// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWMEDIAPLAYERPLAYBACKCONTEXT_H
#define FLOWSCHEMAFLOWMEDIAPLAYERPLAYBACKCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "FLOWSchemaFLOWMediaPlayerPlaylistContext.h"
#import "FLOWSchemaFLOWMediaPlayerRadioStationContext.h"

@interface FLOWSchemaFLOWMediaPlayerPlaybackContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int contentSource; // ivar: _contentSource
@property (nonatomic) int endpoint; // ivar: _endpoint
@property (nonatomic) int executionSource; // ivar: _executionSource
@property (nonatomic) BOOL hasContentSource;
@property (nonatomic) BOOL hasEndpoint;
@property (nonatomic) BOOL hasExecutionSource;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasPlaylistContext; // ivar: _hasPlaylistContext
@property (nonatomic) BOOL hasRadioStationContext; // ivar: _hasRadioStationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaylistContext *playlistContext; // ivar: _playlistContext
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerRadioStationContext *radioStationContext; // ivar: _radioStationContext
@property (readonly, nonatomic) NSUInteger whichContenttype; // ivar: _whichContenttype


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContentSource;
-(void)deleteEndpoint;
-(void)deleteExecutionSource;
-(void)deleteLinkId;
-(void)deletePlaylistContext;
-(void)deleteRadioStationContext;
-(void)writeTo:(id)arg0 ;


@end


#endif