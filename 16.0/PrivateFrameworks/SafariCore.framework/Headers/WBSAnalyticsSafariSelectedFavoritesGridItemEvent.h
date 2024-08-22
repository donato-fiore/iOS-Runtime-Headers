// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSANALYTICSSAFARISELECTEDFAVORITESGRIDITEMEVENT_H
#define WBSANALYTICSSAFARISELECTEDFAVORITESGRIDITEMEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int displayContext; // ivar: _displayContext
@property (nonatomic) BOOL hasDisplayContext;
@property (nonatomic) BOOL hasItemsPerRow;
@property (nonatomic) BOOL hasRow;
@property (nonatomic) BOOL hasSection;
@property (nonatomic) BOOL hasSectionIndex;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSUInteger itemsPerRow; // ivar: _itemsPerRow
@property (nonatomic) NSUInteger row; // ivar: _row
@property (nonatomic) int section; // ivar: _section
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayContextAsString:(int)arg0 ;
-(id)sectionAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsDisplayContext:(id)arg0 ;
-(int)StringAsSection:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif