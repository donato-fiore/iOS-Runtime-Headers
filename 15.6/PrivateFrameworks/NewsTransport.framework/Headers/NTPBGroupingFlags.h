// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBGROUPINGFLAGS_H
#define NTPBGROUPINGFLAGS_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBGroupingFlags : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsEligibleForGrouping;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL isEligibleForGrouping; // ivar: _isEligibleForGrouping
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited; // ivar: _isEligibleForGroupingIfFavorited
@property (nonatomic) BOOL isHidden; // ivar: _isHidden


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif