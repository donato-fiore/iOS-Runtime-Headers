// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPBTRANSITICON_H
#define GEOPBTRANSITICON_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOTransitIconDataSource, NSCopying;


#import "GEOStyleAttributes.h"

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _cartoId;
    unsigned int _transitTypeEnumValue;
    ? _flags;
}


@property (readonly, nonatomic) unsigned int cartoID;
@property (nonatomic) unsigned int cartoId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCartoId;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasTransitTypeEnumValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transitTypeEnumValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)_firstAttribute;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
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