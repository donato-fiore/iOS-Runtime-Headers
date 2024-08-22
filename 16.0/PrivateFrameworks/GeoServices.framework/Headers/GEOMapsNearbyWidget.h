// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPSNEARBYWIDGET_H
#define GEOMAPSNEARBYWIDGET_H

@class PBCodable;
@protocol NSCopying;


#import "GEOMapsServerMetadata.h"

@interface GEOMapsNearbyWidget : PBCodable <NSCopying>

 {
    GEOMapsServerMetadata *_serverMetadata;
    int _tappedItemIndex;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasServerMetadata;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) int tappedItemIndex;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif