// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDGROUPPARAMS_H
#define GEOPDGROUPPARAMS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDGroupData.h"

@interface GEOPDGroupParams : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDGroupData *_groupData;
    int _actionDataItemIndex;
    int _groupButtonType;
    ? _flags;
}


@property (nonatomic) int actionDataItemIndex;
@property (nonatomic) int groupButtonType;
@property (retain, nonatomic) GEOPDGroupData *groupData;
@property (nonatomic) BOOL hasActionDataItemIndex;
@property (nonatomic) BOOL hasGroupButtonType;
@property (readonly, nonatomic) BOOL hasGroupData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupButtonTypeAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsGroupButtonType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif