// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPROACTIVEITEM_H
#define GEOPROACTIVEITEM_H

@class PBCodable;
@protocol NSCopying;



@interface GEOProactiveItem : PBCodable <NSCopying>

 {
    int _proactiveItemType;
    int _timeSinceStart;
    BOOL _deleted;
    BOOL _edited;
    BOOL _shared;
    BOOL _tapped;
    BOOL _visible;
    ? _flags;
}


@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) BOOL hasProactiveItemType;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL hasTapped;
@property (nonatomic) BOOL hasTimeSinceStart;
@property (nonatomic) BOOL hasVisible;
@property (nonatomic) int proactiveItemType;
@property (nonatomic) BOOL shared;
@property (nonatomic) BOOL tapped;
@property (nonatomic) int timeSinceStart;
@property (nonatomic) BOOL visible;


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
-(id)proactiveItemTypeAsString:(int)arg0 ;
-(int)StringAsProactiveItemType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif