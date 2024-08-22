// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPANIONTRANSITALIGHTMESSAGE_H
#define GEOCOMPANIONTRANSITALIGHTMESSAGE_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPBTransitArtwork.h"
#import "GEOFormattedString.h"

@interface GEOCompanionTransitAlightMessage : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPBTransitArtwork *_artwork;
    GEOFormattedString *_detail;
    NSString *_identifier;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _stepID;
    unsigned int _stopID;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (readonly, nonatomic) BOOL hasDetail;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasStopID;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) unsigned int stopID;
@property (retain, nonatomic) GEOFormattedString *title;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif