// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWMEDIAPLAYERMEDIAITEM_H
#define FLOWSCHEMAFLOWMEDIAPLAYERMEDIAITEM_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWMediaPlayerMediaItem : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (copy, nonatomic) NSString *entityId; // ivar: _entityId
@property (nonatomic) BOOL hasArtist; // ivar: _hasArtist
@property (nonatomic) BOOL hasEntityId; // ivar: _hasEntityId
@property (nonatomic) BOOL hasIsAlternative;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasTitle; // ivar: _hasTitle
@property (nonatomic) BOOL isAlternative; // ivar: _isAlternative
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteArtist;
-(void)deleteEntityId;
-(void)deleteIsAlternative;
-(void)deleteMediaType;
-(void)deleteTitle;
-(void)writeTo:(id)arg0 ;


@end


#endif