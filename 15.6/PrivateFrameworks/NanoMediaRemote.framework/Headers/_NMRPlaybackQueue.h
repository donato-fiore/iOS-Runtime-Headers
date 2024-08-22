// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMRPLAYBACKQUEUE_H
#define _NMRPLAYBACKQUEUE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _NMRPlaybackQueue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *contentItems; // ivar: _contentItems
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location; // ivar: _location


+(Class)contentItemType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentItemAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContentItem:(id)arg0 ;
-(void)clearContentItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif