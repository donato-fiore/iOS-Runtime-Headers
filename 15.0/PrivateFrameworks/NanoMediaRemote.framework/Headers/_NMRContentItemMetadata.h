// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRCONTENTITEMMETADATA_H
#define _NMRCONTENTITEMMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _NMRContentItemMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasAlbum;
@property (readonly, nonatomic) BOOL hasArtist;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasIsAutoPlayItem;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL isAutoPlayItem; // ivar: _isAutoPlayItem
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif