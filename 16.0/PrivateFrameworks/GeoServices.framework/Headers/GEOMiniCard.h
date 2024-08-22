// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMINICARD_H
#define GEOMINICARD_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOFormattedString.h"

@interface GEOMiniCard : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonText;
    GEOFormattedString *_detail;
    GEOFormattedString *_metadata;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _shouldEmphasize;
    ? _flags;
}


@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) BOOL hasButtonText;
@property (readonly, nonatomic) BOOL hasDetail;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasShouldEmphasize;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOFormattedString *metadata;
@property (nonatomic) BOOL shouldEmphasize;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif