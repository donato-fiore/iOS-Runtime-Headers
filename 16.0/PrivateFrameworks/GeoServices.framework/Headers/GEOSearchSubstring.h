// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSEARCHSUBSTRING_H
#define GEOSEARCHSUBSTRING_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOSearchSubstring : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spanDatas;
    int _beginIndex;
    int _endIndex;
    int _stringType;
}


@property (nonatomic) int beginIndex;
@property (nonatomic) int endIndex;
@property (retain, nonatomic) NSMutableArray *spanDatas;
@property (nonatomic) int stringType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)spanDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)spanDataAtIndex:(NSUInteger)arg0 ;
-(id)stringTypeAsString:(int)arg0 ;
-(int)StringAsStringType:(id)arg0 ;
-(void)addSpanData:(id)arg0 ;
-(void)clearSpanDatas;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif