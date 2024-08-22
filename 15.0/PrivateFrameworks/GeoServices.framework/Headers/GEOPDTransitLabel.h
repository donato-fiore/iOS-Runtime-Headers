// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDTRANSITLABEL_H
#define GEOPDTRANSITLABEL_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol GEOTransitLabelItem, NSCopying, GEOTransitArtworkDataSource;


#import "GEOPBTransitArtwork.h"

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_labelArtwork;
    NSString *_labelTextString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _labelType;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLabelArtwork;
@property (readonly, nonatomic) BOOL hasLabelTextString;
@property (nonatomic) BOOL hasLabelType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *labelArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *labelArtwork;
@property (readonly, nonatomic) NSString *labelString;
@property (retain, nonatomic) NSString *labelTextString;
@property (nonatomic) int labelType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)labelTypeAsString:(int)arg0 ;
-(int)StringAsLabelType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif