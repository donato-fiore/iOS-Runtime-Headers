// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATETILESET_H
#define GEOLOGMSGSTATETILESET_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgStateTileSet : PBCodable <NSCopying>

 {
    NSMutableArray *_tileSetInfos;
}


@property (retain, nonatomic) NSMutableArray *tileSetInfos;


+(BOOL)isValid:(id)arg0 ;
+(Class)tileSetInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)tileSetInfoAtIndex:(NSUInteger)arg0 ;
-(void)addTileSetInfo:(id)arg0 ;
-(void)clearTileSetInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif