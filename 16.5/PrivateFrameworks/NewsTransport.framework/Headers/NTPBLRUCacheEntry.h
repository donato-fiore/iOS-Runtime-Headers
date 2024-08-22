// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBLRUCACHEENTRY_H
#define NTPBLRUCACHEENTRY_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBLRUCacheEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasLastAccessed;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSData *key; // ivar: _key
@property (nonatomic) NSUInteger lastAccessed; // ivar: _lastAccessed
@property (retain, nonatomic) NSData *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif