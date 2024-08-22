// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSCHATSUGGESTSHARDITEM_H
#define BCSCHATSUGGESTSHARDITEM_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface BCSChatSuggestShardItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (retain, nonatomic) NSData *filter; // ivar: _filter
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasFilter;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) NSInteger index; // ivar: _index
@property (nonatomic) NSInteger ttl; // ivar: _ttl


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