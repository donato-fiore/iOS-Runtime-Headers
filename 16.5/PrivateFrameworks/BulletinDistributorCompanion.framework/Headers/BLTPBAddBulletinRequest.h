// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBADDBULLETINREQUEST_H
#define BLTPBADDBULLETINREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "BLTPBBulletin.h"

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) BLTPBBulletin *bulletin; // ivar: _bulletin
@property (nonatomic) CGFloat date; // ivar: _date
@property (readonly, nonatomic) BOOL hasBulletin;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasShouldPlayLightsAndSirens;
@property (nonatomic) BOOL hasTrafficRestricted;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) BOOL shouldPlayLightsAndSirens; // ivar: _shouldPlayLightsAndSirens
@property (nonatomic) BOOL trafficRestricted; // ivar: _trafficRestricted
@property (nonatomic) unsigned int updateType; // ivar: _updateType


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