// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESSIRIPEGASUSMETADATA_H
#define POMMESSCHEMAPOMMESSIRIPEGASUSMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESSiriPegasusMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasInteractionType;
@property (nonatomic) BOOL hasIsCarplay;
@property (nonatomic) BOOL hasIsExplicitContentAllowed;
@property (nonatomic) BOOL hasIsInRestrictedSharingMode;
@property (nonatomic) BOOL hasIsWebContentDisabled;
@property (nonatomic) BOOL hasMovieRestriction;
@property (nonatomic) BOOL hasTvRestriction;
@property (nonatomic) int interactionType; // ivar: _interactionType
@property (nonatomic) BOOL isCarplay; // ivar: _isCarplay
@property (nonatomic) BOOL isExplicitContentAllowed; // ivar: _isExplicitContentAllowed
@property (nonatomic) BOOL isInRestrictedSharingMode; // ivar: _isInRestrictedSharingMode
@property (nonatomic) BOOL isWebContentDisabled; // ivar: _isWebContentDisabled
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int movieRestriction; // ivar: _movieRestriction
@property (nonatomic) unsigned int tvRestriction; // ivar: _tvRestriction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteInteractionType;
-(void)deleteIsCarplay;
-(void)deleteIsExplicitContentAllowed;
-(void)deleteIsInRestrictedSharingMode;
-(void)deleteIsWebContentDisabled;
-(void)deleteMovieRestriction;
-(void)deleteTvRestriction;
-(void)writeTo:(id)arg0 ;


@end


#endif