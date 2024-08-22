// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREVEALEDPLACECARDMODULETYPETITLE_H
#define GEOREVEALEDPLACECARDMODULETYPETITLE_H

@class PBCodable;
@protocol NSCopying;



@interface GEORevealedPlaceCardModuleTypeTitle : PBCodable <NSCopying>

 {
    ? _titleElements;
}


@property (readonly, nonatomic) *int titleElements;
@property (readonly, nonatomic) NSUInteger titleElementsCount;


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
-(id)titleElementsAsString:(int)arg0 ;
-(int)StringAsTitleElements:(id)arg0 ;
-(int)titleElementsAtIndex:(NSUInteger)arg0 ;
-(void)addTitleElements:(int)arg0 ;
-(void)clearTitleElements;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif