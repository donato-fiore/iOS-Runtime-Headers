// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWMEDIAPLAYERPLAYBACKCONTEXTTIER1_H
#define FLOWSCHEMAFLOWMEDIAPLAYERPLAYBACKCONTEXTTIER1_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int adamId; // ivar: _adamId
@property (copy, nonatomic) NSString *adamIdString; // ivar: _adamIdString
@property (copy, nonatomic) NSString *contentTitle; // ivar: _contentTitle
@property (nonatomic) BOOL hasAdamId;
@property (nonatomic) BOOL hasAdamIdString; // ivar: _hasAdamIdString
@property (nonatomic) BOOL hasContentTitle; // ivar: _hasContentTitle
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAdamId;
-(void)deleteAdamIdString;
-(void)deleteContentTitle;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif