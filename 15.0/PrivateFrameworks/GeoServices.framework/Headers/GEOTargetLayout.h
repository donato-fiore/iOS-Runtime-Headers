// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTARGETLAYOUT_H
#define GEOTARGETLAYOUT_H

@class PBCodable;
@protocol NSCopying;



@interface GEOTargetLayout : PBCodable <NSCopying>

 {
    int _layoutInfo;
    int _layoutStyle;
    int _uiTarget;
    ? _flags;
}


@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) BOOL hasUiTarget;
@property (nonatomic) int layoutInfo;
@property (nonatomic) int layoutStyle;
@property (nonatomic) int uiTarget;


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
-(id)layoutInfoAsString:(int)arg0 ;
-(id)layoutStyleAsString:(int)arg0 ;
-(id)uiTargetAsString:(int)arg0 ;
-(int)StringAsLayoutInfo:(id)arg0 ;
-(int)StringAsLayoutStyle:(id)arg0 ;
-(int)StringAsUiTarget:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif