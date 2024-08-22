// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTTILESETSTATE_H
#define GEOLOGMSGEVENTTILESETSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying>

 {
    CGFloat _durationInOldState;
    CGFloat _newCoverage;
    CGFloat _oldCoverage;
    int _tileSetStateType;
    ? _flags;
}


@property (nonatomic) CGFloat durationInOldState;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) BOOL hasNewCoverage;
@property (nonatomic) BOOL hasOldCoverage;
@property (nonatomic) BOOL hasTileSetStateType;
@property (nonatomic) CGFloat newCoverage;
@property (nonatomic) CGFloat oldCoverage;
@property (nonatomic) int tileSetStateType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)tileSetStateTypeAsString:(int)arg0 ;
-(int)StringAsTileSetStateType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif