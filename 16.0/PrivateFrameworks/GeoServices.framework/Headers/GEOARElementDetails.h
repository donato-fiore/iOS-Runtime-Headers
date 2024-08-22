// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOARELEMENTDETAILS_H
#define GEOARELEMENTDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOARElementDetails : PBCodable <NSCopying>

 {
    int _arElementShown;
    BOOL _didSafetyUiTraggier;
    BOOL _didUserSeeArLabel;
    ? _flags;
}


@property (nonatomic) int arElementShown;
@property (nonatomic) BOOL didSafetyUiTraggier;
@property (nonatomic) BOOL didUserSeeArLabel;
@property (nonatomic) BOOL hasArElementShown;
@property (nonatomic) BOOL hasDidSafetyUiTraggier;
@property (nonatomic) BOOL hasDidUserSeeArLabel;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)arElementShownAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsArElementShown:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif