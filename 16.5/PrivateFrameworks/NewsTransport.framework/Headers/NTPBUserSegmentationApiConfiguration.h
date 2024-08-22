// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBUSERSEGMENTATIONAPICONFIGURATION_H
#define NTPBUSERSEGMENTATIONAPICONFIGURATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasUserSegmentationApiModMax;
@property (readonly, nonatomic) BOOL hasUserSegmentationApiModThreshold;
@property (readonly, nonatomic) BOOL hasUserSegmentationRefreshRate;
@property (retain, nonatomic) NSString *userSegmentationApiModMax; // ivar: _userSegmentationApiModMax
@property (retain, nonatomic) NSString *userSegmentationApiModThreshold; // ivar: _userSegmentationApiModThreshold
@property (retain, nonatomic) NSString *userSegmentationRefreshRate; // ivar: _userSegmentationRefreshRate


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