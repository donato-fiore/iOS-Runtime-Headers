// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKCOORDINATEFIELD_H
#define GEORPFEEDBACKCOORDINATEFIELD_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEORPFeedbackTileFeatureInfo.h"
#import "GEOLatLng.h"

@interface GEORPFeedbackCoordinateField : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORPFeedbackTileFeatureInfo *_editedTile;
    GEOLatLng *_edited;
    GEORPFeedbackTileFeatureInfo *_originalTile;
    GEOLatLng *_original;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOLatLng *edited;
@property (retain, nonatomic) GEORPFeedbackTileFeatureInfo *editedTile;
@property (readonly, nonatomic) BOOL hasEdited;
@property (readonly, nonatomic) BOOL hasEditedTile;
@property (readonly, nonatomic) BOOL hasOriginal;
@property (readonly, nonatomic) BOOL hasOriginalTile;
@property (retain, nonatomic) GEOLatLng *original;
@property (retain, nonatomic) GEORPFeedbackTileFeatureInfo *originalTile;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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