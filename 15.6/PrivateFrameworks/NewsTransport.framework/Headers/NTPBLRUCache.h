// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBLRUCACHE_H
#define NTPBLRUCACHE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBLRUCache : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *entries; // ivar: _entries


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entriesAtIndex:(NSUInteger)arg0 ;
-(void)addEntries:(id)arg0 ;
-(void)clearEntries;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif