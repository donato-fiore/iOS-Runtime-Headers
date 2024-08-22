// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBCACHEHINT_H
#define NTPBCACHEHINT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBCacheHint : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger accessTime; // ivar: _accessTime
@property (nonatomic) BOOL hasAccessTime;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasLifetime;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int lifetime; // ivar: _lifetime


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