// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDFACTOIDRIBBONITEM_H
#define GEOPDFACTOIDRIBBONITEM_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDFactoidRibbonItem : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _factoidItemIndex;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif